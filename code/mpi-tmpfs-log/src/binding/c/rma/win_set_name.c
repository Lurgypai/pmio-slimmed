/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Win_set_name */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Win_set_name = PMPI_Win_set_name
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Win_set_name  MPI_Win_set_name
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Win_set_name as PMPI_Win_set_name
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Win_set_name(MPI_Win win, const char *win_name)
     __attribute__ ((weak, alias("PMPI_Win_set_name")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Win_set_name
#define MPI_Win_set_name PMPI_Win_set_name
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Win_set_name(MPI_Win win, const char *win_name)
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
            MPIR_ERRTEST_ARGNULL(win_name, "win_name", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    MPL_strncpy(win_ptr->name, win_name, MPI_MAX_OBJECT_NAME);
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_win_set_name", "**mpi_win_set_name %W %s", win, win_name);
#endif
    mpi_errno = MPIR_Err_return_win(win_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Win_set_name - Set the print name for an MPI RMA window

Input Parameters:
+ win - window whose identifier is to be set (handle)
- win_name - the character string which is remembered as the name (string)

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_WIN
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Win_set_name(QMPI_Context context, int tool_id, MPI_Win win, const char *win_name)
{
    return internal_Win_set_name(win, win_name);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Win_set_name(MPI_Win win, const char *win_name)
{
    QMPI_Context context;
    QMPI_Win_set_name_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Win_set_name(context, 0, win, win_name);

    fn_ptr = (QMPI_Win_set_name_t *) MPIR_QMPI_first_fn_ptrs[MPI_WIN_SET_NAME_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_WIN_SET_NAME_T], win, win_name);
}
#else /* ENABLE_QMPI */
int MPI_Win_set_name(MPI_Win win, const char *win_name)
{
    return internal_Win_set_name(win, win_name);
}
#endif /* ENABLE_QMPI */
