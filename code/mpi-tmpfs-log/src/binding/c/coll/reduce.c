/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Reduce */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Reduce = PMPI_Reduce
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Reduce  MPI_Reduce
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Reduce as PMPI_Reduce
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Reduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op,
               int root, MPI_Comm comm)  __attribute__ ((weak, alias("PMPI_Reduce")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Reduce
#define MPI_Reduce PMPI_Reduce
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Reduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                           MPI_Op op, int root, MPI_Comm comm)
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
            if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM) {
                MPIR_ERRTEST_INTRA_ROOT(comm_ptr, root, mpi_errno);
            } else {
                MPIR_ERRTEST_INTER_ROOT(comm_ptr, root, mpi_errno);
            }
            if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM) {
                MPIR_ERRTEST_INTRA_ROOT(comm_ptr, root, mpi_errno);
            } else {
                MPIR_ERRTEST_INTER_ROOT(comm_ptr, root, mpi_errno);
            }
            if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM || root != MPI_PROC_NULL) {
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
                if ((comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM && comm_ptr->rank == root) || (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM && root == MPI_ROOT)) {
                    MPIR_ERRTEST_RECVBUF_INPLACE(recvbuf, count, mpi_errno);
                    MPIR_ERRTEST_USERBUFFER(recvbuf, count, datatype, mpi_errno);
                    if (count > 0 && sendbuf != MPI_IN_PLACE) {
                        MPIR_ERRTEST_ALIAS_COLL(sendbuf, recvbuf, mpi_errno);
                    }
                }
                if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) {
                    MPIR_ERRTEST_SENDBUF_INPLACE(sendbuf, count, mpi_errno);
                }
                if (count > 0 && sendbuf != MPI_IN_PLACE) {
                    MPIR_ERRTEST_USERBUFFER(sendbuf, count, datatype, mpi_errno);
                }
            }
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    if ((comm_ptr->remote_size == 1 || count == 0) && comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM) {
        if (sendbuf == MPI_IN_PLACE) {
            goto fn_exit;
        }
        mpi_errno = MPIR_Localcopy(sendbuf, count, datatype, recvbuf, count, datatype);
        if (mpi_errno) {
            goto fn_fail;
        } else {
            goto fn_exit;
        }
    }

    /* ... body of routine ... */
    MPIR_Errflag_t errflag = MPIR_ERR_NONE;
    mpi_errno = MPIR_Reduce(sendbuf, recvbuf, count, datatype, op, root, comm_ptr, &errflag);
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_reduce", "**mpi_reduce %p %p %d %D %O %i %C", sendbuf,
                                     recvbuf, count, datatype, op, root, comm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Reduce - Reduces values on all processes to a single value

Input Parameters:
+ sendbuf - address of send buffer (choice)
. count - number of elements in send buffer (non-negative integer)
. datatype - data type of elements of send buffer (handle)
. op - reduce operation (handle)
. root - rank of root process (integer)
- comm - communicator (handle)

