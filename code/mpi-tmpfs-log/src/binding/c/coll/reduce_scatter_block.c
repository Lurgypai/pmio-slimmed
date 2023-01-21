/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Reduce_scatter_block */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Reduce_scatter_block = PMPI_Reduce_scatter_block
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Reduce_scatter_block  MPI_Reduce_scatter_block
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Reduce_scatter_block as PMPI_Reduce_scatter_block
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Reduce_scatter_block(const void *sendbuf, void *recvbuf, int recvcount,
                             MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
                              __attribute__ ((weak, alias("PMPI_Reduce_scatter_block")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Reduce_scatter_block
#define MPI_Reduce_scatter_block PMPI_Reduce_scatter_block
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Reduce_scatter_block(const void *sendbuf, void *recvbuf, int recvcount,
                                         MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Comm *comm_ptr ATTRIBUTE((unused)) = NULL;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_COMM(comm, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    MPIR_Comm_get_ptr(comm, comm_ptr);

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_Comm_valid_ptr(comm_ptr, mpi_errno, FALSE);
            if (mpi_errno) {
                goto fn_fail;
            }
            MPIR_ERRTEST_OP(op, mpi_errno);
            if (!HANDLE_IS_BUILTIN(op)) {
                MPIR_Op *op_ptr = NULL;
                MPIR_Op_get_ptr(op, op_ptr);
                MPIR_Op_valid_ptr(op_ptr, mpi_errno);
            } else {
                mpi_errno = (*MPIR_OP_HDL_TO_DTYPE_FN(op)) (datatype);
            }
            if (mpi_errno) {
                goto fn_fail;
            }
            MPIR_ERRTEST_DATATYPE(datatype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(datatype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(datatype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
                MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            MPIR_ERRTEST_RECVBUF_INPLACE(recvbuf, recvcount, mpi_errno);
            if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) {
                MPIR_ERRTEST_SENDBUF_INPLACE(sendbuf, recvcount, mpi_errno);
            } else if (sendbuf != MPI_IN_PLACE && recvcount != 0) {
                MPIR_ERRTEST_ALIAS_COLL(sendbuf, recvbuf, mpi_errno);
            }
            MPIR_ERRTEST_USERBUFFER(recvbuf, recvcount, datatype, mpi_errno);
            MPIR_ERRTEST_USERBUFFER(sendbuf, recvcount, datatype, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM && (MPIR_Comm_size(comm_ptr) == 1 || recvcount == 0)) {
        if (sendbuf != MPI_IN_PLACE) {
            MPIR_Localcopy(sendbuf, recvcount, datatype, recvbuf, recvcount, datatype);
        }
        goto fn_exit;
    }

    /* ... body of routine ... */
    MPIR_Errflag_t errflag = MPIR_ERR_NONE;
    mpi_errno = MPIR_Reduce_scatter_block(sendbuf, recvbuf, recvcount, datatype, op, comm_ptr,
                                          &errflag);
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_reduce_scatter_block",
                                     "**mpi_reduce_scatter_block %p %p %d %D %O %C", sendbuf, recvbuf,
                                     recvcount, datatype, op, comm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Reduce_scatter_block - Combines values and scatters the results

Input Parameters:
+ sendbuf - starting address of send buffer (choice)
. recvcount - element count per block (non-negative integer)
. datatype - data type of elements of send and receive buffers (handle)
. op - operation (handle)
- comm - communicator (handle)

Output Parameters:
. recvbuf - starting address of receive buffer (choice)

.N collops

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_BUFFER
.N MPI_ERR_COMM
.N MPI_ERR_COUNT
.N MPI_ERR_OP
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Reduce_scatter_block(QMPI_Context context, int tool_id, const void *sendbuf, void *recvbuf,
                              int recvcount, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
    return internal_Reduce_scatter_block(sendbuf, recvbuf, recvcount, datatype, op, comm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Reduce_scatter_block(const void *sendbuf, void *recvbuf, int recvcount,
                             MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
    QMPI_Context context;
    QMPI_Reduce_scatter_block_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Reduce_scatter_block(context, 0, sendbuf, recvbuf, recvcount, datatype, op,
                                         comm);

    fn_ptr = (QMPI_Reduce_scatter_block_t *) MPIR_QMPI_first_fn_ptrs[MPI_REDUCE_SCATTER_BLOCK_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_REDUCE_SCATTER_BLOCK_T], sendbuf,
            recvbuf, recvcount, datatype, op, comm);
}
#else /* ENABLE_QMPI */
int MPI_Reduce_scatter_block(const void *sendbuf, void *recvbuf, int recvcount,
                             MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
    return internal_Reduce_scatter_block(sendbuf, recvbuf, recvcount, datatype, op, comm);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Reduce_scatter_block_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Reduce_scatter_block_c = PMPI_Reduce_scatter_block_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Reduce_scatter_block_c  MPI_Reduce_scatter_block_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Reduce_scatter_block_c as PMPI_Reduce_scatter_block_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Reduce_scatter_block_c(const void *sendbuf, void *recvbuf, MPI_Count recvcount,
                               MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
                                __attribute__ ((weak, alias("PMPI_Reduce_scatter_block_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Reduce_scatter_block_c
#define MPI_Reduce_scatter_block_c PMPI_Reduce_scatter_block_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Reduce_scatter_block_c(const void *sendbuf, void *recvbuf, MPI_Count recvcount,
                                           MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Comm *comm_ptr ATTRIBUTE((unused)) = NULL;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_COMM(comm, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    MPIR_Comm_get_ptr(comm, comm_ptr);

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_Comm_valid_ptr(comm_ptr, mpi_errno, FALSE);
            if (mpi_errno) {
                goto fn_fail;
            }
            MPIR_ERRTEST_OP(op, mpi_errno);
            if (!HANDLE_IS_BUILTIN(op)) {
                MPIR_Op *op_ptr = NULL;
                MPIR_Op_get_ptr(op, op_ptr);
                MPIR_Op_valid_ptr(op_ptr, mpi_errno);
            } else {
                mpi_errno = (*MPIR_OP_HDL_TO_DTYPE_FN(op)) (datatype);
            }
            if (mpi_errno) {
                goto fn_fail;
            }
            MPIR_ERRTEST_DATATYPE(datatype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(datatype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(datatype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
                MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            MPIR_ERRTEST_RECVBUF_INPLACE(recvbuf, recvcount, mpi_errno);
            if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) {
                MPIR_ERRTEST_SENDBUF_INPLACE(sendbuf, recvcount, mpi_errno);
            } else if (sendbuf != MPI_IN_PLACE && recvcount != 0) {
                MPIR_ERRTEST_ALIAS_COLL(sendbuf, recvbuf, mpi_errno);
            }
            MPIR_ERRTEST_USERBUFFER(recvbuf, recvcount, datatype, mpi_errno);
            MPIR_ERRTEST_USERBUFFER(sendbuf, recvcount, datatype, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM && (MPIR_Comm_size(comm_ptr) == 1 || recvcount == 0)) {
        if (sendbuf != MPI_IN_PLACE) {
            MPIR_Localcopy(sendbuf, recvcount, datatype, recvbuf, recvcount, datatype);
        }
        goto fn_exit;
    }

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        MPIR_Errflag_t errflag = MPIR_ERR_NONE;
        mpi_errno = MPIR_Reduce_scatter_block(sendbuf, recvbuf, (MPI_Aint) recvcount, datatype, op,
                                              comm_ptr, &errflag);
    } else {
        /* MPI_Count is bigger than MPI_Aint */
        if (recvcount > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "recvcount");
            goto fn_fail;
        }
        MPIR_Errflag_t errflag = MPIR_ERR_NONE;
        mpi_errno = MPIR_Reduce_scatter_block(sendbuf, recvbuf, recvcount, datatype, op, comm_ptr,
                                              &errflag);
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
                                     "**mpi_reduce_scatter_block_c",
                                     "**mpi_reduce_scatter_block_c %p %p %c %D %O %C", sendbuf, recvbuf,
                                     recvcount, datatype, op, comm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Reduce_scatter_block_c - Combines values and scatters the results

Input Parameters:
+ sendbuf - starting address of send buffer (choice) (choice)
. recvcount - element count per block (non-negative integer) (non-negative integer)
. datatype - data type of elements of send and receive buffers (handle) (handle)
. op - operation (handle) (handle)
- comm - communicator (handle) (handle)

Output Parameters:
. recvbuf - starting address of receive buffer (choice) (choice)

.N collops

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_BUFFER
.N MPI_ERR_COMM
.N MPI_ERR_COUNT
.N MPI_ERR_OP
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Reduce_scatter_block_c(QMPI_Context context, int tool_id, const void *sendbuf,
                                void *recvbuf, MPI_Count recvcount, MPI_Datatype datatype,
                                MPI_Op op, MPI_Comm comm)
{
    return internal_Reduce_scatter_block_c(sendbuf, recvbuf, recvcount, datatype, op, comm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Reduce_scatter_block_c(const void *sendbuf, void *recvbuf, MPI_Count recvcount,
                               MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
    QMPI_Context context;
    QMPI_Reduce_scatter_block_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Reduce_scatter_block_c(context, 0, sendbuf, recvbuf, recvcount, datatype, op,
                                           comm);

    fn_ptr = (QMPI_Reduce_scatter_block_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_REDUCE_SCATTER_BLOCK_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_REDUCE_SCATTER_BLOCK_C_T], sendbuf,
            recvbuf, recvcount, datatype, op, comm);
}
#else /* ENABLE_QMPI */
int MPI_Reduce_scatter_block_c(const void *sendbuf, void *recvbuf, MPI_Count recvcount,
                               MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
    return internal_Reduce_scatter_block_c(sendbuf, recvbuf, recvcount, datatype, op, comm);
}
#endif /* ENABLE_QMPI */
