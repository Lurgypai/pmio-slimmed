#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <assert.h>

#include "log.h"

int cmdline_get_int(int *argc, char **argv, int rflag, char *name, int *val);
int cmdline_get_double(int *argc, char **argv, int rflag,
        char *name, double *val);
int cmdline_get_string(int *argc, char **argv, int rflag,
        char *name, char *val, int vallen);
void merge_logs(merger_t *merger, lchunk_t *lchunk_ion);
void add_log(merger_t *merger, int item_col);
void reset_merger(merger_t **merger, lchunk_t *lchunk_proc, int index);
merger_t* init_merger();
lchunk_t *lchunk_alloc(int index, int len, uint64_t offset);
int is_mergeable(merger_t *merger);
void merge_logs_2(merger_t *merger, merger_t *merger_2);
void print_merger(merger_t **merger);
void write_logs_2(merger_t **merger_2);
void add_log_2(merger_t *merger, int item_num);

uint64_t log_buf_used[N_IO_SERVER], log_buf_used_2[N_IO_SERVER];
uint64_t num_of_chunks[N_IO_SERVER], num_of_chunks_2[N_IO_SERVER];
uint64_t data_buf_pos[N_IO_SERVER], data_buf_pos_2[N_IO_SERVER];
void *log_buf_ion[N_IO_SERVER], *log_buf_ion_2[N_IO_SERVER];
void *data_buf_ion[N_IO_SERVER];

uint64_t pos;
uint64_t curr_item_count;
void *log_buf_out, *log_buf_2_out, *data_buf_out;
lchunk_t *cur_lchunk_final;
lchunk_t *cur_lchunk_out_ion;

