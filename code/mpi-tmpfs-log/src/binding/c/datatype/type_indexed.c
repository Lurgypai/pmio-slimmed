/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Type_indexed */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Type_indexed = PMPI_Type_indexed
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Type_indexed  MPI_Type_indexed
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Type_indexed as PMPI_Type_indexed
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Type_indexed(int count, const int array_of_blocklengths[],
                     const int array_of_displacements[], MPI_Datatype oldtype,
                     MPI_Datatype *newtype)  __attribute__ ((weak, alias("PMPI_Type_indexed")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Type_indexed
#define MPI_Type_indexed PMPI_Type_indexed
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Type_indexed(int count, const int array_of_blocklengths[],
                                 const int array_of_displacements[], MPI_Datatype oldtype,
                                 MPI_Datatype *newtype)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_COUNT(count, mpi_errno);
            if (count > 0) {
                MPIR_ERRTEST_ARGNULL(array_of_blocklengths, "array_of_blocklengths", mpi_errno);
                for (int i = 0; i < count; i++) {
                    MPIR_ERRTEST_COUNT(array_of_blocklengths[i], mpi_errno);
                }
            }
            if (count > 0) {
                MPIR_ERRTEST_ARGNULL(array_of_displacements, "array_of_displacements", mpi_errno);
            }
            MPIR_ERRTEST_DATATYPE(oldtype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(oldtype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(oldtype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            MPIR_ERRTEST_ARGNULL(newtype, "newtype", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    *newtype = MPI_DATATYPE_NULL;
    mpi_errno = MPIR_Type_indexed_impl(count, array_of_blocklengths, array_of_displacements, oldtype,
                                       newtype);
    if (mpi_errno) {
        goto fn_fail;
    }
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_type_indexed", "**mpi_type_indexed %d %p %p %D %p", count,
                                     array_of_blocklengths, array_of_displacements, oldtype, newtype);
#endif
    mpi_errno = MPIR_Err_return_comm(0, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Type_indexed - Creates an indexed datatype

Input Parameters:
+ count - number of blocks -- also number of entries in array_of_displacements and array_of_blocklengths (non-negative integer)
. array_of_blocklengths - number of elements per block (non-negative integer)
. array_of_displacements - displacement for each block, in multiples of oldtype (integer)
- oldtype - old datatype (handle)

Output Parameters:
. newtype - new datatype (handle)

.N ThreadSafe

.N Fortran
The array_of_displacements are displacements, and are based on a zero origin.  A common error
is to do something like to following
.vb
    integer a(100)
    integer array_of_blocklengths(10), array_of_displacements(10)
    do i=1,10
         array_of_blocklengths(i)   = 1
10       array_of_displacements(i) = 1 + (i-1)*10
    call MPI_TYPE_INDEXED(10,array_of_blocklengths,array_of_displacements,MPI_INTEGER,newtype,ierr)
    call MPI_TYPE_COMMIT(newtype,ierr)
    call MPI_SEND(a,1,newtype,...)
.ve
expecting this to send "a(1),a(11),..." because the array_of_displacements have values
"1,11,...".   Because these are `displacements` from the beginning of "a",
it actually sends "a(1+1),a(1+11),...".

If you wish to consider the displacements as array_of_displacements into a Fortran array,
consider declaring the Fortran array with a zero origin
.vb
    integer a(0:99)
.ve

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_COUNT
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Type_indexed(QMPI_Context context, int tool_id, int count,
                      const int array_of_blocklengths[], const int array_of_displacements[],
                      MPI_Datatype oldtype, MPI_Datatype *newtype)
{
    return internal_Type_indexed(count, array_of_blocklengths, array_of_displacements, oldtype, newtype);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Type_indexed(int count, const int array_of_blocklengths[],
                     const int array_of_displacements[], MPI_Datatype oldtype,
                     MPI_Datatype *newtype)
{
    QMPI_Context context;
    QMPI_Type_indexed_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Type_indexed(context, 0, count, array_of_blocklengths, array_of_displacements,
                                 oldtype, newtype);

    fn_ptr = (QMPI_Type_indexed_t *) MPIR_QMPI_first_fn_ptrs[MPI_TYPE_INDEXED_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_TYPE_INDEXED_T], count,
            array_of_blocklengths, array_of_displacements, oldtype, newtype);
}
#else /* ENABLE_QMPI */
int MPI_Type_indexed(int count, const int array_of_blocklengths[],
                     const int array_of_displacements[], MPI_Datatype oldtype,
                     MPI_Datatype *newtype)
{
    return internal_Type_indexed(count, array_of_blocklengths, array_of_displacements, oldtype, newtype);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Type_indexed_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Type_indexed_c = PMPI_Type_indexed_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Type_indexed_c  MPI_Type_indexed_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Type_indexed_c as PMPI_Type_indexed_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Type_indexed_c(MPI_Count count, const MPI_Count array_of_blocklengths[],
                       const MPI_Count array_of_displacements[], MPI_Datatype oldtype,
                       MPI_Datatype *newtype)
                        __attribute__ ((weak, alias("PMPI_Type_indexed_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Type_indexed_c
#define MPI_Type_indexed_c PMPI_Type_indexed_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Type_indexed_c(MPI_Count count, const MPI_Count array_of_blocklengths[],
                                   const MPI_Count array_of_displacements[], MPI_Datatype oldtype,
                                   MPI_Datatype *newtype)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_COUNT(count, mpi_errno);
            if (count > 0) {
                MPIR_ERRTEST_ARGNULL(array_of_blocklengths, "array_of_blocklengths", mpi_errno);
                for (int i = 0; i < count; i++) {
                    MPIR_ERRTEST_COUNT(array_of_blocklengths[i], mpi_errno);
                }
            }
            if (count > 0) {
                MPIR_ERRTEST_ARGNULL(array_of_displacements, "array_of_displacements", mpi_errno);
            }
            MPIR_ERRTEST_DATATYPE(oldtype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(oldtype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(oldtype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            MPIR_ERRTEST_ARGNULL(newtype, "newtype", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        *newtype = MPI_DATATYPE_NULL;
        mpi_errno = MPIR_Type_indexed_large_impl((MPI_Aint) count, (MPI_Aint *) array_of_blocklengths,
                                                 (MPI_Aint *) array_of_displacements, oldtype, newtype);
        if (mpi_errno) {
            goto fn_fail;
        }
    } else {
        /* MPI_Count is bigger than MPI_Aint */
        if (count > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "count");
            goto fn_fail;
        }
        MPI_Aint *array_of_blocklengths_c = MPL_malloc(count * sizeof(MPI_Aint), MPL_MEM_OTHER);
        for (int i = 0; i < count; i++) {
            if (array_of_blocklengths[i] > MPIR_AINT_MAX) {
                mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                                 __func__, __LINE__, MPI_ERR_OTHER,
                                                 "**too_big_for_input",
                                                 "**too_big_for_input %s", "array_of_blocklengths[i]");
                goto fn_fail;
            }
            array_of_blocklengths_c[i] = array_of_blocklengths[i];
        }
        MPI_Aint *array_of_displacements_c = MPL_malloc(count * sizeof(MPI_Aint), MPL_MEM_OTHER);
        for (int i = 0; i < count; i++) {
            if (array_of_displacements[i] > MPIR_AINT_MAX) {
                mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                                 __func__, __LINE__, MPI_ERR_OTHER,
                                                 "**too_big_for_input",
                                                 "**too_big_for_input %s", "array_of_displacements[i]");
                goto fn_fail;
            }
            array_of_displacements_c[i] = array_of_displacements[i];
        }
        *newtype = MPI_DATATYPE_NULL;
        mpi_errno = MPIR_Type_indexed_large_impl(count, array_of_blocklengths_c, array_of_displacements_c,
                                                 oldtype, newtype);
        if (mpi_errno) {
            goto fn_fail;
        }
        MPL_free(array_of_blocklengths_c);
        MPL_free(array_of_displacements_c);
    }
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_type_indexed_c", "**mpi_type_indexed_c %c %p %p %D %p",
                                     count, array_of_blocklengths, array_of_displacements, oldtype,
                                     newtype);
#endif
    mpi_errno = MPIR_Err_return_comm(0, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Type_indexed_c - Creates an indexed datatype

Input Parameters:
+ count - number of blocks -- also number of entries in array_of_displacements and array_of_blocklengths (non-negative integer) (non-negative integer)
. array_of_blocklengths - number of elements per block (non-negative integer) (non-negative integer)
. array_of_displacements - displacement for each block, in multiples of oldtype (integer) (integer)
- oldtype - old datatype (handle) (handle)

Output Parameters:
. newtype - new datatype (handle) (handle)

.N ThreadSafe

.N Fortran
The array_of_displacements are displacements, and are based on a zero origin.  A common error
is to do something like to following
.vb
    integer a(100)
    integer array_of_blocklengths(10), array_of_displacements(10)
    do i=1,10
         array_of_blocklengths(i)   = 1
10       array_of_displacements(i) = 1 + (i-1)*10
    call MPI_TYPE_INDEXED(10,array_of_blocklengths,array_of_displacements,MPI_INTEGER,newtype,ierr)
    call MPI_TYPE_COMMIT(newtype,ierr)
    call MPI_SEND(a,1,newtype,...)
.ve
expecting this to send "a(1),a(11),..." because the array_of_displacements have values
"1,11,...".   Because these are `displacements` from the beginning of "a",
it actually sends "a(1+1),a(1+11),...".

If you wish to consider the displacements as array_of_displacements into a Fortran array,
consider declaring the Fortran array with a zero origin
.vb
    integer a(0:99)
.ve

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_COUNT
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Type_indexed_c(QMPI_Context context, int tool_id, MPI_Count count,
                        const MPI_Count array_of_blocklengths[],
                        const MPI_Count array_of_displacements[], MPI_Datatype oldtype,
                        MPI_Datatype *newtype)
{
    return internal_Type_indexed_c(count, array_of_blocklengths, array_of_displacements, oldtype, newtype);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Type_indexed_c(MPI_Count count, const MPI_Count array_of_blocklengths[],
                       const MPI_Count array_of_displacements[], MPI_Datatype oldtype,
                       MPI_Datatype *newtype)
{
    QMPI_Context context;
    QMPI_Type_indexed_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Type_indexed_c(context, 0, count, array_of_blocklengths, array_of_displacements,
                                   oldtype, newtype);

    fn_ptr = (QMPI_Type_indexed_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_TYPE_INDEXED_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_TYPE_INDEXED_C_T], count,
            array_of_blocklengths, array_of_displacements, oldtype, newtype);
}
#else /* ENABLE_QMPI */
int MPI_Type_indexed_c(MPI_Count count, const MPI_Count array_of_blocklengths[],
                       const MPI_Count array_of_displacements[], MPI_Datatype oldtype,
                       MPI_Datatype *newtype)
{
    return internal_Type_indexed_c(count, array_of_blocklengths, array_of_displacements, oldtype, newtype);
}
#endif /* ENABLE_QMPI */
