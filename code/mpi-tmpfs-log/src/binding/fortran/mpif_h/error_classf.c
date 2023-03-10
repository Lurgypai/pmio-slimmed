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
extern FORT_DLL_SPEC void FORT_CALL MPI_ERROR_CLASS( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_ERROR_CLASS = PMPI_ERROR_CLASS
#pragma weak mpi_error_class__ = PMPI_ERROR_CLASS
#pragma weak mpi_error_class_ = PMPI_ERROR_CLASS
#pragma weak mpi_error_class = PMPI_ERROR_CLASS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ERROR_CLASS = pmpi_error_class__
#pragma weak mpi_error_class__ = pmpi_error_class__
#pragma weak mpi_error_class_ = pmpi_error_class__
#pragma weak mpi_error_class = pmpi_error_class__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ERROR_CLASS = pmpi_error_class_
#pragma weak mpi_error_class__ = pmpi_error_class_
#pragma weak mpi_error_class_ = pmpi_error_class_
#pragma weak mpi_error_class = pmpi_error_class_
#else
#pragma weak MPI_ERROR_CLASS = pmpi_error_class
#pragma weak mpi_error_class__ = pmpi_error_class
#pragma weak mpi_error_class_ = pmpi_error_class
#pragma weak mpi_error_class = pmpi_error_class
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ERROR_CLASS( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_ERROR_CLASS = PMPI_ERROR_CLASS
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class__( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_error_class__ = pmpi_error_class__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_error_class = pmpi_error_class
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_error_class_ = pmpi_error_class_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_ERROR_CLASS  MPI_ERROR_CLASS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_error_class__  mpi_error_class__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_error_class  mpi_error_class
#else
#pragma _HP_SECONDARY_DEF pmpi_error_class_  mpi_error_class_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_ERROR_CLASS as PMPI_ERROR_CLASS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_error_class__ as pmpi_error_class__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_error_class as pmpi_error_class
#else
#pragma _CRI duplicate mpi_error_class_ as pmpi_error_class_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ERROR_CLASS( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ERROR_CLASS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ERROR_CLASS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ERROR_CLASS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ERROR_CLASS")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ERROR_CLASS( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ERROR_CLASS( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ERROR_CLASS( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_ERROR_CLASS( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_error_class__ = MPI_ERROR_CLASS
#pragma weak mpi_error_class_ = MPI_ERROR_CLASS
#pragma weak mpi_error_class = MPI_ERROR_CLASS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ERROR_CLASS = mpi_error_class__
#pragma weak mpi_error_class_ = mpi_error_class__
#pragma weak mpi_error_class = mpi_error_class__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ERROR_CLASS = mpi_error_class_
#pragma weak mpi_error_class__ = mpi_error_class_
#pragma weak mpi_error_class = mpi_error_class_
#else
#pragma weak MPI_ERROR_CLASS = mpi_error_class
#pragma weak mpi_error_class__ = mpi_error_class
#pragma weak mpi_error_class_ = mpi_error_class
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ERROR_CLASS( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ERROR_CLASS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ERROR_CLASS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ERROR_CLASS")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ERROR_CLASS( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_error_class__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_error_class__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_error_class__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ERROR_CLASS( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_error_class_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_error_class_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_error_class_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ERROR_CLASS( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_error_class")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_error_class")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_error_class")));
extern FORT_DLL_SPEC void FORT_CALL mpi_error_class( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_ERROR_CLASS( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_error_class__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_error_class_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_error_class( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_error_class__ = PMPI_ERROR_CLASS
#pragma weak pmpi_error_class_ = PMPI_ERROR_CLASS
#pragma weak pmpi_error_class = PMPI_ERROR_CLASS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_ERROR_CLASS = pmpi_error_class__
#pragma weak pmpi_error_class_ = pmpi_error_class__
#pragma weak pmpi_error_class = pmpi_error_class__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_ERROR_CLASS = pmpi_error_class_
#pragma weak pmpi_error_class__ = pmpi_error_class_
#pragma weak pmpi_error_class = pmpi_error_class_
#else
#pragma weak PMPI_ERROR_CLASS = pmpi_error_class
#pragma weak pmpi_error_class__ = pmpi_error_class
#pragma weak pmpi_error_class_ = pmpi_error_class
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_error_class__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ERROR_CLASS")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_error_class_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ERROR_CLASS")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_error_class( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ERROR_CLASS")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ERROR_CLASS( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_error_class_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_error_class( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ERROR_CLASS( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_error_class__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_error_class( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_ERROR_CLASS( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_error_class__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_error_class_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_error_class")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_error_class_ PMPI_ERROR_CLASS
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_error_class_ pmpi_error_class__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_error_class_ pmpi_error_class
#else
#define mpi_error_class_ pmpi_error_class_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Error_class
#define MPI_Error_class PMPI_Error_class
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_error_class_ MPI_ERROR_CLASS
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_error_class_ mpi_error_class__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_error_class_ mpi_error_class
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_error_class_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *ierr ){
    *ierr = MPI_Error_class( (int)*v1, v2 );
}
