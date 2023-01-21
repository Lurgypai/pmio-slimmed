/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Gatherv */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Gatherv = PMPI_Gatherv
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Gatherv  MPI_Gatherv
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Gatherv as PMPI_Gatherv
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Gatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                const int recvcounts[], const int displs[], MPI_Datatype recvtype, int root,
                MPI_Comm comm)  __attribute__ ((weak, alias("PMPI_Gatherv")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Gatherv
#define MPI_Gatherv PMPI_Gatherv
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Gatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                            void *recvbuf, const int recvcounts[], const int displs[],
                            MPI_Datatype recvtype, int root, MPI_Comm comm)
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
            if ((comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM && sendbuf != MPI_IN_PLACE) || (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM && root != MPI_ROOT && root != MPI_PROC_NULL)) {
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
                if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) {
                    MPIR_ERRTEST_SENDBUF_INPLACE(sendbuf, sendcount, mpi_errno);
                }
                MPIR_ERRTEST_COUNT(sendcount, mpi_errno);
                MPIR_ERRTEST_USERBUFFER(sendbuf, sendcount, sendtype, mpi_errno);
                if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM && comm_ptr->rank == root) {
                    if (sendtype == recvtype && sendcount != 0 && recvcounts[comm_ptr->rank] !=0) {
                        MPI_Aint recvtype_size;
                        MPIR_Datatype_get_size_macro(recvtype, recvtype_size);
                        MPIR_ERRTEST_ALIAS_COLL(sendbuf, (char *) recvbuf + displs[comm_ptr->rank] * recvtype_size, mpi_errno);
                    }
                }
            }
            int comm_size;
            if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) {
                comm_size = comm_ptr->remote_size;
            } else {
                comm_size = comm_ptr->local_size;
            }
            if ((comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM && comm_ptr->rank == root) || (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM && root == MPI_ROOT)) {
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
                for (int i = 0; i < comm_size; i++) {
                    MPIR_ERRTEST_RECVBUF_INPLACE(recvbuf, recvcounts[i], mpi_errno);
                    MPIR_ERRTEST_COUNT(recvcounts[i], mpi_errno);
                    MPIR_ERRTEST_USERBUFFER(recvbuf, recvcounts[i], recvtype, mpi_errno);
                }
            }
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    int n = (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) ? comm_ptr->remote_size : comm_ptr->local_size;
    MPI_Aint *tmp_array = MPL_malloc(n * 2 * sizeof(MPI_Aint), MPL_MEM_OTHER);
    if ((comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM && comm_ptr->rank == root) || (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM && root == MPI_ROOT)) {
        for (int i = 0; i < n; i++) {
            tmp_array[i] = recvcounts[i];
        }
        for (int i = 0; i < n; i++) {
            tmp_array[n + i] = displs[i];
        }
    }
    MPIR_Errflag_t errflag = MPIR_ERR_NONE;
    mpi_errno = MPIR_Gatherv(sendbuf, sendcount, sendtype, recvbuf, tmp_array, tmp_array + n, recvtype,
                             root, comm_ptr, &errflag);
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
                                     "**mpi_gatherv", "**mpi_gatherv %p %d %D %p %p %p %D %i %C",
                                     sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs,
                                     recvtype, root, comm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Gatherv - Gathers into specified locations from all processes in a group

Input Parameters:
+ sendbuf - starting address of send buffer (choice)
. sendcount - number of elements in send buffer (non-negative integer)
. sendtype - data type of send buffer elements (handle)
. recvcounts - non-negative integer array (of length group size) containing the number of elements that are received from each process (non-negative integer)
. displs - integer array (of length group size). Entry i specifies the displacement relative to recvbuf at which to place the incoming data from process i (integer)
. recvtype - data type of recv buffer elements (handle)
. root - rank of receiving process (integer)
- comm - communicator (handle)

