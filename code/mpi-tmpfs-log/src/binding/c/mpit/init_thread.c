/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_T_init_thread */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_T_init_thread = PMPI_T_init_thread
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_T_init_thread  MPI_T_init_thread
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_T_init_thread as PMPI_T_init_thread
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_T_init_thread(int required, int *provided)
     __attribute__ ((weak, alias("PMPI_T_init_thread")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_T_init_thread
#define MPI_T_init_thread PMPI_T_init_thread
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_T_init_thread(int required, int *provided)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIT_ERRTEST_ARGNULL(provided);
            if (required != MPI_THREAD_SINGLE && required != MPI_THREAD_FUNNELED && required != MPI_THREAD_SERIALIZED && required != MPI_THREAD_MULTIPLE) {
                MPIR_ERR_SET1(mpi_errno, MPI_ERR_ARG, "**thread_level", "**thread_level %d", required);
                goto fn_fail;
            }
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
#if defined MPICH_IS_THREADED
    MPIR_T_is_threaded = (required == MPI_THREAD_MULTIPLE);
#endif /* MPICH_IS_THREADED */

    if (provided != NULL) {
        /* This must be min(required,MPICH_THREAD_LEVEL) if runtime
         * control of thread level is available */
        *provided = (MPICH_THREAD_LEVEL < required) ? MPICH_THREAD_LEVEL : required;
    }

    ++MPIR_T_init_balance;
    if (MPIR_T_init_balance == 1) {
        MPIR_T_THREAD_CS_INIT();
        mpi_errno = MPIR_T_env_init();
    }
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    return mpi_errno;

  fn_fail:
    goto fn_exit;
}

/*@
   MPI_T_init_thread - Initialize the MPI_T execution environment

Input Parameters:
. required - desired level of thread support (integer)

Output Parameters:
. provided - provided level of thread support (integer)

Notes:
  The valid values for the level of thread support are:
+ MPI_THREAD_SINGLE - Only one thread will execute.
. MPI_THREAD_FUNNELED - The process may be multi-threaded, but only the main
  thread will make MPI_T calls (all MPI_T calls are funneled to the
  main thread).
. MPI_THREAD_SERIALIZED - The process may be multi-threaded, and multiple
  threads may make MPI_T calls, but only one at a time: MPI_T calls are not
  made concurrently from two distinct threads (all MPI_T calls are serialized).
- MPI_THREAD_MULTIPLE - Multiple threads may call MPI_T, with no restrictions.

.N ThreadSafe

.N Errors
.N MPI_SUCCESS

.N MPI_T_ERR_INVALID
.N MPI_ERR_OTHER

.seealso: MPI_T_finalize
@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_T_init_thread(QMPI_Context context, int tool_id, int required, int *provided)
{
    return internal_T_init_thread(required, provided);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_T_init_thread(int required, int *provided)
{
    QMPI_Context context;
    QMPI_T_init_thread_t *fn_ptr;

    context.storage_stack = NULL;

    int mpi_errno = MPI_SUCCESS;
    mpi_errno = MPII_qmpi_init();
    if (mpi_errno != MPI_SUCCESS) {
        return mpi_errno;
    }

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_T_init_thread(context, 0, required, provided);

    fn_ptr = (QMPI_T_init_thread_t *) MPIR_QMPI_first_fn_ptrs[MPI_T_INIT_THREAD_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_T_INIT_THREAD_T], required, provided);
}
#else /* ENABLE_QMPI */
int MPI_T_init_thread(int required, int *provided)
{
    return internal_T_init_thread(required, provided);
}
#endif /* ENABLE_QMPI */
