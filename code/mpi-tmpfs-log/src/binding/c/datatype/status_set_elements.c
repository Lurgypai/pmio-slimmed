/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Status_set_elements */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Status_set_elements = PMPI_Status_set_elements
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Status_set_elements  MPI_Status_set_elements
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Status_set_elements as PMPI_Status_set_elements
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Status_set_elements(MPI_Status *status, MPI_Datatype datatype, int count)
     __attribute__ ((weak, alias("PMPI_Status_set_elements")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Status_set_elements
#define MPI_Status_set_elements PMPI_Status_set_elements
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Status_set_elements(MPI_Status *status, MPI_Datatype datatype, int count)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPID_THREAD_CS_ENTER(GLOBAL, MPIR_THREAD_GLOBAL_ALLFUNC_MUTEX);
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_ARGNULL(status, "status", mpi_errno);
            MPIR_ERRTEST_DATATYPE(datatype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(datatype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(datatype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            MPIR_ERRTEST_COUNT(count, mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    mpi_errno = MPIR_Status_set_elements_x_impl(status, datatype, (MPI_Count) count);
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
                                     "**mpi_status_set_elements", "**mpi_status_set_elements %p %D %d",
                                     status, datatype, count);
#endif
    mpi_errno = MPIR_Err_return_comm(0, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Status_set_elements - Set the number of elements in a status

Input Parameters:
+ datatype - datatype associated with count (handle)
- count - number of elements to associate with status (integer)

Input/Output Parameters:
. status - status with which to associate count (Status)

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_COUNT
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Status_set_elements(QMPI_Context context, int tool_id, MPI_Status *status,
                             MPI_Datatype datatype, int count)
{
    return internal_Status_set_elements(status, datatype, count);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Status_set_elements(MPI_Status *status, MPI_Datatype datatype, int count)
{
    QMPI_Context context;
    QMPI_Status_set_elements_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Status_set_elements(context, 0, status, datatype, count);

    fn_ptr = (QMPI_Status_set_elements_t *) MPIR_QMPI_first_fn_ptrs[MPI_STATUS_SET_ELEMENTS_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_STATUS_SET_ELEMENTS_T], status,
            datatype, count);
}
#else /* ENABLE_QMPI */
int MPI_Status_set_elements(MPI_Status *status, MPI_Datatype datatype, int count)
{
    return internal_Status_set_elements(status, datatype, count);
}
#endif /* ENABLE_QMPI */
