/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Neighbor_alltoall */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Neighbor_alltoall = PMPI_Neighbor_alltoall
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Neighbor_alltoall  MPI_Neighbor_alltoall
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Neighbor_alltoall as PMPI_Neighbor_alltoall
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Neighbor_alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                          int recvcount, MPI_Datatype recvtype, MPI_Comm comm)
                           __attribute__ ((weak, alias("PMPI_Neighbor_alltoall")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Neighbor_alltoall
#define MPI_Neighbor_alltoall PMPI_Neighbor_alltoall
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Neighbor_alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                      void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                      MPI_Comm comm)
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
            MPIR_ERRTEST_COUNT(sendcount, mpi_errno);
            if (sendcount > 0) {
                MPIR_ERRTEST_DATATYPE(sendtype, "datatype", mpi_errno);
                if (!HANDLE_IS_BUILTIN(sendtype)) {
                    MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                    MPIR_Datatype_get_ptr(sendtype, datatype_ptr);
                    MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                    if (mpi_errno) {
                        goto fn_fail;
                    }
                    MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                    if (mpi_errno) {
                        goto fn_fail;
                    }
                }
                MPIR_ERRTEST_USERBUFFER(sendbuf, sendcount, sendtype, mpi_errno);
            }
            MPIR_ERRTEST_COUNT(recvcount, mpi_errno);
            if (recvcount > 0) {
                MPIR_ERRTEST_DATATYPE(recvtype, "datatype", mpi_errno);
                if (!HANDLE_IS_BUILTIN(recvtype)) {
                    MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                    MPIR_Datatype_get_ptr(recvtype, datatype_ptr);
                    MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                    if (mpi_errno) {
                        goto fn_fail;
                    }
                    MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                    if (mpi_errno) {
                        goto fn_fail;
                    }
                }
                MPIR_ERRTEST_USERBUFFER(recvbuf, recvcount, recvtype, mpi_errno);
            }
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    mpi_errno = MPIR_Neighbor_alltoall(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype,
                                       comm_ptr);
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_neighbor_alltoall",
                                     "**mpi_neighbor_alltoall %p %d %D %p %d %D %C", sendbuf, sendcount,
                                     sendtype, recvbuf, recvcount, recvtype, comm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Neighbor_alltoall - Sends and Receivs data from all neighboring processes

Input Parameters:
+ sendbuf - starting address of send buffer (choice)
. sendcount - number of elements sent to each neighbor (non-negative integer)
. sendtype - data type of send buffer elements (handle)
. recvcount - number of elements received from each neighbor (non-negative integer)
. recvtype - data type of receive buffer elements (handle)
- comm - communicator with topology structure (handle)

Output Parameters:
. recvbuf - starting address of receive buffer (choice)

Notes:
In this function, each process i receives data items from each process j if an edge (j,i) exists in the topology graph or Cartesian topology.  Similarly, each process i sends data items to all processes j where an edge (i,j) exists. This call is more general than MPI_NEIGHBOR_ALLGATHER in that different data items can be sent to each neighbor. The k-th block in send buffer is sent to the k-th neighboring process and the l-th block in the receive buffer is received from the l-th neighbor.

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_BUFFER
.N MPI_ERR_COMM
.N MPI_ERR_COUNT
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Neighbor_alltoall(QMPI_Context context, int tool_id, const void *sendbuf, int sendcount,
                           MPI_Datatype sendtype, void *recvbuf, int recvcount,
                           MPI_Datatype recvtype, MPI_Comm comm)
{
    return internal_Neighbor_alltoall(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Neighbor_alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                          int recvcount, MPI_Datatype recvtype, MPI_Comm comm)
{
    QMPI_Context context;
    QMPI_Neighbor_alltoall_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Neighbor_alltoall(context, 0, sendbuf, sendcount, sendtype, recvbuf, recvcount,
                                      recvtype, comm);

    fn_ptr = (QMPI_Neighbor_alltoall_t *) MPIR_QMPI_first_fn_ptrs[MPI_NEIGHBOR_ALLTOALL_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_NEIGHBOR_ALLTOALL_T], sendbuf,
            sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
}
#else /* ENABLE_QMPI */
int MPI_Neighbor_alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                          int recvcount, MPI_Datatype recvtype, MPI_Comm comm)
{
    return internal_Neighbor_alltoall(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Neighbor_alltoall_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Neighbor_alltoall_c = PMPI_Neighbor_alltoall_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Neighbor_alltoall_c  MPI_Neighbor_alltoall_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Neighbor_alltoall_c as PMPI_Neighbor_alltoall_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Neighbor_alltoall_c(const void *sendbuf, MPI_Count sendcount, MPI_Datatype sendtype,
                            void *recvbuf, MPI_Count recvcount, MPI_Datatype recvtype,
                            MPI_Comm comm)
                             __attribute__ ((weak, alias("PMPI_Neighbor_alltoall_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Neighbor_alltoall_c
#define MPI_Neighbor_alltoall_c PMPI_Neighbor_alltoall_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Neighbor_alltoall_c(const void *sendbuf, MPI_Count sendcount,
                                        MPI_Datatype sendtype, void *recvbuf, MPI_Count recvcount,
                                        MPI_Datatype recvtype, MPI_Comm comm)
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
            MPIR_ERRTEST_COUNT(sendcount, mpi_errno);
            if (sendcount > 0) {
                MPIR_ERRTEST_DATATYPE(sendtype, "datatype", mpi_errno);
                if (!HANDLE_IS_BUILTIN(sendtype)) {
                    MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                    MPIR_Datatype_get_ptr(sendtype, datatype_ptr);
                    MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                    if (mpi_errno) {
                        goto fn_fail;
                    }
                    MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                    if (mpi_errno) {
                        goto fn_fail;
                    }
                }
                MPIR_ERRTEST_USERBUFFER(sendbuf, sendcount, sendtype, mpi_errno);
            }
            MPIR_ERRTEST_COUNT(recvcount, mpi_errno);
            if (recvcount > 0) {
                MPIR_ERRTEST_DATATYPE(recvtype, "datatype", mpi_errno);
                if (!HANDLE_IS_BUILTIN(recvtype)) {
                    MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                    MPIR_Datatype_get_ptr(recvtype, datatype_ptr);
                    MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                    if (mpi_errno) {
                        goto fn_fail;
                    }
                    MPIR_Datatype_committed_ptr(datatype_ptr, mpi_errno);
                    if (mpi_errno) {
                        goto fn_fail;
                    }
                }
                MPIR_ERRTEST_USERBUFFER(recvbuf, recvcount, recvtype, mpi_errno);
            }
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        mpi_errno = MPIR_Neighbor_alltoall(sendbuf, (MPI_Aint) sendcount, sendtype, recvbuf,
                                           (MPI_Aint) recvcount, recvtype, comm_ptr);
    } else {
        /* MPI_Count is bigger than MPI_Aint */
        if (sendcount > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "sendcount");
            goto fn_fail;
        }
        if (recvcount > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "recvcount");
            goto fn_fail;
        }
        mpi_errno = MPIR_Neighbor_alltoall(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype,
                                           comm_ptr);
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
                                     "**mpi_neighbor_alltoall_c",
                                     "**mpi_neighbor_alltoall_c %p %c %D %p %c %D %C", sendbuf,
                                     sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Neighbor_alltoall_c - Sends and Receivs data from all neighboring processes

Input Parameters:
+ sendbuf - starting address of send buffer (choice) (choice)
. sendcount - number of elements sent to each neighbor (non-negative integer) (non-negative integer)
. sendtype - data type of send buffer elements (handle) (handle)
. recvcount - number of elements received from each neighbor (non-negative integer) (non-negative integer)
. recvtype - data type of receive buffer elements (handle) (handle)
- comm - communicator with topology structure (handle) (handle)

Output Parameters:
. recvbuf - starting address of receive buffer (choice) (choice)

Notes:
In this function, each process i receives data items from each process j if an edge (j,i) exists in the topology graph or Cartesian topology.  Similarly, each process i sends data items to all processes j where an edge (i,j) exists. This call is more general than MPI_NEIGHBOR_ALLGATHER in that different data items can be sent to each neighbor. The k-th block in send buffer is sent to the k-th neighboring process and the l-th block in the receive buffer is received from the l-th neighbor.

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_BUFFER
.N MPI_ERR_COMM
.N MPI_ERR_COUNT
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Neighbor_alltoall_c(QMPI_Context context, int tool_id, const void *sendbuf,
                             MPI_Count sendcount, MPI_Datatype sendtype, void *recvbuf,
                             MPI_Count recvcount, MPI_Datatype recvtype, MPI_Comm comm)
{
    return internal_Neighbor_alltoall_c(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Neighbor_alltoall_c(const void *sendbuf, MPI_Count sendcount, MPI_Datatype sendtype,
                            void *recvbuf, MPI_Count recvcount, MPI_Datatype recvtype,
                            MPI_Comm comm)
{
    QMPI_Context context;
    QMPI_Neighbor_alltoall_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Neighbor_alltoall_c(context, 0, sendbuf, sendcount, sendtype, recvbuf,
                                        recvcount, recvtype, comm);

    fn_ptr = (QMPI_Neighbor_alltoall_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_NEIGHBOR_ALLTOALL_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_NEIGHBOR_ALLTOALL_C_T], sendbuf,
            sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
}
#else /* ENABLE_QMPI */
int MPI_Neighbor_alltoall_c(const void *sendbuf, MPI_Count sendcount, MPI_Datatype sendtype,
                            void *recvbuf, MPI_Count recvcount, MPI_Datatype recvtype,
                            MPI_Comm comm)
{
    return internal_Neighbor_alltoall_c(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
}
#endif /* ENABLE_QMPI */