Output Parameters:
. recvbuf - address of receive buffer (choice)

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
int QMPI_Gatherv(QMPI_Context context, int tool_id, const void *sendbuf, int sendcount,
                 MPI_Datatype sendtype, void *recvbuf, const int recvcounts[], const int displs[],
                 MPI_Datatype recvtype, int root, MPI_Comm comm)
{
    return internal_Gatherv(sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, root, comm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Gatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                const int recvcounts[], const int displs[], MPI_Datatype recvtype, int root,
                MPI_Comm comm)
{
    QMPI_Context context;
    QMPI_Gatherv_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Gatherv(context, 0, sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs,
                            recvtype, root, comm);

    fn_ptr = (QMPI_Gatherv_t *) MPIR_QMPI_first_fn_ptrs[MPI_GATHERV_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_GATHERV_T], sendbuf, sendcount,
            sendtype, recvbuf, recvcounts, displs, recvtype, root, comm);
}
#else /* ENABLE_QMPI */
int MPI_Gatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                const int recvcounts[], const int displs[], MPI_Datatype recvtype, int root,
                MPI_Comm comm)
{
    return internal_Gatherv(sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, root, comm);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Gatherv_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Gatherv_c = PMPI_Gatherv_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Gatherv_c  MPI_Gatherv_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Gatherv_c as PMPI_Gatherv_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Gatherv_c(const void *sendbuf, MPI_Count sendcount, MPI_Datatype sendtype, void *recvbuf,
                  const MPI_Count recvcounts[], const MPI_Aint displs[], MPI_Datatype recvtype,
                  int root, MPI_Comm comm)  __attribute__ ((weak, alias("PMPI_Gatherv_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Gatherv_c
#define MPI_Gatherv_c PMPI_Gatherv_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Gatherv_c(const void *sendbuf, MPI_Count sendcount, MPI_Datatype sendtype,
                              void *recvbuf, const MPI_Count recvcounts[], const MPI_Aint displs[],
                              MPI_Datatype recvtype, int root, MPI_Comm comm)
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
            if ((comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM && sendbuf != MPI_IN_PLACE) || (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM && root != MPI_ROOT && root != MPI_PROC_NULL)) {
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
                if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) {
                    MPIR_ERRTEST_SENDBUF_INPLACE(sendbuf, sendcount, mpi_errno);
                }
                MPIR_ERRTEST_COUNT(sendcount, mpi_errno);
                MPIR_ERRTEST_USERBUFFER(sendbuf, sendcount, sendtype, mpi_errno);
                if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM && comm_ptr->rank == root) {
                    if (sendtype == recvtype && sendcount != 0 && recvcounts[comm_ptr->rank] !=0) {
                        MPI_Aint recvtype_size;
                        MPIR_Datatype_get_size_macro(recvtype, recvtype_size);
                        MPIR_ERRTEST_ALIAS_COLL(sendbuf, (char *) recvbuf + displs[comm_ptr->rank] * recvtype_size, mpi_errno);
                    }
                }
            }
            int comm_size;
            if (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) {
                comm_size = comm_ptr->remote_size;
            } else {
                comm_size = comm_ptr->local_size;
            }
            if ((comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM && comm_ptr->rank == root) || (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM && root == MPI_ROOT)) {
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
                for (int i = 0; i < comm_size; i++) {
                    MPIR_ERRTEST_RECVBUF_INPLACE(recvbuf, recvcounts[i], mpi_errno);
                    MPIR_ERRTEST_COUNT(recvcounts[i], mpi_errno);
                    MPIR_ERRTEST_USERBUFFER(recvbuf, recvcounts[i], recvtype, mpi_errno);
                }
            }
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        MPIR_Errflag_t errflag = MPIR_ERR_NONE;
        mpi_errno = MPIR_Gatherv(sendbuf, (MPI_Aint) sendcount, sendtype, recvbuf, (MPI_Aint *) recvcounts,
                                 (MPI_Aint *) displs, recvtype, root, comm_ptr, &errflag);
    } else {
        /* MPI_Count is bigger than MPI_Aint */
        if (sendcount > MPIR_AINT_MAX) {
            mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                             __func__, __LINE__, MPI_ERR_OTHER,
                                             "**too_big_for_input",
                                             "**too_big_for_input %s", "sendcount");
            goto fn_fail;
        }
        int n = (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM) ? comm_ptr->remote_size : comm_ptr->local_size;
        MPI_Aint *tmp_array = MPL_malloc(n * 2 * sizeof(MPI_Aint), MPL_MEM_OTHER);
        if ((comm_ptr->comm_kind == MPIR_COMM_KIND__INTRACOMM && comm_ptr->rank == root) || (comm_ptr->comm_kind == MPIR_COMM_KIND__INTERCOMM && root == MPI_ROOT)) {
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
            for (int i = 0; i < n; i++) {
                if (displs[i] > MPIR_AINT_MAX) {
                    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE,
                                                     __func__, __LINE__, MPI_ERR_OTHER,
                                                     "**too_big_for_input",
                                                     "**too_big_for_input %s", "displs[i]");
                    goto fn_fail;
                }
                tmp_array[n + i] = displs[i];
            }
        }
        MPIR_Errflag_t errflag = MPIR_ERR_NONE;
        mpi_errno = MPIR_Gatherv(sendbuf, sendcount, sendtype, recvbuf, tmp_array, tmp_array + n, recvtype,
                                 root, comm_ptr, &errflag);
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
                                     "**mpi_gatherv_c", "**mpi_gatherv_c %p %c %D %p %p %p %D %i %C",
                                     sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs,
                                     recvtype, root, comm);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Gatherv_c - Gathers into specified locations from all processes in a group

