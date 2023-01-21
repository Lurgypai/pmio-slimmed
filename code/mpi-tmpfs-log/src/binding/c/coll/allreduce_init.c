/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Allreduce_init */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Allreduce_init = PMPI_Allreduce_init
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Allreduce_init  MPI_Allreduce_init
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Allreduce_init as PMPI_Allreduce_init
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Allreduce_init(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                       MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request)
                        __attribute__ ((weak, alias("PMPI_Allreduce_init")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Allreduce_init
#define MPI_Allreduce_init PMPI_Allreduce_init
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Allreduce_init(const void *sendbuf, void *recvbuf, int count,
                                   MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Info info,
                                   MPI_Request *request)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Comm *comm_ptr ATTRIBUTE((unused)) = NULL;
    MPIR_Info *info_ptr ATTRIBUTE((unused)) = NULL;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_COMM(comm, mpi_errno);
            MPIR_ERRTEST_INFO_OR_NULL(info, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    MPIR_Comm_get_ptr(comm, comm_ptr);
    if (info != MPI_INFO_NULL) {
        MPIR_Info_get_ptr(info, info_ptr);
    }

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_Comm_valid_ptr(comm_ptr, mpi_errno, FALSE);
            if (mpi_errno) {
                goto fn_fail;
            }
            if (info != MPI_INFO_NULL) {
                MPIR_Info_valid_ptr(info_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
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
            MPIR_ERRTEST_RECVBUF_INPLACE(recvbuf, count, mpi_errno);
            if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) {
                MPIR_ERRTEST_SENDBUF_INPLACE(sendbuf, count, mpi_errno);
            } else if (sendbuf != MPI_IN_PLACE && count != 0) {
                MPIR_ERRTEST_ALIAS_COLL(sendbuf, recvbuf, mpi_errno);
            }
            MPIR_ERRTEST_USERBUFFER(recvbuf, count, datatype, mpi_errno);
            MPIR_ERRTEST_USERBUFFER(sendbuf, count, datatype, mpi_errno);
            MPIR_ERRTEST_ARGNULL(request, "request", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    MPIR_Request *request_ptr = NULL;
    mpi_errno = MPIR_Allreduce_init(sendbuf, recvbuf, count, datatype, op, comm_ptr, info_ptr,
                                    &request_ptr);
    if (mpi_errno) {
        goto fn_fail;
    }
    if (!request_ptr) {
        request_ptr = MPIR_Request_create_complete(MPIR_REQUEST_KIND__COLL);
    }
    *request = request_ptr->handle;
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_allreduce_init",
                                     "**mpi_allreduce_init %p %p %d %D %O %C %I %p", sendbuf, recvbuf,
                                     count, datatype, op, comm, info, request);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Allreduce_init - Create a persistent request for allreduce

Input Parameters:
+ sendbuf - starting address of send buffer (choice)
. count - number of elements in send buffer (non-negative integer)
. datatype - data type of elements of send buffer (handle)
. op - operation (handle)
. comm - communicator (handle)
- info - info argument (handle)

Output Parameters:
+ recvbuf - starting address of receive buffer (choice)
- request - communication request (handle)

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_BUFFER
.N MPI_ERR_COMM
.N MPI_ERR_COUNT
.N MPI_ERR_INFO
.N MPI_ERR_OP
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Allreduce_init(QMPI_Context context, int tool_id, const void *sendbuf, void *recvbuf,
                        int count, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Info info,
                        MPI_Request *request)
{
    return internal_Allreduce_init(sendbuf, recvbuf, count, datatype, op, comm, info, request);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Allreduce_init(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                       MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request)
{
    QMPI_Context context;
    QMPI_Allreduce_init_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Allreduce_init(context, 0, sendbuf, recvbuf, count, datatype, op, comm, info,
                                   request);

    fn_ptr = (QMPI_Allreduce_init_t *) MPIR_QMPI_first_fn_ptrs[MPI_ALLREDUCE_INIT_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_ALLREDUCE_INIT_T], sendbuf, recvbuf,
            count, datatype, op, comm, info, request);
}
#else /* ENABLE_QMPI */
int MPI_Allreduce_init(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                       MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request)
{
    return internal_Allreduce_init(sendbuf, recvbuf, count, datatype, op, comm, info, request);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Allreduce_init_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Allreduce_init_c = PMPI_Allreduce_init_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Allreduce_init_c  MPI_Allreduce_init_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Allreduce_init_c as PMPI_Allreduce_init_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Allreduce_init_c(const void *sendbuf, void *recvbuf, MPI_Count count, MPI_Datatype datatype,
                         MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request)
                          __attribute__ ((weak, alias("PMPI_Allreduce_init_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Allreduce_init_c
#define MPI_Allreduce_init_c PMPI_Allreduce_init_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Allreduce_init_c(const void *sendbuf, void *recvbuf, MPI_Count count,
                                     MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Info info,
                                     MPI_Request *request)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Comm *comm_ptr ATTRIBUTE((unused)) = NULL;
    MPIR_Info *info_ptr ATTRIBUTE((unused)) = NULL;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_COMM(comm, mpi_errno);
            MPIR_ERRTEST_INFO_OR_NULL(info, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    MPIR_Comm_get_ptr(comm, comm_ptr);
    if (info != MPI_INFO_NULL) {
        MPIR_Info_get_ptr(info, info_ptr);
    }

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_Comm_valid_ptr(comm_ptr, mpi_errno, FALSE);
            if (mpi_errno) {
                goto fn_fail;
            }
            if (info != MPI_INFO_NULL) {
                MPIR_Info_valid_ptr(info_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
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
            MPIR_ERRTEST_RECVBUF_INPLACE(recvbuf, count, mpi_errno);
            if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) {
                MPIR_ERRTEST_SENDBUF_INPLACE(sendbuf, count, mpi_errno);
            } else if (sendbuf != MPI_IN_PLACE && count != 0) {
                MPIR_ERRTEST_ALIAS_COLL(sendbuf, recvbuf, mpi_errno);
            }
            MPIR_ERRTEST_USERBUFFER(recvbuf, count, datatype, mpi_errno);
            MPIR_ERRTEST_USERBUFFER(sendbuf, count, datatype, mpi_errno);
            MPIR_ERRTEST_ARGNULL(request, "request", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        MPIR_Request *request_ptr = NULL;
        mpi_errno = MPIR_Allreduce_init(sendbuf, recvbuf, (MPI_Aint) count, datatype, op, comm_ptr,
                                        info_ptr, &request_ptr);
        if (mpi_errno) {
            goto fn_fail;
        }
        if (!request_ptr) {
            request_ptr = MPIR_Request_create_complete(MPIR_REQUEST_KIND__COLL);
        }
        *request = request_ptr->handle;
    } else {
        /* MPI_Count is bigger than MPI_Aint */
        if (count > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "count");
            goto fn_fail;
        }
        MPIR_Request *request_ptr = NULL;
        mpi_errno = MPIR_Allreduce_init(sendbuf, recvbuf, count, datatype, op, comm_ptr, info_ptr,
                                        &request_ptr);
        if (mpi_errno) {
            goto fn_fail;
        }
        if (!request_ptr) {
            request_ptr = MPIR_Request_create_complete(MPIR_REQUEST_KIND__COLL);
        }
        *request = request_ptr->handle;
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
                                     "**mpi_allreduce_init_c",
                                     "**mpi_allreduce_init_c %p %p %c %D %O %C %I %p", sendbuf, recvbuf,
                                     count, datatype, op, comm, info, request);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Allreduce_init_c - Create a persistent request for allreduce

Input Parameters:
+ sendbuf - starting address of send buffer (choice) (choice)
. count - number of elements in send buffer (non-negative integer) (non-negative integer)
. datatype - data type of elements of send buffer (handle) (handle)
. op - operation (handle) (handle)
. comm - communicator (handle) (handle)
- info - info argument (handle) (handle)

Output Parameters:
+ recvbuf - starting address of receive buffer (choice) (choice)
- request - communication request (handle) (handle)

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_BUFFER
.N MPI_ERR_COMM
.N MPI_ERR_COUNT
.N MPI_ERR_INFO
.N MPI_ERR_OP
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Allreduce_init_c(QMPI_Context context, int tool_id, const void *sendbuf, void *recvbuf,
                          MPI_Count count, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm,
                          MPI_Info info, MPI_Request *request)
{
    return internal_Allreduce_init_c(sendbuf, recvbuf, count, datatype, op, comm, info, request);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Allreduce_init_c(const void *sendbuf, void *recvbuf, MPI_Count count, MPI_Datatype datatype,
                         MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request)
{
    QMPI_Context context;
    QMPI_Allreduce_init_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Allreduce_init_c(context, 0, sendbuf, recvbuf, count, datatype, op, comm, info,
                                     request);

    fn_ptr = (QMPI_Allreduce_init_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_ALLREDUCE_INIT_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_ALLREDUCE_INIT_C_T], sendbuf, recvbuf,
            count, datatype, op, comm, info, request);
}
#else /* ENABLE_QMPI */
int MPI_Allreduce_init_c(const void *sendbuf, void *recvbuf, MPI_Count count, MPI_Datatype datatype,
                         MPI_Op op, MPI_Comm comm, MPI_Info info, MPI_Request *request)
{
    return internal_Allreduce_init_c(sendbuf, recvbuf, count, datatype, op, comm, info, request);
}
#endif /* ENABLE_QMPI */
