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
void merge_logs(merger_t **merger, lchunk_t *lchunk_proc, int index);
void add_log(merger_t **merger, int index);
void reset_merger(merger_t **merger, lchunk_t *lchunk_proc, int index);
int init_merger(merger_t **merger);
int lchunk_is_full(int index);
int lchunk2_is_full(int index);
void init_lchunk_pointers(lchunk_t **lchunk_proc);
lchunk_t *lchunk_alloc(int index, int len, uint64_t offset);
int is_mergeable(merger_t **merger, int index);
void merge_logs_2(merger_t **merger, merger_t **merger_2, int index);
void print_merger(merger_t **merger);
void write_logs_2(merger_t **merger_2);
void add_log_2(merger_t **merger, int index);

uint64_t log_buf_used[N_IO_SERVER], log_buf_used_2[N_IO_SERVER];
uint64_t num_of_chunks[N_IO_SERVER], num_of_chunks_2[N_IO_SERVER];
uint64_t data_buf_pos[N_IO_SERVER], data_buf_pos_2[N_IO_SERVER];
void *log_buf_ion[N_IO_SERVER], *log_buf_ion_2[N_IO_SERVER];
void *data_buf_ion[N_IO_SERVER];
lchunk_t *cur_lchunk_ion[N_IO_SERVER];
lchunk_t *cur_lchunk_ion_2[N_IO_SERVER];
int pos[N_IO_SERVER];

uint64_t curr_item_counts[N_IO_SERVER];