Input Parameters:
+ sendbuf - starting address of send buffer (choice) (choice)
. sendcount - number of elements in send buffer (non-negative integer) (non-negative integer)
. sendtype - data type of send buffer elements (handle) (handle)
. recvcounts - non-negative integer array (of length group size) containing the number of elements that are received from each process (non-negative integer) (non-negative integer)
. displs - integer array (of length group size). Entry i specifies the displacement relative to recvbuf at which to place the incoming data from process i (integer) (integer)
. recvtype - data type of recv buffer elements (handle) (handle)
. root - rank of receiving process (integer) (integer)
- comm - communicator (handle) (handle)

Output Parameters:
. recvbuf - address of receive buffer (choice) (choice)

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
int QMPI_Gatherv_c(QMPI_Context context, int tool_id, const void *sendbuf, MPI_Count sendcount,
                   MPI_Datatype sendtype, void *recvbuf, const MPI_Count recvcounts[],
                   const MPI_Aint displs[], MPI_Datatype recvtype, int root, MPI_Comm comm)
{
    return internal_Gatherv_c(sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, root, comm);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Gatherv_c(const void *sendbuf, MPI_Count sendcount, MPI_Datatype sendtype, void *recvbuf,
                  const MPI_Count recvcounts[], const MPI_Aint displs[], MPI_Datatype recvtype,
                  int root, MPI_Comm comm)
{
    QMPI_Context context;
    QMPI_Gatherv_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Gatherv_c(context, 0, sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs,
                              recvtype, root, comm);

    fn_ptr = (QMPI_Gatherv_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_GATHERV_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_GATHERV_C_T], sendbuf, sendcount,
            sendtype, recvbuf, recvcounts, displs, recvtype, root, comm);
}
#else /* ENABLE_QMPI */
int MPI_Gatherv_c(const void *sendbuf, MPI_Count sendcount, MPI_Datatype sendtype, void *recvbuf,
                  const MPI_Count recvcounts[], const MPI_Aint displs[], MPI_Datatype recvtype,
                  int root, MPI_Comm comm)
{
    return internal_Gatherv_c(sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, root, comm);
}
#endif /* ENABLE_QMPI */