Output Parameters:
. recvbuf - address of receive buffer (choice)

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
int QMPI_Reduce(QMPI_Context context, int tool_id, const void *sendbuf, void *recvbuf, int count,
                MPI_Datatype datatype, MPI_Op op, int root, MPI_Comm comm)
{
    return internal_Reduce(sendbuf, recvbuf, count, datatype, op, root, comm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Reduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op,
               int root, MPI_Comm comm)
{
    QMPI_Context context;
    QMPI_Reduce_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Reduce(context, 0, sendbuf, recvbuf, count, datatype, op, root, comm);

    fn_ptr = (QMPI_Reduce_t *) MPIR_QMPI_first_fn_ptrs[MPI_REDUCE_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_REDUCE_T], sendbuf, recvbuf, count,
            datatype, op, root, comm);
}
#else /* ENABLE_QMPI */
int MPI_Reduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op,
               int root, MPI_Comm comm)
{
    return internal_Reduce(sendbuf, recvbuf, count, datatype, op, root, comm);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Reduce_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Reduce_c = PMPI_Reduce_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Reduce_c  MPI_Reduce_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Reduce_c as PMPI_Reduce_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Reduce_c(const void *sendbuf, void *recvbuf, MPI_Count count, MPI_Datatype datatype,
                 MPI_Op op, int root, MPI_Comm comm)
                  __attribute__ ((weak, alias("PMPI_Reduce_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Reduce_c
#define MPI_Reduce_c PMPI_Reduce_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Reduce_c(const void *sendbuf, void *recvbuf, MPI_Count count,
                             MPI_Datatype datatype, MPI_Op op, int root, MPI_Comm comm)
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
            if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM) {
                MPIR_ERRTEST_INTRA_ROOT(comm_ptr, root, mpi_errno);
            } else {
                MPIR_ERRTEST_INTER_ROOT(comm_ptr, root, mpi_errno);
            }
            if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM) {
                MPIR_ERRTEST_INTRA_ROOT(comm_ptr, root, mpi_errno);
            } else {
                MPIR_ERRTEST_INTER_ROOT(comm_ptr, root, mpi_errno);
            }
            if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM || root != MPI_PROC_NULL) {
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
                if ((comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM && comm_ptr->rank == root) || (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM && root == MPI_ROOT)) {
                    MPIR_ERRTEST_RECVBUF_INPLACE(recvbuf, count, mpi_errno);
                    MPIR_ERRTEST_USERBUFFER(recvbuf, count, datatype, mpi_errno);
                    if (count > 0 && sendbuf != MPI_IN_PLACE) {
                        MPIR_ERRTEST_ALIAS_COLL(sendbuf, recvbuf, mpi_errno);
                    }
                }
                if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) {
                    MPIR_ERRTEST_SENDBUF_INPLACE(sendbuf, count, mpi_errno);
                }
                if (count > 0 && sendbuf != MPI_IN_PLACE) {
                    MPIR_ERRTEST_USERBUFFER(sendbuf, count, datatype, mpi_errno);
                }
            }
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    if ((comm_ptr->remote_size == 1 || count == 0) && comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM) {
        if (sendbuf == MPI_IN_PLACE) {
            goto fn_exit;
        }
        mpi_errno = MPIR_Localcopy(sendbuf, count, datatype, recvbuf, count, datatype);
        if (mpi_errno) {
            goto fn_fail;
        } else {
            goto fn_exit;
        }
    }

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        MPIR_Errflag_t errflag = MPIR_ERR_NONE;
        mpi_errno = MPIR_Reduce(sendbuf, recvbuf, (MPI_Aint) count, datatype, op, root, comm_ptr,
                                &errflag);
    } else {
        /* MPI_Count is bigger than MPI_Aint */
        if (count > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "count");
            goto fn_fail;
        }
        MPIR_Errflag_t errflag = MPIR_ERR_NONE;
        mpi_errno = MPIR_Reduce(sendbuf, recvbuf, count, datatype, op, root, comm_ptr, &errflag);
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
                                     "**mpi_reduce_c", "**mpi_reduce_c %p %p %c %D %O %i %C", sendbuf,
                                     recvbuf, count, datatype, op, root, comm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Reduce_c - Reduces values on all processes to a single value

Input Parameters:
+ sendbuf - address of send buffer (choice) (choice)
. count - number of elements in send buffer (non-negative integer) (non-negative integer)
. datatype - data type of elements of send buffer (handle) (handle)
. op - reduce operation (handle) (handle)
. root - rank of root process (integer) (integer)
- comm - communicator (handle) (handle)

Output Parameters:
. recvbuf - address of receive buffer (choice) (choice)

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
int QMPI_Reduce_c(QMPI_Context context, int tool_id, const void *sendbuf, void *recvbuf,
                  MPI_Count count, MPI_Datatype datatype, MPI_Op op, int root, MPI_Comm comm)
{
    return internal_Reduce_c(sendbuf, recvbuf, count, datatype, op, root, comm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Reduce_c(const void *sendbuf, void *recvbuf, MPI_Count count, MPI_Datatype datatype,
                 MPI_Op op, int root, MPI_Comm comm)
{
    QMPI_Context context;
    QMPI_Reduce_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Reduce_c(context, 0, sendbuf, recvbuf, count, datatype, op, root, comm);

    fn_ptr = (QMPI_Reduce_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_REDUCE_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_REDUCE_C_T], sendbuf, recvbuf, count,
            datatype, op, root, comm);
}
#else /* ENABLE_QMPI */
int MPI_Reduce_c(const void *sendbuf, void *recvbuf, MPI_Count count, MPI_Datatype datatype,
                 MPI_Op op, int root, MPI_Comm comm)
{
    return internal_Reduce_c(sendbuf, recvbuf, count, datatype, op, root, comm);
}
#endif /* ENABLE_QMPI */