void* open_and_map(char* filename, size_t* length_) {
    int fd = open(filename, O_RDWR);
    if(fd < 0) perror(filename);

    int length = lseek(fd, 0, SEEK_END);
    if(length < 0) perror(filename);

    if(length_ != NULL) *length_ = length;

    if(lseek(fd, 0, SEEK_SET) < 0) perror("Error seeking to front of file");

    void* buf = mmap(NULL, length, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if(buf == MAP_FAILED) perror("Error using mmap");

    // printf("Opening and mapping %s\n", filename);

    return buf;
}

void* open_and_trunc(char* filename) {
    int fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0666);
    if(fd < 0) perror(filename);

    int length = 1024 * 1024 * 1024;
    if(ftruncate(fd, length) < 0) perror(filename);

    void* buf = mmap(NULL, length, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if(buf == MAP_FAILED) perror("Error using mmap");

    // printf("Opening and truncating %s\n", filename);

    return buf;
}

int main(int argc, char **argv)
{
    size_t mapped_len = 0;
    int num_procs = N_PROCS, num_ion = N_IO_SERVER;
    int i, j;

    char log_file_ion[N_IO_SERVER][MAX_FNAME_SIZE];
    char log_file_ion_2[N_IO_SERVER][MAX_FNAME_SIZE];
    char data_file_ion[N_IO_SERVER][MAX_FNAME_SIZE];
    char log_file_proc[N_PROCS][MAX_FNAME_SIZE];
    char data_file_proc[N_PROCS][MAX_FNAME_SIZE];

    size_t cur_file_offset[N_PROCS] = {0};
    size_t file_length[N_PROCS] = {0};

    lchunk_t *cur_lchunk_proc[N_PROCS];
    void *log_buf_proc[N_PROCS], *data_buf_proc[N_PROCS];

    merger_t **merger = (merger_t **) calloc(N_IO_SERVER, sizeof(merger_t*));
    merger_t **merger_2 = (merger_t **) calloc(N_IO_SERVER, sizeof(merger_t*));

    if(!merger || !merger_2) return 1;

    cmdline_get_int (&argc, argv, 1, "-nproc", &num_procs);
    cmdline_get_int (&argc, argv, 1, "-nion", &num_ion);

    printf("size of log item:%lu\n", sizeof(log_item_t));
    printf("#process:%d, #io nodes:%d\n", num_procs, num_ion);

    init_lchunk_pointers(cur_lchunk_proc);

    /*Create log files for merged data per io node*/
    for(i = 0; i < num_ion; i++) {

        sprintf(log_file_ion[i], "buffers/out/buf_file_ion_%d.log", i);
        sprintf(log_file_ion_2[i], "buffers/out/buf_file_ion_%d.log2", i);
        sprintf(data_file_ion[i], "buffers/out/buf_file_ion_%d.dat", i);

        log_buf_ion[i] = open_and_trunc(log_file_ion[i]);
        data_buf_ion[i] = open_and_trunc(data_file_ion[i]);
        log_buf_ion_2[i] = open_and_trunc(log_file_ion_2[i]);
    }

    /*Create log file pointers per process*/
    for(i = 0; i < num_procs; i++) {
        sprintf(log_file_proc[i], "buffers/log_buffers/log_buffer_%d", i);
        // sprintf(data_file_proc[i], "buffers/data_buffers/data_buffer_%d", i);

        log_buf_proc[i] = open_and_map(log_file_proc[i], file_length + i);

        cur_lchunk_proc[i] = (lchunk_t *)((uint64_t) log_buf_proc[i]);
        // data_buf_proc[i] = open_and_map(data_file_proc[i]);
    }

    for(i = 0; i != N_PROCS; ++i) {
        // printf("File length: %lu\n", file_length[i]);
    }


    if(init_merger(merger) || init_merger(merger_2)) {
        printf("Failed to initialize the merger\n");
        return 1;
    }

    int iteration = 0;
    for(;;) {
        // merge parallel items
        // printf("Iteration %d of merge process\n", iteration++);
        for(j = 0; j < num_procs; ++j) {
            // printf("merging on process: %d\n", j);
            merge_logs(merger, cur_lchunk_proc[j], cur_lchunk_proc[j]->disk_id);
            cur_lchunk_proc[j] = (lchunk_t *)((uint64_t) cur_lchunk_proc[j] + LCHUNK_SIZE);
            cur_file_offset[j] += LCHUNK_SIZE;
        }

        // merge across items in merger
        for(i = 0; i != num_ion; ++i) {
            if(merger[i][0].offset != -1 && is_mergeable(merger, i)) {
                add_log(merger, i);

                // printf("doing second merge on disk %d\n", i);
                merge_logs_2(merger, merger_2, i);
                // printf("logging...\n");
                
                // reset merger
                for(int item_num = 0; item_num != N_ITEMS_PER_LCHUNK; ++item_num) {
                    merger[i][item_num].offset = -1;
                }
            }
        }

        if(!cur_lchunk_proc[0] || cur_lchunk_proc[0]->count == 0 || cur_file_offset[0] >= file_length[0]) {
            // printf("Exiting merge loop...\n");
            break;
        }
    }

    for(j = 0; j != num_ion; ++j) {
        if(merger_2[j][0].offset != -1) {
            // printf("writing leftover merger 2 for disk %d\n", j);
            add_log_2(merger_2, j);
        }
    }
    
    /*
    //Merge procs logs
    for(i = 0; i < num_ion; i++) {
        // merge parallel items
        for(j = 0; j < num_procs; j++) {
            if(cur_lchunk_proc[j]) {
                // printf("process: %d\n", j);
                merge_logs(merger, cur_lchunk_proc[j], cur_lchunk_proc[j]->disk_id);
                //merge_data();
                cur_lchunk_proc[j] = (lchunk_t *)((uint64_t) cur_lchunk_proc[j] + LCHUNK_SIZE);
            }
            // printf("Complete parallel item merge...\n");
        }
        
        // if the merger has left over data
        if(merger[i][0].offset != -1) {
            add_log(merger, i);
            // printf("added leftover merger to log\n");
        }

        // print_merger(merger);

        if(is_mergeable(merger, i)) {
            printf("merging across items for disk %d\n", i);
            merge_logs_2(merger, merger_2, i);
        }

        // flag as invalid (as its been merged from)
        // this has to happen after the merge_logs_2 call
        if(merger[i][0].offset != -1) {
            for(int k = 0; k != N_ITEMS_PER_LCHUNK; ++k) {
                merger[i][k].offset = -1;
            }
        }

        // print_merger(merger_2);

        // printf("completed pass over disk %d\n", i);
        if(cur_lchunk_proc[0]->count != 0 && i == (num_ion-1)) {
            // printf("Reseting and writing merger 2\n");
            i = -1;
            // write_logs_2(merger_2);
            // init_merger(merger_2);
        }
        else if (i == num_ion - 1) {
            printf("Exiting loop\n");
        }
    }

    // TODO make merger to get written when full
    // waits for the end to write the merger_2 out 
    for(j = 0; j != num_ion; ++j) {
        if(merger_2[j][0].offset != -1) {
            printf("writing leftover merger 2 for disk %d\n", j);
            add_log_2(merger_2, j);
        }
    }
    */
   

    //unmap the files

    printf("Merge complete.\n");
    return 0;
}

void print_merger(merger_t **merger)
{
    for(int i = 0; i < N_IO_SERVER; i++) {
        for(int j = 0; j < N_ITEMS_PER_LCHUNK; j++) {
            if(merger[i][j].offset != -1) {
                printf("merger: i:%d, j:%d, len:%lu, offset:%lu\n", i, j, merger[i][j].len, merger[i][j].offset);
            } else {
                break;
            }
        }
    }

}

int init_merger(merger_t **merger)
{
    for(int i = 0; i < N_IO_SERVER; i++) {
        merger[i] = (merger_t*) calloc(N_ITEMS_PER_LCHUNK, sizeof(merger_t));
        if(!merger[i]) return 1;
    }

    for(int i = 0; i < N_IO_SERVER; i++){
        for(int j = 0; j < N_ITEMS_PER_LCHUNK; j++) 
            merger[i][j].offset = -1;
        pos[i] = 0;
    }

    return 0;
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

void merge_logs(merger_t **merger, lchunk_t *lchunk_proc, int index)
{
    uint64_t len;

    assert(lchunk_proc);

    len = lchunk_proc->req_len; 
    int merge_triggered = 0;
    int i = 0;
    log_item_t *item = NULL;

    // printf("N_ITEMS_PER_LCHUNK:%ld\n", N_ITEMS_PER_LCHUNK);
    // printf("lchunk_proc->count:%ld\n", lchunk_proc->count);
    // printf("lchunk_proc->id:%ld\n", lchunk_proc->id);

    // track the beginning of the log merge block
    // once a merge block is completed, copy from the beginning to the end to the output data file
    // consider: are these items all next to each other in the lchunk? that would imply that the output data is also contiguous, so no "merge" needs to happen, just copy the data to the output file

    // printf("merging %d items\n", lchunk_proc->count);
    for(i = 0; i < lchunk_proc->count; i++) {
        item = &lchunk_proc->items[i];
        if(merger[index][i].offset == -1) {
            // if( i == 0) printf("Initializing primary merger on disk %d, item %d, offset: %lu\n", index, i, (uint64_t)item->offset);
            // set the current number of items in the disk merger
            curr_item_counts[index] = lchunk_proc->count;
            merge_triggered = 1;
            // printf("Setting initial merger value for item disk %d item %d\n", index, i);
            merger[index][i].offset = (uint64_t) item->offset;
            merger[index][i].ptr = (uint64_t) item->ptr;
            // printf("INITIALIZING: old len: %d, req len: %d, new len: %d\n", merger[index][i].len, len, len);
            merger[index][i].len = len; 
            //printf("item->offset:%lu\n", item->offset);
        }
        else {
            // merge if possible
            // if(i == 0)
            // printf("attempting to merge on disk %d, does %lu + %lu = %lu == %lu?\n",
                    // index, merger[index][i].offset, merger[index][i].len, merger[index][i].offset + merger[index][i].len, item->offset);
            if(merger[index][i].offset + merger[index][i].len == item->offset) {
                // printf("Merging on disk %d item %d\n", index, i);
                merge_triggered = 1;
                // printf("old len: %d, req len: %d, new len: %d\n", merger[index][i].len, len, merger[index][i].len + len);
                merger[index][i].len += len;
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

    /* the layout of noncontig means that this is uneeded as we'll always be able to merge across all of the processes
    // if we failed to either initialize or merge, then its a new block of items, and we need to destage
    if(!merge_triggered) {
        printf("Finished merge block, writing log...\n");
        add_log(merger, index);
        for(int proc_num = 0; proc_num != N_PROCS; ++proc_num) {
            merger[index][proc_num].offset = -1;
        }
    }
    */
}

int lchunk_is_full(int index)
{
    if(cur_lchunk_ion[index]->count == N_ITEMS_PER_LCHUNK)
        return 1;
    else
        return 0;
}

int lchunk2_is_full(int index)
{
    if(cur_lchunk_ion_2[index]->count == N_ITEMS_PER_LCHUNK)
        return 1;
    else
        return 0;
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

void merge_logs_2(merger_t **merger, merger_t **merger_2, int index)
{
    int i;

    // printf("merger[%d][0].len:%lu\n", index, len);

    /*
    if(merger_2[index][pos[index]].offset != -1 &&
            merger_2[index][pos[index]].offset + merger_2[index][pos[index]].len != merger[index][0].offset) {
        printf("to be merged section does not align with end, creating new merge chunk...\n");
        ++pos[index];
    }
    */

    // printf("merging %d items\n", curr_item_counts[index]);
    for(i = 0; i < curr_item_counts[index]; i++) {
        if(merger_2[index][pos[index]].offset == -1) {
            // printf("reseting merger_2 index %d, item %d offset to %lu\n", index, pos[index], merger[index][i].offset);
            merger_2[index][pos[index]].offset = merger[index][i].offset;
            merger_2[index][pos[index]].len = merger[index][i].len;
            // printf("merger[%d][%d].offset:%lu\n", index, i, offset);
        }
        else {
            if(merger_2[index][pos[index]].offset + merger_2[index][pos[index]].len == merger[index][i].offset) {
                merger_2[index][pos[index]].len += merger[index][i].len;
                // printf("merger_2 length is now %lu\n", merger_2[index][pos[index]].len);
            }
            else {
                // printf("merger_2 ended merging on disk %d\n", index);
                pos[index]++;
                merger_2[index][pos[index]].offset = merger[index][i].offset;
                merger_2[index][pos[index]].len = merger[index][i].len;

                if(pos[index] == N_ITEMS_PER_LCHUNK) {
                    // printf("Merger 2 is full, destaging and reseting...\n");
                    add_log_2(merger_2, index);
                    for(int item_num = 0; item_num != N_ITEMS_PER_LCHUNK; ++item_num) {
                        merger_2[index][item_num].offset = -1;
                        merger_2[index][item_num].len = 0;
                    }

                    pos[index] = 0;
                    merger_2[index][pos[index]].offset = merger[index][i].offset;
                    merger_2[index][pos[index]].len = merger[index][i].len;
                }
            }
        }
    }
}


int is_mergeable(merger_t **merger, int index)
{
    // printf("Checking for mergeability on disk %d:\n");
    // printf("\t%lu + %lu = %lu == %lu?\n", merger[index][0].offset, merger[index][0].len, merger[index][0].offset + merger[index][0].len, merger[index][1].offset);
    if((merger[index][0].offset + merger[index][0].len) == merger[index][1].offset)
        return 1;
    else 
        return 0;
}

void add_log_2(merger_t **merger, int index)
{
    // printf("Doing log2...\n");
    for(int i = 0; i < N_ITEMS_PER_LCHUNK; i++) {
        // printf("adding item %d to log 2...\n", i);
        int len = merger[index][0].len;

        if(merger[index][i].offset == -1) {
            // printf("item %d had an invalid offset, exiting add_log_2...\n", i);
            break;
        }

        if(!cur_lchunk_ion_2[index] || lchunk2_is_full(index)){
            /*Copy data*/
            //merge_data(merger, index, nproc);
            uint64_t offset = merger[index][i].offset;
            cur_lchunk_ion_2[index] = lchunk2_alloc(index, len, offset);
            //printf("add a new log lchunk id:%lu!\n", cur_lchunk_ion[index]->id);
        }

        int log_index = cur_lchunk_ion_2[index]->count;
        log_item_t *item = &cur_lchunk_ion_2[index]->items[log_index];
        item->type = 0;
        item->ptr = data_buf_pos_2[index];
        item->offset = merger[index][i].offset;
        cur_lchunk_ion_2[index]->count++;
        data_buf_pos_2[index] += len;
    }
}


void add_log(merger_t **merger, int index)
{
    int len = merger[index][0].len;
    uint64_t offset = merger[index][0].offset;
    // printf("Logging starting at offset %lu\n", offset);
    cur_lchunk_ion[index] = lchunk_alloc(index, len, offset);

    for(int i = 0; i < curr_item_counts[index]; i++) {
        // int len = merger[index][i].len;
        // if(!cur_lchunk_ion[index] || lchunk_is_full(index)){
            /*Copy data*/
            //merge_data(merger, index, nproc);
            // uint64_t offset = merger[index][i].offset;
            // cur_lchunk_ion[index] = lchunk_alloc(index, len, offset);
            //printf("add a new log lchunk id:%lu!\n", cur_lchunk_ion[index]->id);	
        // }

        int log_index = cur_lchunk_ion[index]->count;
        log_item_t *item = &cur_lchunk_ion[index]->items[log_index];
        item->type = 0;
        item->ptr = data_buf_pos[index];
        item->offset = merger[index][i].offset;
        cur_lchunk_ion[index]->count++;
        data_buf_pos[index] += len;
        //printf("logging item with offset %lu, ptr %lu\n", item->offset, item->ptr);
    }
}

void init_lchunk_pointers(lchunk_t **lchunk_proc)
{
    for(int i = 0; i < N_PROCS; i++){
        lchunk_proc[i] = NULL;
    }

    for(int i = 0; i < N_IO_SERVER; i++){
        cur_lchunk_ion[i] = NULL;
        cur_lchunk_ion_2[i] = NULL;
    }
}
