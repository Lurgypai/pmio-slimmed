/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Win_get_info */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Win_get_info = PMPI_Win_get_info
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Win_get_info  MPI_Win_get_info
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Win_get_info as PMPI_Win_get_info
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Win_get_info(MPI_Win win, MPI_Info *info_used)
     __attribute__ ((weak, alias("PMPI_Win_get_info")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Win_get_info
#define MPI_Win_get_info PMPI_Win_get_info
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Win_get_info(MPI_Win win, MPI_Info *info_used)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Win *win_ptr ATTRIBUTE((unused)) = NULL;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_WIN(win, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    MPIR_Win_get_ptr(win, win_ptr);

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_Win_valid_ptr(win_ptr, mpi_errno);
            if (mpi_errno) {
                goto fn_fail;
            }
            MPIR_ERRTEST_ARGNULL(info_used, "info_used", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    MPIR_Info *info_used_ptr ATTRIBUTE((unused)) = NULL;
    *info_used = MPI_INFO_NULL;
    mpi_errno = MPID_Win_get_info(win_ptr, &info_used_ptr);
    if (mpi_errno) {
        goto fn_fail;
    }
    if (info_used_ptr) {
        MPIR_OBJ_PUBLISH_HANDLE(*info_used, info_used_ptr->handle);
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
                                     "**mpi_win_get_info", "**mpi_win_get_info %W %p", win, info_used);
#endif
    mpi_errno = MPIR_Err_return_win(win_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Win_get_info - Returns a new info object containing the hints of the window

Input Parameters:
. win - window object (handle)

Output Parameters:
. info_used - new info object (handle)

Notes:

The info object returned in info_used will contain all hints currently active
for this window. This set of hints may be greater or smaller than the set of
hints specified when the window was created, as the system may not recognize
some hints set by the user, and may recognize other hints that the user has not
set.

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_WIN
.N MPI_ERR_OTHER

.seealso: MPI_Win_set_info
@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Win_get_info(QMPI_Context context, int tool_id, MPI_Win win, MPI_Info *info_used)
{
    return internal_Win_get_info(win, info_used);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Win_get_info(MPI_Win win, MPI_Info *info_used)
{
    QMPI_Context context;
    QMPI_Win_get_info_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Win_get_info(context, 0, win, info_used);

    fn_ptr = (QMPI_Win_get_info_t *) MPIR_QMPI_first_fn_ptrs[MPI_WIN_GET_INFO_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_WIN_GET_INFO_T], win, info_used);
}
#else /* ENABLE_QMPI */
int MPI_Win_get_info(MPI_Win win, MPI_Info *info_used)
{
    return internal_Win_get_info(win, info_used);
}
#endif /* ENABLE_QMPI */
