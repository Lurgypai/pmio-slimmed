/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* -- THIS FILE IS AUTO-GENERATED -- */

#include "mpiimpl.h"

/* -- Begin Profiling Symbol Block for routine MPI_Get_address */
#if defined(HAVE_PRAGMA_WEAK)
#pragma weak MPI_Get_address = PMPI_Get_address
#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#pragma _HP_SECONDARY_DEF PMPI_Get_address  MPI_Get_address
#elif defined(HAVE_PRAGMA_CRI_DUP)
#pragma _CRI duplicate MPI_Get_address as PMPI_Get_address
#elif defined(HAVE_WEAK_ATTRIBUTE)
int MPI_Get_address(const void *location, MPI_Aint *address)
     __attribute__ ((weak, alias("PMPI_Get_address")));
#endif
/* -- End Profiling Symbol Block */

/* Define MPICH_MPI_FROM_PMPI if weak symbols are not supported to build
   the MPI routines */
#ifndef MPICH_MPI_FROM_PMPI
#undef MPI_Get_address
#define MPI_Get_address PMPI_Get_address
#endif /* MPICH_MPI_FROM_PMPI */

static int internal_Get_address(const void *location, MPI_Aint *address)
{
    int mpi_errno = MPI_SUCCESS;

    MPIR_ERRTEST_INITIALIZED_ORDIE();
    MPIR_FUNC_TERSE_ENTER;

#ifdef HAVE_ERROR_CHECKING
    {
        MPID_BEGIN_ERROR_CHECKS;
        {
            MPIR_ERRTEST_ARGNULL(address, "address", mpi_errno);
            /* location can be NULL (MPI_BOTTOM) */
        }
        MPID_END_ERROR_CHECKS;
    }
#endif /* HAVE_ERROR_CHECKING */

    /* ... body of routine ... */
    /* SX_4 needs to set CHAR_PTR_IS_ADDRESS
     * The reason is that it computes the different in two pointers in
     * an "int", and addresses typically have the high (bit 31) bit set;
     * thus the difference, when cast as MPI_Aint (long), is sign-extended,
     * making the absolute address negative.  Without a copy of the C
     * standard, I can't tell if this is a compiler bug or a language bug.
     */
#ifdef CHAR_PTR_IS_ADDRESS
    *address = (MPI_Aint) location;
    #else
    /* Note that this is the "portable" way to generate an address.
     * The difference of two pointers is the number of elements
     * between them, so this gives the number of chars between location
     * and ptr.  As long as sizeof(char) represents one byte,
     * of bytes from 0 to location */
    *address = (MPI_Aint) ((char *) location - (char *) MPI_BOTTOM);
#endif
    /* The same code is used in MPI_Address */
    /* ... end of body of routine ... */

  fn_exit:
    MPIR_FUNC_TERSE_EXIT;
    return mpi_errno;

  fn_fail:
    /* --BEGIN ERROR HANDLINE-- */
#ifdef HAVE_ERROR_CHECKING
    mpi_errno = MPIR_Err_create_code(mpi_errno, MPIR_ERR_RECOVERABLE, __func__, __LINE__, MPI_ERR_OTHER,
                                     "**mpi_get_address", "**mpi_get_address %p %p", location,
                                     address);
#endif
    mpi_errno = MPIR_Err_return_comm(0, __func__, mpi_errno);
    /* --END ERROR HANDLING-- */
    goto fn_exit;
}

/*@
   MPI_Get_address - Get the address of a location in memory

Input Parameters:
. location - location in caller memory (choice)

Output Parameters:
. address - address of location (integer)

Notes:
This routine is provided for both the Fortran and C programmers.
On many systems, the address returned by this routine will be the same
as produced by the C '&' operator, but this is not required in C and
may not be true of systems with word- rather than byte-oriented
instructions or systems with segmented address spaces.

.N ThreadSafe

.N Fortran

 In Fortran, the integer type is always signed.  This can cause problems
 on systems where the address fits into a four byte unsigned integer but
 the value is larger than the largest signed integer.  For example, a system
 with more than 2 GBytes of memory may have addresses that do not fit within
 a four byte signed integer.  Unfortunately, there is no easy solution to
 this problem, as there is no Fortran datatype that can be used here (using
 a longer integer type will cause other problems, as well as surprising
 users when the size of the integer type is larger that the size of a pointer
 in C).  In this case, it is recommended that you use C to manipulate
 addresses.

.N Errors
.N MPI_SUCCESS

.N MPI_ERR_ARG
.N MPI_ERR_OTHER

@*/

#ifdef ENABLE_QMPI
#ifndef MPICH_MPI_FROM_PMPI
int QMPI_Get_address(QMPI_Context context, int tool_id, const void *location, MPI_Aint *address)
{
    return internal_Get_address(location, address);
}
#endif /* MPICH_MPI_FROM_PMPI */
int MPI_Get_address(const void *location, MPI_Aint *address)
{
    QMPI_Context context;
    QMPI_Get_address_t *fn_ptr;

    context.storage_stack = NULL;

    if (MPIR_QMPI_num_tools == 0)
        return QMPI_Get_address(context, 0, location, address);

    fn_ptr = (QMPI_Get_address_t *) MPIR_QMPI_first_fn_ptrs[MPI_GET_ADDRESS_T];

    return (*fn_ptr) (context, MPIR_QMPI_first_tool_ids[MPI_GET_ADDRESS_T], location, address);
}
#else /* ENABLE_QMPI */
int MPI_Get_address(const void *location, MPI_Aint *address)
{
    return internal_Get_address(location, address);
}
#endif /* ENABLE_QMPI */
