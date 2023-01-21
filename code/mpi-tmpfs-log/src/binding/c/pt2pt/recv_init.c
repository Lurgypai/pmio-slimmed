/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Recv_init */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Recv_init = PMPI_Recv_init
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Recv_init  MPI_Recv_init
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Recv_init as PMPI_Recv_init
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Recv_init(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm,
                  MPI_Request *request)  __attribute__ ((weak, alias("PMPI_Recv_init")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Recv_init
#define MPI_Recv_init PMPI_Recv_init
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Recv_init(void *buf, int count, MPI_Datatype datatype, int source, int tag,
                              MPI_Comm comm, MPI_Request *request)
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
            MPIR_ERRTEST_COUNT(count, mpi_errno);
            if (count > 0) {
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
                MPIR_ERRTEST_USERBUFFER(buf, count, datatype, mpi_errno);
            }
            MPIR_ERRTEST_RECV_RANK(comm_ptr, source, mpi_errno);
            MPIR_ERRTEST_RECV_TAG(tag, mpi_errno);
            MPIR_ERRTEST_ARGNULL(request, "request", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    MPIR_Request *request_ptr = NULL;

    mpi_errno = MPID_Recv_init(buf, count, datatype, source, tag, comm_ptr,
                               MPIR_CONTEXT_INTRA_PT2PT, &request_ptr);
    if (mpi_errno != MPI_SUCCESS)
        goto fn_fail;

    /* return the handle of the request to the user */
    MPIR_OBJ_PUBLISH_HANDLE(*request, request_ptr->handle);
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_recv_init", "**mpi_recv_init %p %d %D %i %t %C %p", buf,
                                     count, datatype, source, tag, comm, request);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Recv_init - Create a persistent request for a receive

Input Parameters:
+ count - number of elements received (non-negative integer)
. datatype - type of each element (handle)
. source - rank of source or MPI_ANY_SOURCE (integer)
. tag - message tag or MPI_ANY_TAG (integer)
- comm - communicator (handle)

Output Parameters:
+ buf - initial address of receive buffer (choice)
- request - communication request (handle)

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_BUFFER
.N MPI_ERR_COMM
.N MPI_ERR_COUNT
.N MPI_ERR_RANK
.N MPI_ERR_TAG
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

.seealso: MPI_Start, MPI_Startall, MPI_Request_free
@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Recv_init(QMPI_Context context, int tool_id, void *buf, int count, MPI_Datatype datatype,
                   int source, int tag, MPI_Comm comm, MPI_Request *request)
{
    return internal_Recv_init(buf, count, datatype, source, tag, comm, request);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Recv_init(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm,
                  MPI_Request *request)
{
    QMPI_Context context;
    QMPI_Recv_init_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Recv_init(context, 0, buf, count, datatype, source, tag, comm, request);

    fn_ptr = (QMPI_Recv_init_t *) MPIR_QMPI_first_fn_ptrs[MPI_RECV_INIT_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_RECV_INIT_T], buf, count, datatype,
            source, tag, comm, request);
}
#else /* ENABLE_QMPI */
int MPI_Recv_init(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm,
                  MPI_Request *request)
{
    return internal_Recv_init(buf, count, datatype, source, tag, comm, request);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Recv_init_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Recv_init_c = PMPI_Recv_init_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Recv_init_c  MPI_Recv_init_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Recv_init_c as PMPI_Recv_init_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Recv_init_c(void *buf, MPI_Count count, MPI_Datatype datatype, int source, int tag,
                    MPI_Comm comm, MPI_Request *request)
                     __attribute__ ((weak, alias("PMPI_Recv_init_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Recv_init_c
#define MPI_Recv_init_c PMPI_Recv_init_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Recv_init_c(void *buf, MPI_Count count, MPI_Datatype datatype, int source,
                                int tag, MPI_Comm comm, MPI_Request *request)
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
            MPIR_ERRTEST_COUNT(count, mpi_errno);
            if (count > 0) {
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
                MPIR_ERRTEST_USERBUFFER(buf, count, datatype, mpi_errno);
            }
            MPIR_ERRTEST_RECV_RANK(comm_ptr, source, mpi_errno);
            MPIR_ERRTEST_RECV_TAG(tag, mpi_errno);
            MPIR_ERRTEST_ARGNULL(request, "request", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        MPIR_Request *request_ptr = NULL;

        mpi_errno = MPID_Recv_init(buf, count, datatype, source, tag, comm_ptr,
                                   MPIR_CONTEXT_INTRA_PT2PT, &request_ptr);
        if (mpi_errno != MPI_SUCCESS)
            goto fn_fail;

        /* return the handle of the request to the user */
        MPIR_OBJ_PUBLISH_HANDLE(*request, request_ptr->handle);
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

        mpi_errno = MPID_Recv_init(buf, count, datatype, source, tag, comm_ptr,
                                   MPIR_CONTEXT_INTRA_PT2PT, &request_ptr);
        if (mpi_errno != MPI_SUCCESS)
            goto fn_fail;

        /* return the handle of the request to the user */
        MPIR_OBJ_PUBLISH_HANDLE(*request, request_ptr->handle);
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
                                     "**mpi_recv_init_c", "**mpi_recv_init_c %p %c %D %i %t %C %p", buf,
                                     count, datatype, source, tag, comm, request);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Recv_init_c - Create a persistent request for a receive

Input Parameters:
+ count - number of elements received (non-negative integer) (non-negative integer)
. datatype - type of each element (handle) (handle)
. source - rank of source or MPI_ANY_SOURCE (integer) (integer)
. tag - message tag or MPI_ANY_TAG (integer) (integer)
- comm - communicator (handle) (handle)

Output Parameters:
+ buf - initial address of receive buffer (choice) (choice)
- request - communication request (handle) (handle)

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_BUFFER
.N MPI_ERR_COMM
.N MPI_ERR_COUNT
.N MPI_ERR_RANK
.N MPI_ERR_TAG
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

.seealso: MPI_Start, MPI_Startall, MPI_Request_free
@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Recv_init_c(QMPI_Context context, int tool_id, void *buf, MPI_Count count,
                     MPI_Datatype datatype, int source, int tag, MPI_Comm comm,
                     MPI_Request *request)
{
    return internal_Recv_init_c(buf, count, datatype, source, tag, comm, request);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Recv_init_c(void *buf, MPI_Count count, MPI_Datatype datatype, int source, int tag,
                    MPI_Comm comm, MPI_Request *request)
{
    QMPI_Context context;
    QMPI_Recv_init_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Recv_init_c(context, 0, buf, count, datatype, source, tag, comm, request);

    fn_ptr = (QMPI_Recv_init_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_RECV_INIT_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_RECV_INIT_C_T], buf, count, datatype,
            source, tag, comm, request);
}
#else /* ENABLE_QMPI */
int MPI_Recv_init_c(void *buf, MPI_Count count, MPI_Datatype datatype, int source, int tag,
                    MPI_Comm comm, MPI_Request *request)
{
    return internal_Recv_init_c(buf, count, datatype, source, tag, comm, request);
}
#endif /* ENABLE_QMPI */