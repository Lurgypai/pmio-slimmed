/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Aint_add */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Aint_add = PMPI_Aint_add
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Aint_add  MPI_Aint_add
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Aint_add as PMPI_Aint_add
#elif defined(HAVE_WEAK_ATTRIBUTE)
MPI_Aint MPI_Aint_add(MPI_Aint base, MPI_Aint disp)
     __attribute__ ((weak, alias("PMPI_Aint_add")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Aint_add
#define MPI_Aint_add PMPI_Aint_add
#endif /* MPICH_MPI_FROM_PMPI */

static MPI_Aint internal_Aint_add(MPI_Aint base, MPI_Aint disp)
{
    MPI_Aint result;

    MPIR_ERRTEST_INITIALIZED_ORDIE();

    MPIR_FUNC_TERSE_ENTER;
    result = MPID_Aint_add(base, disp);
    MPIR_FUNC_TERSE_EXIT;

    return result;
}

/*@
   MPI_Aint_add - Returns the sum of base and disp

Input Parameters:
+ base - base address (integer)
- disp - displacement (integer)

Notes:
MPI_Aint_Add produces a new MPI_Aint value that is equivalent to the sum of the
base and disp arguments, where base represents a base address returned by a call
to MPI_GET_ADDRESS and disp represents a signed integer displacement. The resulting
address is valid only at the process that generated base, and it must correspond
to a location in the same object referenced by base. The addition is performed in
a manner that results in the correct MPI_Aint representation of the output address,
as if the process that originally produced base had called
.vb
    MPI_Get_address((char *) base + disp, &result)
.ve

.seealso: MPI_Aint_diff
@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
MPI_Aint QMPI_Aint_add(QMPI_Context context, int tool_id, MPI_Aint base, MPI_Aint disp)
{
    return internal_Aint_add(base, disp);
}
#endif /* MPICH_MPI_FROM_PMPI */
MPI_Aint MPI_Aint_add(MPI_Aint base, MPI_Aint disp)
{
    QMPI_Context context;
    QMPI_Aint_add_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Aint_add(context, 0, base, disp);

    fn_ptr = (QMPI_Aint_add_t *) MPIR_QMPI_first_fn_ptrs[MPI_AINT_ADD_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_AINT_ADD_T], base, disp);
}
#else /* ENABLE_QMPI */
MPI_Aint MPI_Aint_add(MPI_Aint base, MPI_Aint disp)
{
    return internal_Aint_add(base, disp);
}
#endif /* ENABLE_QMPI */
