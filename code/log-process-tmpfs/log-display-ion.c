#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>

#include "log.h"

int cmdline_get_string(int *argc, char **argv, int rflag,
                char *name, char *val, int vallen);

int main(int argc, char **argv)
{
    size_t mapped_len = 0;
    int index = 0;	
    void *log_buf_addr;
    char log_file[MAX_FNAME_SIZE];
    lchunk_t *cur_lchunk;

    cmdline_get_string (&argc, argv, 1, "-fname", log_file, MAX_FNAME_SIZE);

    printf("Opening and mapping %s.\n", log_file);

    int file = open(log_file, O_RDWR);
    log_buf_addr = mmap(NULL, 1024 * 1024 * 128, PROT_READ | PROT_WRITE, MAP_SHARED, file, 0);

    printf("size of log item:%lu\n", sizeof(log_item_t));

    cur_lchunk = (lchunk_t *) log_buf_addr;

    while(cur_lchunk->count != 0) {
        
	printf("Chunk number:%d, id:%lu, log_count:%lu, req_len:%lu, st_offset:%lu, offset_stride:%lu,disk_id:%lu, version:%lu\n", 
			index, cur_lchunk->id, cur_lchunk->count, cur_lchunk->req_len, 
			cur_lchunk->st_offset, cur_lchunk->offset_stride,
			cur_lchunk->disk_id, cur_lchunk->version);

	for(int i = 0; i < cur_lchunk->count; i++) {
	    log_item_t *item = &cur_lchunk->items[i];
	    printf("index:%d, type:%u, ptr:%lu, offset:%lu, version:%lu\n", i, item->type, 
			    (uint64_t)item->ptr, (uint64_t)item->offset, (uint64_t)item->version_id);
	}

	index++;
        cur_lchunk = (lchunk_t *)((uint64_t) log_buf_addr + index * LCHUNK_SIZE);
    }

    return 0;
}
