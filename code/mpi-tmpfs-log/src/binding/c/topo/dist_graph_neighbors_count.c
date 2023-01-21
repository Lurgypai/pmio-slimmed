/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Dist_graph_neighbors_count */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Dist_graph_neighbors_count = PMPI_Dist_graph_neighbors_count
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Dist_graph_neighbors_count  MPI_Dist_graph_neighbors_count
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Dist_graph_neighbors_count as PMPI_Dist_graph_neighbors_count
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Dist_graph_neighbors_count(MPI_Comm comm, int *indegree, int *outdegree, int *weighted)
     __attribute__ ((weak, alias("PMPI_Dist_graph_neighbors_count")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Dist_graph_neighbors_count
#define MPI_Dist_graph_neighbors_count PMPI_Dist_graph_neighbors_count
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Dist_graph_neighbors_count(MPI_Comm comm, int *indegree, int *outdegree,
                                               int *weighted)
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
            MPIR_Comm_valid_ptr(comm_ptr, mpi_errno, TRUE);
            if (mpi_errno) {
                goto fn_fail;
            }
            MPIR_ERRTEST_ARGNULL(indegree, "indegree", mpi_errno);
            MPIR_ERRTEST_ARGNULL(outdegree, "outdegree", mpi_errno);
            MPIR_ERRTEST_ARGNULL(weighted, "weighted", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    mpi_errno = MPIR_Dist_graph_neighbors_count_impl(comm_ptr, indegree, outdegree, weighted);
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
                                     "**mpi_dist_graph_neighbors_count",
                                     "**mpi_dist_graph_neighbors_count %C %p %p %p", comm, indegree,
                                     outdegree, weighted);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Dist_graph_neighbors_count - Provides adjacency information for a distributed graph topology

Input Parameters:
. comm - communicator with distributed graph topology (handle)

Output Parameters:
+ indegree - number of edges into this process (non-negative integer)
. outdegree - number of edges out of this process (non-negative integer)
- weighted - false if MPI_UNWEIGHTED was supplied during creation, true otherwise (logical)

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_COMM
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Dist_graph_neighbors_count(QMPI_Context context, int tool_id, MPI_Comm comm, int *indegree,
                                    int *outdegree, int *weighted)
{
    return internal_Dist_graph_neighbors_count(comm, indegree, outdegree, weighted);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Dist_graph_neighbors_count(MPI_Comm comm, int *indegree, int *outdegree, int *weighted)
{
    QMPI_Context context;
    QMPI_Dist_graph_neighbors_count_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Dist_graph_neighbors_count(context, 0, comm, indegree, outdegree, weighted);

    fn_ptr = (QMPI_Dist_graph_neighbors_count_t *) MPIR_QMPI_first_fn_ptrs[MPI_DIST_GRAPH_NEIGHBORS_COUNT_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_DIST_GRAPH_NEIGHBORS_COUNT_T], comm,
            indegree, outdegree, weighted);
}
#else /* ENABLE_QMPI */
int MPI_Dist_graph_neighbors_count(MPI_Comm comm, int *indegree, int *outdegree, int *weighted)
{
    return internal_Dist_graph_neighbors_count(comm, indegree, outdegree, weighted);
}
#endif /* ENABLE_QMPI */
