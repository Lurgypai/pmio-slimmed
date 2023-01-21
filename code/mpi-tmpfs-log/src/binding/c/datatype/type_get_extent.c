/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Type_get_extent */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Type_get_extent = PMPI_Type_get_extent
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Type_get_extent  MPI_Type_get_extent
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Type_get_extent as PMPI_Type_get_extent
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Type_get_extent(MPI_Datatype datatype, MPI_Aint *lb, MPI_Aint *extent)
     __attribute__ ((weak, alias("PMPI_Type_get_extent")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Type_get_extent
#define MPI_Type_get_extent PMPI_Type_get_extent
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Type_get_extent(MPI_Datatype datatype, MPI_Aint *lb, MPI_Aint *extent)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_ERRTEST_INITIALIZED_ORDIE();
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_DATATYPE(datatype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(datatype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(datatype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            MPIR_ERRTEST_ARGNULL(lb, "lb", mpi_errno);
            MPIR_ERRTEST_ARGNULL(extent, "extent", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    mpi_errno = MPIR_Type_get_extent_impl(datatype, lb, extent);
    if (mpi_errno) {
        goto fn_fail;
    }
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_type_get_extent", "**mpi_type_get_extent %D %p %p",
                                     datatype, lb, extent);
#endif
    mpi_errno = MPIR_Err_return_comm(0, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Type_get_extent - Get the lower bound and extent for a Datatype

Input Parameters:
. datatype - datatype to get information on (handle)

Output Parameters:
+ lb - lower bound of datatype (integer)
- extent - extent of datatype (integer)

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
int QMPI_Type_get_extent(QMPI_Context context, int tool_id, MPI_Datatype datatype, MPI_Aint *lb,
                         MPI_Aint *extent)
{
    return internal_Type_get_extent(datatype, lb, extent);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Type_get_extent(MPI_Datatype datatype, MPI_Aint *lb, MPI_Aint *extent)
{
    QMPI_Context context;
    QMPI_Type_get_extent_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Type_get_extent(context, 0, datatype, lb, extent);

    fn_ptr = (QMPI_Type_get_extent_t *) MPIR_QMPI_first_fn_ptrs[MPI_TYPE_GET_EXTENT_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_TYPE_GET_EXTENT_T], datatype, lb,
            extent);
}
#else /* ENABLE_QMPI */
int MPI_Type_get_extent(MPI_Datatype datatype, MPI_Aint *lb, MPI_Aint *extent)
{
    return internal_Type_get_extent(datatype, lb, extent);
}
#endif /* ENABLE_QMPI */

/* -- Begin Profiling Symbol Block for routine MPI_Type_get_extent_c */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Type_get_extent_c = PMPI_Type_get_extent_c
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Type_get_extent_c  MPI_Type_get_extent_c
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Type_get_extent_c as PMPI_Type_get_extent_c
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Type_get_extent_c(MPI_Datatype datatype, MPI_Count *lb, MPI_Count *extent)
     __attribute__ ((weak, alias("PMPI_Type_get_extent_c")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Type_get_extent_c
#define MPI_Type_get_extent_c PMPI_Type_get_extent_c
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Type_get_extent_c(MPI_Datatype datatype, MPI_Count *lb, MPI_Count *extent)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_ERRTEST_INITIALIZED_ORDIE();
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_DATATYPE(datatype, "datatype", mpi_errno);
            if (!HANDLE_IS_BUILTIN(datatype)) {
                MPIR_Datatype *datatype_ptr ATTRIBUTE((unused)) = NULL;
                MPIR_Datatype_get_ptr(datatype, datatype_ptr);
                MPIR_Datatype_valid_ptr(datatype_ptr, mpi_errno);
                if (mpi_errno) {
                    goto fn_fail;
                }
            }
            MPIR_ERRTEST_ARGNULL(lb, "lb", mpi_errno);
            MPIR_ERRTEST_ARGNULL(extent, "extent", mpi_errno);
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    if (sizeof(MPI_Count) == sizeof(MPI_Aint)) {
        mpi_errno = MPIR_Type_get_extent_impl(datatype, (MPI_Aint *) lb, (MPI_Aint *) extent);
        if (mpi_errno) {
            goto fn_fail;
        }
    } else {
        /* MPI_Count is bigger than MPI_Aint */
        MPI_Aint lb_c;
        MPI_Aint extent_c;
        mpi_errno = MPIR_Type_get_extent_impl(datatype, &lb_c, &extent_c);
        if (mpi_errno) {
            goto fn_fail;
        }
        *lb = lb_c;
        *extent = extent_c;
    }
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_type_get_extent_c", "**mpi_type_get_extent_c %D %p %p",
                                     datatype, lb, extent);
#endif
    mpi_errno = MPIR_Err_return_comm(0, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Type_get_extent_c - Get the lower bound and extent for a Datatype

Input Parameters:
. datatype - datatype to get information on (handle) (handle)

Output Parameters:
+ lb - lower bound of datatype (integer) (integer)
- extent - extent of datatype (integer) (integer)

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
int QMPI_Type_get_extent_c(QMPI_Context context, int tool_id, MPI_Datatype datatype, MPI_Count *lb,
                           MPI_Count *extent)
{
    return internal_Type_get_extent_c(datatype, lb, extent);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Type_get_extent_c(MPI_Datatype datatype, MPI_Count *lb, MPI_Count *extent)
{
    QMPI_Context context;
    QMPI_Type_get_extent_c_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Type_get_extent_c(context, 0, datatype, lb, extent);

    fn_ptr = (QMPI_Type_get_extent_c_t *) MPIR_QMPI_first_fn_ptrs[MPI_TYPE_GET_EXTENT_C_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_TYPE_GET_EXTENT_C_T], datatype, lb,
            extent);
}
#else /* ENABLE_QMPI */
int MPI_Type_get_extent_c(MPI_Datatype datatype, MPI_Count *lb, MPI_Count *extent)
{
    return internal_Type_get_extent_c(datatype, lb, extent);
}
#endif /* ENABLE_QMPI */