void* open_and_map(char* filename) {
    int fd = open(filename, O_RDWR);
    if(fd < 0) perror(filename);

    int length = lseek(fd, 0, SEEK_END);
    if(length < 0) perror(filename);

    if(lseek(fd, 0, SEEK_SET) < 0) perror("Error seeking to front of file");

    void* buf = mmap(NULL, length, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if(buf == MAP_FAILED) perror("Error using mmap");

    return buf;
}

void* open_and_trunc(char* filename) {
    int fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0666);
    if(fd < 0) perror(filename);

    int length = 1024 * 1024 * 1024;
    if(ftruncate(fd, length) < 0) perror(filename);

    void* buf = mmap(NULL, length, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if(buf == MAP_FAILED) perror("Error using mmap");

    return buf;
}

// input:
//  one log file per io node
//  one data file per io node
// output
//  one log file (.log)
//  one log file (.log2)
//  one data file (.dat)

int main(int argc, char **argv)
{
    size_t mapped_len = 0;
    int num_procs = N_PROCS, num_ion = N_IO_SERVER;
    int i, j;

    char log_file_in_ion[N_IO_SERVER][MAX_FNAME_SIZE];
    char data_file_in_ion[N_IO_SERVER][MAX_FNAME_SIZE];
    void *log_buf_in[N_IO_SERVER], *data_buf_in[N_IO_SERVER];
    lchunk_t *cur_lchunk_ion[N_IO_SERVER];

    char log_file_final[MAX_FNAME_SIZE];
    char log_file_final_2[MAX_FNAME_SIZE];
    char data_file_final[MAX_FNAME_SIZE];


    printf("size of log item:%lu\n", sizeof(log_item_t));
    printf("#process:%d, #io nodes:%d\n", num_procs, num_ion);

    // open input files to buffers
    for(i = 0; i != num_ion; ++i) {
        sprintf(log_file_in_ion[i], "buffers/out/buf_file_ion_%d.log2", i);
        // sprintf(data_file_in_ion[i], "buffers/out/buf_file_ion_%d.dat", i);

        log_buf_in[i] = open_and_map(log_file_in_ion[i]);
        // data_buf_in[i] = open_and_map(data_file_in_ion[i]);

        cur_lchunk_ion[i] = (lchunk_t*)log_buf_in[i];
    }

    // open output files to buffers
    sprintf(log_file_final, "buffers/out/buf_file_final.log");
    sprintf(log_file_final_2, "buffers/out/buf_file_final.log2");
    // sprintf(data_file_final, "buffers/out/buf_file_final.dat");

    log_buf_out = open_and_trunc(log_file_final);
    log_buf_2_out = open_and_trunc(log_file_final_2);
    // data_buf_out = open_and_trunc(data_file_final);

    cur_lchunk_out_ion = (lchunk_t*)log_buf_out;
    cur_lchunk_final = (lchunk_t*)log_buf_2_out;

    // make this more robust, proper allocator
    memset(cur_lchunk_out_ion, 0, LCHUNK_SIZE);
    cur_lchunk_out_ion->id = 0;
    cur_lchunk_out_ion->count = 0;
    cur_lchunk_out_ion->disk_id = index;
    cur_lchunk_out_ion->req_len = 0;
    cur_lchunk_out_ion->version = 0;
    cur_lchunk_out_ion->st_offset = 0;
    cur_lchunk_out_ion->offset_stride = 0;
    cur_lchunk_out_ion->next = NULL;

    memset(cur_lchunk_final, 0, LCHUNK_SIZE);
    cur_lchunk_final->id = 0;
    cur_lchunk_final->count = 0;
    cur_lchunk_final->disk_id = index;
    cur_lchunk_final->req_len = 0;
    cur_lchunk_final->version = 0;
    cur_lchunk_final->st_offset = 0;
    cur_lchunk_final->offset_stride = 0;
    cur_lchunk_final->next = NULL;
    
    // merger 1
    //  merge across parallel items
    //  [items]
    merger_t *merger = init_merger();
    // merger 2
    //  merge across items within lchunks
    //  [items]
    merger_t *merger_2 = init_merger();
    if(!merger || !merger_2) {
        printf("Failed to initialize the merger\n");
        return 1;
    }
    // pos tracks the current item in merger 2 we're storing this in (for noncontig theirs only 1)
    pos = 0;

    // merge parallel items from each lchunk
    int iteration = 0;
    for(;;) {
        // printf("Merge iteration %d\n", iteration++);
        // printf("merging parallel items...\n");
        for(i = 0; i != N_IO_SERVER; ++i) {
            merge_logs(merger, cur_lchunk_ion[i]);
            cur_lchunk_ion[i] = (lchunk_t*)((uint64_t) cur_lchunk_ion[i] + LCHUNK_SIZE);
        }

        for(i = 0; i != curr_item_count; ++i) {
            if(merger[i].offset != -1) {
                add_log(merger, i);
            }
        }

        if(is_mergeable(merger)) {
            // printf("merging all items together\n");
            merge_logs_2(merger, merger_2);

            for(i = 0; i != N_ITEMS_PER_LCHUNK; ++i) {
                merger[i].offset = -1;
            }
        }

        // printf("check if next cur_lchunk is valid\n");
        //TODO this will segfault once it reaches eof, need a more elegant tracking solution
        if(!cur_lchunk_ion[0] || cur_lchunk_ion[0]->count == 0) break;
    }

    for(i = 0; i != N_ITEMS_PER_LCHUNK; ++i) {
        if(merger_2[i].offset != -1) {
            add_log_2(merger_2, i);
        }
    }

    printf("Merge complete.\n");
    return 0;
}

void print_merger(merger_t **merger)
{
    for(int i = 0; i < N_IO_SERVER; i++) {
        for(int j = 0; j < N_ITEMS_PER_LCHUNK; j++) {
            if(merger[i][j].offset != -1) {
                // printf("merger: i:%d, j:%d, len:%lu, offset:%lu\n", i, j, merger[i][j].len, merger[i][j].offset);
            } else {
                break;
            }
        }
    }

}

merger_t* init_merger()
{
    merger_t* merger = calloc(N_ITEMS_PER_LCHUNK, sizeof(merger_t));
    if(!merger) return NULL;

    for(int i = 0; i != N_ITEMS_PER_LCHUNK; ++i) {
        merger[i].offset = -1;
    }

    return merger;
}

void reset_merger(merger_t **merger, lchunk_t *lchunk_proc, int index)
{
    uint64_t len = lchunk_proc->req_len;

    for(int i = 0; i < N_ITEMS_PER_LCHUNK; i++) {
        log_item_t *item = &lchunk_proc->items[i];
        merger[index][i].offset = item->offset;
        merger[index][i].len = len;
    }
}

void merge_logs(merger_t *merger, lchunk_t *lchunk_ion)
{
    assert(lchunk_ion);

    int merge_triggered = 0;
    int i = 0;
    log_item_t *item = NULL;

    // printf("merging %d items\n", lchunk_ion->count);
    for(i = 0; i < lchunk_ion->count; i++) {
        item = &lchunk_ion->items[i];
        // printf("merger offset: %d\n", merger[i].offset);
        if(merger[i].offset == -1) {
            // set the current number of items in the disk merger
            curr_item_count = lchunk_ion->count;
            merge_triggered = 1;
            // printf("Setting initial merger value for item %d to %lu\n", i, item->offset);
            merger[i].offset = (uint64_t) item->offset;
            merger[i].ptr = (uint64_t) item->ptr;
            merger[i].len = lchunk_ion->req_len; 
            //printf("item->offset:%lu\n", item->offset);
        }
        else {
            // merge if possible
            if(merger[i].offset + merger[i].len == item->offset) {
                // printf("merging offset %lu onto the end...\n", item->offset);
                // printf("Merging on item %d\n", i);
                merge_triggered = 1;
                merger[i].len += lchunk_ion->req_len;
                // printf("Merge: chunk:%lu, item number:%d, merging onto %ld, adding %ld, from offset %ld, buf ptr:%ld\n", 
                        // (uint64_t)lchunk_proc->id, i, merger[index][i].offset, merger[index][i].len, 
                        // item->offset, merger[index][i].ptr);
            }
            // once we finish merging exit
            else {
                break;
            }
        }
    }	
}

lchunk_t * lchunk_alloc(int index, int len, uint64_t offset)
{
    lchunk_t *new_lchunk = NULL;

    new_lchunk = (lchunk_t *) ((uint64_t) log_buf_ion[index] + log_buf_used[index]);
    log_buf_used[index] += LCHUNK_SIZE;
    if(log_buf_used[index] >= LOG_BUF_SIZE) {
        printf("LOG FILE IS FULL!");
        exit(1);
    }

    memset(new_lchunk, 0, LCHUNK_SIZE);
    new_lchunk->id = num_of_chunks[index];
    num_of_chunks[index]++;
    new_lchunk->count = 0;
    new_lchunk->disk_id = index;
    new_lchunk->req_len = len;
    new_lchunk->version = 0;
    new_lchunk->st_offset = offset;
    new_lchunk->offset_stride = 0;
    new_lchunk->next = NULL;

    return new_lchunk;
}

lchunk_t * lchunk2_alloc(int index, int len, uint64_t offset)
{
    lchunk_t *new_lchunk = NULL;

    new_lchunk = (lchunk_t *) ((uint64_t) log_buf_ion_2[index] + log_buf_used_2[index]);
    log_buf_used_2[index] += LCHUNK_SIZE;
    if(log_buf_used_2[index] >= LOG_BUF_SIZE) {
        printf("LOG FILE IS FULL!");
        exit(1);
    }

    memset(new_lchunk, 0, LCHUNK_SIZE);
    new_lchunk->id = num_of_chunks_2[index];
    num_of_chunks_2[index]++;
    new_lchunk->count = 0;
    new_lchunk->disk_id = index;
    new_lchunk->req_len = len;
    new_lchunk->version = 0;
    new_lchunk->st_offset = offset;
    new_lchunk->offset_stride = 0;
    new_lchunk->next = NULL;

    return new_lchunk;
}

void write_logs_2(merger_t **merger_2)
{
    for(int i = 0; i < N_IO_SERVER; i++)	
        add_log_2(merger_2, i);
}

void merge_logs_2(merger_t *merger, merger_t *merger_2)
{
    int i;

    // printf("merger[%d][0].len:%lu\n", index, len);

    for(i = 0; i < curr_item_count; i++) {
        if(merger_2[pos].offset == -1) {
            merger_2[pos].offset = merger[i].offset;
            merger_2[pos].len = merger[i].len;
        }
        else {
            if(merger_2[pos].offset + merger_2[pos].len == merger[i].offset) {
                merger_2[pos].len += merger[i].len;
            }
            // this else case won't be triggered, as with noncontig everything is merged into a single request.
            else{
                ++pos;
                merger_2[pos].offset = merger[i].offset;
                merger_2[pos].len = merger[i].len;
            }
        }
    }
}


int is_mergeable(merger_t *merger)
{
    if((merger[0].offset + merger[0].len) == merger[1].offset)
        return 1;
    else 
        return 0;
}

void add_log_2(merger_t *merger, int item_col)
{
    // TODO: Add check of cur_lchunk_final is full

    int log_index = cur_lchunk_final->count;
    log_item_t *item = &cur_lchunk_final->items[log_index];
    item->type = 0;
    //TODO item->ptr = TBD
    item->offset = merger[item_col].offset;
    // increment the global pointer tracker
    ++cur_lchunk_final->count;

    cur_lchunk_final->req_len = merger[item_col].len;
}


void add_log(merger_t *merger, int item_col)
{
    // printf("logging from merger 1, offset: %d\n", merger[item_col].offset);
    // TODO: Add check of cur_lchunk_final is full

    int log_index = cur_lchunk_out_ion->count;
    log_item_t *item = &cur_lchunk_out_ion->items[log_index];
    item->type = 0;
    //TODO item->ptr = TBD
    item->offset = merger[item_col].offset;
    // increment the global pointer tracker
    ++cur_lchunk_out_ion->count;

    cur_lchunk_out_ion->req_len = merger[item_col].len;
}
