#ifndef LOG_H_
#define LOG_H_
#ifdef __cplusplus
extern "C"
{
#endif

#include <stdio.h>
#include <stdlib.h>

#include "stdint.h"

#define LOG_BUF_SIZE 1024*1024*1024ULL
#define DATA_BUF_SIZE 1024*1024*1024ULL
#define MAX_FNAME_SIZE 1024
#define NORMAL_LOG 0
#define FREE_LOG 1
#define FILE_LOG 2
#define LCHUNK_SIZE 2048
#define ITEM_SIZE (sizeof(log_item_t))
#define N_ITEMS_PER_LCHUNK ((LCHUNK_SIZE - sizeof(lchunk_t)) / ITEM_SIZE)
#define N_IO_SERVER 4
#define N_PROCS 32

typedef struct lchunk_s lchunk_t;
typedef struct log_item_s log_item_t;
typedef struct log_test_s log_test_t;
typedef struct log_file_head_s log_file_head_t;
typedef struct log_s log_t;
typedef struct merger_s merger_t;

struct merger_s
{
    uint64_t offset;
    uint64_t len;
    uint64_t ptr;
};

struct log_item_s
{
   uint64_t type : 2;             // 0:normal_log, 1:free_log
   uint64_t ptr : 48;             // offset into data buffer
   uint64_t version_id : 14;      // Version number
   uint64_t offset;               // offset into output file
};

struct lchunk_s
{
    lchunk_t *next;
    uint64_t id;
    uint64_t count;
    uint64_t disk_id;
    uint64_t req_len;
    uint64_t st_offset;
    uint64_t offset_stride;
    uint64_t version;
    log_item_t items[0];
};

struct log_s
{
    lchunk_t *root_lchunk[N_IO_SERVER];
};

struct log_file_head_s
{
   uint8_t alt;
   log_t log[2];
};

#ifdef __cplusplus
};
#endif
#endif /* LOG_H_ */
