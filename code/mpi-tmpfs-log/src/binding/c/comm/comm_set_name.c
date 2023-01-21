/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Comm_set_name */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Comm_set_name = PMPI_Comm_set_name
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Comm_set_name  MPI_Comm_set_name
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Comm_set_name as PMPI_Comm_set_name
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Comm_set_name(MPI_Comm comm, const char *comm_name)
     __attribute__ ((weak, alias("PMPI_Comm_set_name")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Comm_set_name
#define MPI_Comm_set_name PMPI_Comm_set_name
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Comm_set_name(MPI_Comm comm, const char *comm_name)
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
            MPIR_ERRTEST_ARGNULL(comm_name, "comm_name", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    MPID_THREAD_CS_ENTER(POBJ, comm_ptr->mutex);
    MPID_THREAD_CS_ENTER(VCI, comm_ptr->mutex);
    MPL_strncpy(comm_ptr->name, comm_name, MPI_MAX_OBJECT_NAME);
    MPID_THREAD_CS_EXIT(POBJ, comm_ptr->mutex);
    MPID_THREAD_CS_EXIT(VCI, comm_ptr->mutex);
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPID_THREAD_CS_EXIT(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_comm_set_name", "**mpi_comm_set_name %C %s", comm,
                                     comm_name);
#endif
    mpi_errno = MPIR_Err_return_comm(comm_ptr, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Comm_set_name - Sets the print name for a communicator

Input Parameters:
+ comm - communicator whose identifier is to be set (handle)
- comm_name - the character string which is remembered as the name (string)

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
int QMPI_Comm_set_name(QMPI_Context context, int tool_id, MPI_Comm comm, const char *comm_name)
{
    return internal_Comm_set_name(comm, comm_name);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Comm_set_name(MPI_Comm comm, const char *comm_name)
{
    QMPI_Context context;
    QMPI_Comm_set_name_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Comm_set_name(context, 0, comm, comm_name);

    fn_ptr = (QMPI_Comm_set_name_t *) MPIR_QMPI_first_fn_ptrs[MPI_COMM_SET_NAME_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_COMM_SET_NAME_T], comm, comm_name);
}
#else /* ENABLE_QMPI */
int MPI_Comm_set_name(MPI_Comm comm, const char *comm_name)
{
    return internal_Comm_set_name(comm, comm_name);
}
#endif /* ENABLE_QMPI */
