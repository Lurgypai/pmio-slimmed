/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPIX_DELETE_ERROR_CODE( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code_( MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPIX_DELETE_ERROR_CODE = PMPIX_DELETE_ERROR_CODE
#pragma weak mpix_delete_error_code__ = PMPIX_DELETE_ERROR_CODE
#pragma weak mpix_delete_error_code_ = PMPIX_DELETE_ERROR_CODE
#pragma weak mpix_delete_error_code = PMPIX_DELETE_ERROR_CODE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPIX_DELETE_ERROR_CODE = pmpix_delete_error_code__
#pragma weak mpix_delete_error_code__ = pmpix_delete_error_code__
#pragma weak mpix_delete_error_code_ = pmpix_delete_error_code__
#pragma weak mpix_delete_error_code = pmpix_delete_error_code__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPIX_DELETE_ERROR_CODE = pmpix_delete_error_code_
#pragma weak mpix_delete_error_code__ = pmpix_delete_error_code_
#pragma weak mpix_delete_error_code_ = pmpix_delete_error_code_
#pragma weak mpix_delete_error_code = pmpix_delete_error_code_
#else
#pragma weak MPIX_DELETE_ERROR_CODE = pmpix_delete_error_code
#pragma weak mpix_delete_error_code__ = pmpix_delete_error_code
#pragma weak mpix_delete_error_code_ = pmpix_delete_error_code
#pragma weak mpix_delete_error_code = pmpix_delete_error_code
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPIX_DELETE_ERROR_CODE( MPI_Fint *, MPI_Fint * );

#pragma weak MPIX_DELETE_ERROR_CODE = PMPIX_DELETE_ERROR_CODE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code__( MPI_Fint *, MPI_Fint * );

#pragma weak mpix_delete_error_code__ = pmpix_delete_error_code__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code( MPI_Fint *, MPI_Fint * );

#pragma weak mpix_delete_error_code = pmpix_delete_error_code
#else
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code_( MPI_Fint *, MPI_Fint * );

#pragma weak mpix_delete_error_code_ = pmpix_delete_error_code_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPIX_DELETE_ERROR_CODE  MPIX_DELETE_ERROR_CODE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpix_delete_error_code__  mpix_delete_error_code__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpix_delete_error_code  mpix_delete_error_code
#else
#pragma _HP_SECONDARY_DEF pmpix_delete_error_code_  mpix_delete_error_code_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPIX_DELETE_ERROR_CODE as PMPIX_DELETE_ERROR_CODE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpix_delete_error_code__ as pmpix_delete_error_code__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpix_delete_error_code as pmpix_delete_error_code
#else
#pragma _CRI duplicate mpix_delete_error_code_ as pmpix_delete_error_code_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPIX_DELETE_ERROR_CODE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_DELETE_ERROR_CODE")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_DELETE_ERROR_CODE")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_DELETE_ERROR_CODE")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_DELETE_ERROR_CODE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_DELETE_ERROR_CODE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_DELETE_ERROR_CODE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPIX_DELETE_ERROR_CODE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPIX_DELETE_ERROR_CODE( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code_( MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpix_delete_error_code__ = MPIX_DELETE_ERROR_CODE
#pragma weak mpix_delete_error_code_ = MPIX_DELETE_ERROR_CODE
#pragma weak mpix_delete_error_code = MPIX_DELETE_ERROR_CODE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPIX_DELETE_ERROR_CODE = mpix_delete_error_code__
#pragma weak mpix_delete_error_code_ = mpix_delete_error_code__
#pragma weak mpix_delete_error_code = mpix_delete_error_code__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPIX_DELETE_ERROR_CODE = mpix_delete_error_code_
#pragma weak mpix_delete_error_code__ = mpix_delete_error_code_
#pragma weak mpix_delete_error_code = mpix_delete_error_code_
#else
#pragma weak MPIX_DELETE_ERROR_CODE = mpix_delete_error_code
#pragma weak mpix_delete_error_code__ = mpix_delete_error_code
#pragma weak mpix_delete_error_code_ = mpix_delete_error_code
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPIX_DELETE_ERROR_CODE( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPIX_DELETE_ERROR_CODE")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPIX_DELETE_ERROR_CODE")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPIX_DELETE_ERROR_CODE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_DELETE_ERROR_CODE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_delete_error_code__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_delete_error_code__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_delete_error_code__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_DELETE_ERROR_CODE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_delete_error_code_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_delete_error_code_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code_( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_delete_error_code_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPIX_DELETE_ERROR_CODE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_delete_error_code")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_delete_error_code")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_delete_error_code")));
extern FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code( MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPIX_DELETE_ERROR_CODE( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpix_delete_error_code__( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpix_delete_error_code_( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpix_delete_error_code( MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpix_delete_error_code__ = PMPIX_DELETE_ERROR_CODE
#pragma weak pmpix_delete_error_code_ = PMPIX_DELETE_ERROR_CODE
#pragma weak pmpix_delete_error_code = PMPIX_DELETE_ERROR_CODE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPIX_DELETE_ERROR_CODE = pmpix_delete_error_code__
#pragma weak pmpix_delete_error_code_ = pmpix_delete_error_code__
#pragma weak pmpix_delete_error_code = pmpix_delete_error_code__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPIX_DELETE_ERROR_CODE = pmpix_delete_error_code_
#pragma weak pmpix_delete_error_code__ = pmpix_delete_error_code_
#pragma weak pmpix_delete_error_code = pmpix_delete_error_code_
#else
#pragma weak PMPIX_DELETE_ERROR_CODE = pmpix_delete_error_code
#pragma weak pmpix_delete_error_code__ = pmpix_delete_error_code
#pragma weak pmpix_delete_error_code_ = pmpix_delete_error_code
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpix_delete_error_code__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_DELETE_ERROR_CODE")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_delete_error_code_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_DELETE_ERROR_CODE")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_delete_error_code( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_DELETE_ERROR_CODE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPIX_DELETE_ERROR_CODE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code__")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_delete_error_code_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code__")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_delete_error_code( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPIX_DELETE_ERROR_CODE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code_")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_delete_error_code__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code_")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_delete_error_code( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPIX_DELETE_ERROR_CODE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_delete_error_code__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_delete_error_code_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_delete_error_code")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpix_delete_error_code_ PMPIX_DELETE_ERROR_CODE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpix_delete_error_code_ pmpix_delete_error_code__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpix_delete_error_code_ pmpix_delete_error_code
#else
#define mpix_delete_error_code_ pmpix_delete_error_code_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPIX_Delete_error_code
#define MPIX_Delete_error_code PMPIX_Delete_error_code
#endif

#else

#ifdef F77_NAME_UPPER
#define mpix_delete_error_code_ MPIX_DELETE_ERROR_CODE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpix_delete_error_code_ mpix_delete_error_code__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpix_delete_error_code_ mpix_delete_error_code
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpix_delete_error_code_ ( MPI_Fint *v1, MPI_Fint *ierr ){
    *ierr = MPIX_Delete_error_code( (int)*v1 );
}
