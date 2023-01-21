/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* These are routines for allocating and deallocating memory.
   They should be called as ADIOI_Malloc(size) and
   ADIOI_Free(ptr). In adio.h, they are macro-replaced to
   ADIOI_Malloc(size,__LINE__,__FILE__) and
   ADIOI_Free(ptr,__LINE__,__FILE__).

   Later on, add some tracing and error checking, similar to
   MPID_trmalloc. */

#include "adio.h"
#include "mpi.h"
#include <stdlib.h>
#include <stdio.h>
#include "mpipr.h"

/* for the style checker */
/* style: allow:malloc:1 sig:0 */
/* style: allow:free:1 sig:0 */
/* style: allow:calloc:1 sig:0 */
/* style: allow:realloc:1 sig:0 */

#define FPRINTF fprintf

void *ADIOI_Malloc_fn(size_t size, int lineno, const char *fname);
void *ADIOI_Calloc_fn(size_t nelem, size_t elsize, int lineno, const char *fname);
void *ADIOI_Realloc_fn(void *ptr, size_t size, int lineno, const char *fname);
void ADIOI_Free_fn(void *ptr, int lineno, const char *fname);

void *ADIOI_Malloc_fn(size_t size, int lineno, const char *fname)
{
    void *new;

#ifdef ROMIO_XFS
    new = (void *) memalign(XFS_MEMALIGN, size);
#else
    new = (void *) MPL_malloc(size, MPL_MEM_IO);
#endif
    if (!new && size) {
        FPRINTF(stderr, "Out of memory in file %s, line %d\n", fname, lineno);
        MPI_Abort(MPI_COMM_WORLD, 1);
    }
    MPL_VG_MEM_INIT(new, size);
    DBG_FPRINTF(stderr, "ADIOI_Malloc %s:<%d> %p (%#zX)\n", fname, lineno, new, size);
    return new;
}


void *ADIOI_Calloc_fn(size_t nelem, size_t elsize, int lineno, const char *fname)
{
    void *new;

    new = (void *) MPL_calloc(nelem, elsize, MPL_MEM_IO);
    if (!new && nelem) {
        FPRINTF(stderr, "Out of memory in file %s, line %d\n", fname, lineno);
        MPI_Abort(MPI_COMM_WORLD, 1);
    }
    DBG_FPRINTF(stderr, "ADIOI_Calloc %s:<%d> %p\n", fname, lineno, new);
    return new;
}


void *ADIOI_Realloc_fn(void *ptr, size_t size, int lineno, const char *fname)
{
    void *new;

    new = (void *) MPL_realloc(ptr, size, MPL_MEM_IO);
    if (!new && size) {
        FPRINTF(stderr, "realloc failed in file %s, line %d\n", fname, lineno);
        MPI_Abort(MPI_COMM_WORLD, 1);
    }
    DBG_FPRINTF(stderr, "ADIOI_Realloc %s:<%d> %p\n", fname, lineno, new);
    return new;
}


void ADIOI_Free_fn(void *ptr, int lineno, const char *fname)
{
    DBG_FPRINTF(stderr, "ADIOI_Free %s:<%d> %p\n", fname, lineno, ptr);
    if (!ptr) {
        FPRINTF(stderr, "Attempt to free null pointer in file %s, line %d\n", fname, lineno);
        MPI_Abort(MPI_COMM_WORLD, 1);
    }

    MPL_free(ptr);
}
