/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_T_category_get_pvars */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_T_category_get_pvars = PMPI_T_category_get_pvars
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_T_category_get_pvars  MPI_T_category_get_pvars
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_T_category_get_pvars as PMPI_T_category_get_pvars
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_T_category_get_pvars(int cat_index, int len, int indices[])
     __attribute__ ((weak, alias("PMPI_T_category_get_pvars")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_T_category_get_pvars
#define MPI_T_category_get_pvars PMPI_T_category_get_pvars
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_T_category_get_pvars(int cat_index, int len, int indices[])
{
    int mpi_errno = MPI_SUCCESS;

    MPIT_ERRTEST_MPIT_INITIALIZED();

    MPIR_T_THREAD_CS_ENTER();
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIT_ERRTEST_CAT_INDEX(cat_index);
            MPIT_ERRTEST_ARGNEG(len);
            if (len != 0) {
                MPIT_ERRTEST_ARGNULL(indices);
            }
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    if (len == 0) {
        goto fn_exit;
    }

    /* ... body of routine ... */
    mpi_errno = MPIR_T_category_get_pvars_impl(cat_index, len, indices);
    if (mpi_errno) {
        goto fn_fail;
    }
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    MPIR_T_THREAD_CS_EXIT();
    return mpi_errno;

  fn_fail:
    goto fn_exit;
}

/*@
   MPI_T_category_get_pvars - Get performance variables in a category

Input Parameters:
+ cat_index - index of the category to be queried, in the range $0$ and $num_cat-1$ (integer)
- len - the length of the indices array (integer)

Output Parameters:
. indices - an integer array of size len, indicating performance variable indices (integer)

.N ThreadSafe

.N Errors
.N MPI_SUCCESS

.N MPI_T_ERR_INVALID
.N MPI_T_ERR_INVALID_INDEX
.N MPI_T_ERR_NOT_INITIALIZED
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_T_category_get_pvars(QMPI_Context context, int tool_id, int cat_index, int len,
                              int indices[])
{
    return internal_T_category_get_pvars(cat_index, len, indices);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_T_category_get_pvars(int cat_index, int len, int indices[])
{
    QMPI_Context context;
    QMPI_T_category_get_pvars_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_T_category_get_pvars(context, 0, cat_index, len, indices);

    fn_ptr = (QMPI_T_category_get_pvars_t *) MPIR_QMPI_first_fn_ptrs[MPI_T_CATEGORY_GET_PVARS_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_T_CATEGORY_GET_PVARS_T], cat_index, len,
            indices);
}
#else /* ENABLE_QMPI */
int MPI_T_category_get_pvars(int cat_index, int len, int indices[])
{
    return internal_T_category_get_pvars(cat_index, len, indices);
}
#endif /* ENABLE_QMPI */
