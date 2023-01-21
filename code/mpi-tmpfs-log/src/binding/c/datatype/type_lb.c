/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Type_lb */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Type_lb = PMPI_Type_lb
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Type_lb  MPI_Type_lb
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Type_lb as PMPI_Type_lb
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Type_lb(MPI_Datatype datatype, MPI_Aint *displacement)
     __attribute__ ((weak, alias("PMPI_Type_lb")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Type_lb
#define MPI_Type_lb PMPI_Type_lb
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Type_lb(MPI_Datatype datatype, MPI_Aint *displacement)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;

    MPIR_ERRTEST_INITIALIZED_ORDIE();
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_DATATYPE(datatype, "datatype", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    MPIR_Datatype_get_ptr(datatype, datatype_ptr);

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
            if (mpi_errno) {
                goto fn_fail;
            }
            MPIR_ERRTEST_ARGNULL(displacement, "displacement", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    MPIR_Type_lb_impl(datatype, displacement);
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_type_lb", "**mpi_type_lb %D %p", datatype, displacement);
#endif
    mpi_errno = MPIR_Err_return_comm(0, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Type_lb - Returns the lower-bound of a datatype

Input Parameters:
. datatype - datatype to get information on (handle)

Output Parameters:
. displacement - displacement of lower bound from origin, in bytes (integer)

.N Removed
   The replacement for this routine is 'MPI_Type_Get_extent'.

.N ThreadSafe

.N Fortran

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_TYPE
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Type_lb(QMPI_Context context, int tool_id, MPI_Datatype datatype, MPI_Aint *displacement)
{
    return internal_Type_lb(datatype, displacement);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Type_lb(MPI_Datatype datatype, MPI_Aint *displacement)
{
    QMPI_Context context;
    QMPI_Type_lb_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Type_lb(context, 0, datatype, displacement);

    fn_ptr = (QMPI_Type_lb_t *) MPIR_QMPI_first_fn_ptrs[MPI_TYPE_LB_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_TYPE_LB_T], datatype, displacement);
}
#else /* ENABLE_QMPI */
int MPI_Type_lb(MPI_Datatype datatype, MPI_Aint *displacement)
{
    return internal_Type_lb(datatype, displacement);
}
#endif /* ENABLE_QMPI */
