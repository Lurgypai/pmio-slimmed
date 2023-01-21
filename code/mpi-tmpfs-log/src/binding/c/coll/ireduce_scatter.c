/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Ireduce_scatter */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Ireduce_scatter = PMPI_Ireduce_scatter
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Ireduce_scatter  MPI_Ireduce_scatter
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Ireduce_scatter as PMPI_Ireduce_scatter
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Ireduce_scatter(const void *sendbuf, void *recvbuf, const int recvcounts[],
                        MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request)
                         __attribute__ ((weak, alias("PMPI_Ireduce_scatter")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Ireduce_scatter
#define MPI_Ireduce_scatter PMPI_Ireduce_scatter
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Ireduce_scatter(const void *sendbuf, void *recvbuf, const int recvcounts[],
                                    MPI_Datatype datatype, MPI_Op op, MPI_Comm comm,
                                    MPI_Request *request)
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
            int comm_size = comm_ptr->local_size;
            int sum = 0;
            for (int i = 0; i < comm_size; i++) {
                MPIR_ERRTEST_COUNT(recvcounts[i], mpi_errno);
                sum += recvcounts[i];
            }
            MPIR_ERRTEST_RECVBUF_INPLACE(recvbuf, recvcounts[comm_ptr->rank], mpi_errno);
            if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) {
                MPIR_ERRTEST_SENDBUF_INPLACE(sendbuf, sum, mpi_errno);
            } else if (sendbuf != MPI_IN_PLACE && sum != 0) {
                MPIR_ERRTEST_ALIAS_COLL(sendbuf, recvbuf, mpi_errno);
            }
            MPIR_ERRTEST_USERBUFFER(recvbuf, recvcounts[comm_ptr->rank], datatype, mpi_errno);
            MPIR_ERRTEST_USERBUFFER(sendbuf, sum, datatype, mpi_errno);
            MPIR_ERRTEST_ARGNULL(request, "request", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM && MPIR_Comm_size(comm_ptr) == 1) {
        if (sendbuf != MPI_IN_PLACE) {
            MPIR_Localcopy(sendbuf, recvcounts[0], datatype, recvbuf, recvcounts[0], datatype);
        }
        MPIR_Request *request_ptr = MPIR_Request_create_complete(MPIR_REQUEST_KIND__COLL);
        *request = request_ptr->handle;
        goto fn_exit;
    }

    /* ... body of routine ... */
    int n = comm_ptr->local_size;
    MPI_Aint *tmp_array = MPL_malloc(n * sizeof(MPI_Aint), MPL_MEM_OTHER);
    for (int i = 0; i < n; i++) {
        tmp_array[i] = recvcounts[i];
    }
    MPIR_Request *request_ptr = NULL;
    mpi_errno = MPIR_Ireduce_scatter(sendbuf, recvbuf, tmp_array, datatype, op, comm_ptr,
                                     &request_ptr);
    if (mpi_errno) {
        goto fn_fail;
    }
    if (!request_ptr) {
        request_ptr = MPIR_Request_create_complete(MPIR_REQUEST_KIND__COLL);
    }
    *request = request_ptr->handle;
    MPL_free(tmp_array);
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_ireduce_scatter",
                                     "**mpi_ireduce_scatter %p %p %p %D %O %C %p", sendbuf, recvbuf,
                                     recvcounts, datatype, op, comm, request);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Ireduce_scatter - Combines values and scatters the results in a nonblocking way

Input Parameters:
+ sendbuf - starting address of send buffer (choice)
. recvcounts - non-negative integer array specifying the number of elements in result distributed to each process. This array must be identical on all calling processes. (non-negative integer)
. datatype - data type of elements of input buffer (handle)
. op - operation (handle)
- comm - communicator (handle)

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
.N MPI_ERR_OP
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Ireduce_scatter(QMPI_Context context, int tool_id, const void *sendbuf, void *recvbuf,
                         const int recvcounts[], MPI_Datatype datatype, MPI_Op op, MPI_Comm comm,
                         MPI_Request *request)
{
    return internal_Ireduce_scatter(sendbuf, recvbuf, recvcounts, datatype, op, comm, request);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Ireduce_scatter(const void *sendbuf, void *recvbuf, const int recvcounts[],
                        MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request)
{
    QMPI_Context context;
    QMPI_Ireduce_scatter_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Ireduce_scatter(context, 0, sendbuf, recvbuf, recvcounts, datatype, op, comm,
                                    request);

    fn_ptr = (QMPI_Ireduce_scatter_t *) MPIR_QMPI_first_fn_ptrs[MPI_IREDUCE_SCATTER_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_IREDUCE_SCATTER_T], sendbuf, recvbuf,
            recvcounts, datatype, op, comm, request);
}
#else /* ENABLE_QMPI */
int MPI_Ireduce_scatter(const void *sendbuf, void *recvbuf, const int recvcounts[],
                        MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request)
{
    return internal_Ireduce_scatter(sendbuf, recvbuf, recvcounts, datatype, op, comm, request);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Ireduce_scatter_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Ireduce_scatter_c = PMPI_Ireduce_scatter_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Ireduce_scatter_c  MPI_Ireduce_scatter_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Ireduce_scatter_c as PMPI_Ireduce_scatter_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Ireduce_scatter_c(const void *sendbuf, void *recvbuf, const MPI_Count recvcounts[],
                          MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request)
                           __attribute__ ((weak, alias("PMPI_Ireduce_scatter_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Ireduce_scatter_c
#define MPI_Ireduce_scatter_c PMPI_Ireduce_scatter_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Ireduce_scatter_c(const void *sendbuf, void *recvbuf,
                                      const MPI_Count recvcounts[], MPI_Datatype datatype,
                                      MPI_Op op, MPI_Comm comm, MPI_Request *request)
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
            int comm_size = comm_ptr->local_size;
            int sum = 0;
            for (int i = 0; i < comm_size; i++) {
                MPIR_ERRTEST_COUNT(recvcounts[i], mpi_errno);
                sum += recvcounts[i];
            }
            MPIR_ERRTEST_RECVBUF_INPLACE(recvbuf, recvcounts[comm_ptr->rank], mpi_errno);
            if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) {
                MPIR_ERRTEST_SENDBUF_INPLACE(sendbuf, sum, mpi_errno);
            } else if (sendbuf != MPI_IN_PLACE && sum != 0) {
                MPIR_ERRTEST_ALIAS_COLL(sendbuf, recvbuf, mpi_errno);
            }
            MPIR_ERRTEST_USERBUFFER(recvbuf, recvcounts[comm_ptr->rank], datatype, mpi_errno);
            MPIR_ERRTEST_USERBUFFER(sendbuf, sum, datatype, mpi_errno);
            MPIR_ERRTEST_ARGNULL(request, "request", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM && MPIR_Comm_size(comm_ptr) == 1) {
        if (sendbuf != MPI_IN_PLACE) {
            MPIR_Localcopy(sendbuf, recvcounts[0], datatype, recvbuf, recvcounts[0], datatype);
        }
        MPIR_Request *request_ptr = MPIR_Request_create_complete(MPIR_REQUEST_KIND__COLL);
        *request = request_ptr->handle;
        goto fn_exit;
    }

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        MPIR_Request *request_ptr = NULL;
        mpi_errno = MPIR_Ireduce_scatter(sendbuf, recvbuf, (MPI_Aint *) recvcounts, datatype, op, comm_ptr,
                                         &request_ptr);
        if (mpi_errno) {
            goto fn_fail;
        }
        if (!request_ptr) {
            request_ptr = MPIR_Request_create_complete(MPIR_REQUEST_KIND__COLL);
        }
        *request = request_ptr->handle;
    } else {
        /* MPI_Count is bigger than MPI_Aint */
        int n = comm_ptr->local_size;
        MPI_Aint *tmp_array = MPL_malloc(n * sizeof(MPI_Aint), MPL_MEM_OTHER);
        for (int i = 0; i < n; i++) {
            if (recvcounts[i] > MPIR_AINT_MAX) {
                mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                                 __func__, __LINE__, MPI_ERR_OTHER,
                                                 "**too_big_for_input",
                                                 "**too_big_for_input %s", "recvcounts[i]");
                goto fn_fail;
            }
            tmp_array[i] = recvcounts[i];
        }
        MPIR_Request *request_ptr = NULL;
        mpi_errno = MPIR_Ireduce_scatter(sendbuf, recvbuf, tmp_array, datatype, op, comm_ptr,
                                         &request_ptr);
        if (mpi_errno) {
            goto fn_fail;
        }
        if (!request_ptr) {
            request_ptr = MPIR_Request_create_complete(MPIR_REQUEST_KIND__COLL);
        }
        *request = request_ptr->handle;
        MPL_free(tmp_array);
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
                                     "**mpi_ireduce_scatter_c",
                                     "**mpi_ireduce_scatter_c %p %p %p %D %O %C %p", sendbuf, recvbuf,
                                     recvcounts, datatype, op, comm, request);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Ireduce_scatter_c - Combines values and scatters the results in a nonblocking way

Input Parameters:
+ sendbuf - starting address of send buffer (choice) (choice)
. recvcounts - non-negative integer array specifying the number of elements in result distributed to each process. This array must be identical on all calling processes. (non-negative integer) (non-negative integer)
. datatype - data type of elements of input buffer (handle) (handle)
. op - operation (handle) (handle)
- comm - communicator (handle) (handle)

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
.N MPI_ERR_OP
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Ireduce_scatter_c(QMPI_Context context, int tool_id, const void *sendbuf, void *recvbuf,
                           const MPI_Count recvcounts[], MPI_Datatype datatype, MPI_Op op,
                           MPI_Comm comm, MPI_Request *request)
{
    return internal_Ireduce_scatter_c(sendbuf, recvbuf, recvcounts, datatype, op, comm, request);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Ireduce_scatter_c(const void *sendbuf, void *recvbuf, const MPI_Count recvcounts[],
                          MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request)
{
    QMPI_Context context;
    QMPI_Ireduce_scatter_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Ireduce_scatter_c(context, 0, sendbuf, recvbuf, recvcounts, datatype, op, comm,
                                      request);

    fn_ptr = (QMPI_Ireduce_scatter_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_IREDUCE_SCATTER_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_IREDUCE_SCATTER_C_T], sendbuf, recvbuf,
            recvcounts, datatype, op, comm, request);
}
#else /* ENABLE_QMPI */
int MPI_Ireduce_scatter_c(const void *sendbuf, void *recvbuf, const MPI_Count recvcounts[],
                          MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request)
{
    return internal_Ireduce_scatter_c(sendbuf, recvbuf, recvcounts, datatype, op, comm, request);
}
#endif /* ENABLE_QMPI */