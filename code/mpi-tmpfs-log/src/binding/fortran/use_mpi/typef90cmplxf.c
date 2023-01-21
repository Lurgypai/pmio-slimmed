/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 *
 * This file is automatically generated by buildiface -infile=cf90t.h -deffile=./cf90tdefs
 * DO NOT EDIT
 */
#include "../mpif_h/mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_F90_COMPLEX( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_TYPE_CREATE_F90_COMPLEX = PMPI_TYPE_CREATE_F90_COMPLEX
#pragma weak mpi_type_create_f90_complex__ = PMPI_TYPE_CREATE_F90_COMPLEX
#pragma weak mpi_type_create_f90_complex_ = PMPI_TYPE_CREATE_F90_COMPLEX
#pragma weak mpi_type_create_f90_complex = PMPI_TYPE_CREATE_F90_COMPLEX
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TYPE_CREATE_F90_COMPLEX = pmpi_type_create_f90_complex__
#pragma weak mpi_type_create_f90_complex__ = pmpi_type_create_f90_complex__
#pragma weak mpi_type_create_f90_complex_ = pmpi_type_create_f90_complex__
#pragma weak mpi_type_create_f90_complex = pmpi_type_create_f90_complex__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TYPE_CREATE_F90_COMPLEX = pmpi_type_create_f90_complex_
#pragma weak mpi_type_create_f90_complex__ = pmpi_type_create_f90_complex_
#pragma weak mpi_type_create_f90_complex_ = pmpi_type_create_f90_complex_
#pragma weak mpi_type_create_f90_complex = pmpi_type_create_f90_complex_
#else
#pragma weak MPI_TYPE_CREATE_F90_COMPLEX = pmpi_type_create_f90_complex
#pragma weak mpi_type_create_f90_complex__ = pmpi_type_create_f90_complex
#pragma weak mpi_type_create_f90_complex_ = pmpi_type_create_f90_complex
#pragma weak mpi_type_create_f90_complex = pmpi_type_create_f90_complex
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_F90_COMPLEX( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_TYPE_CREATE_F90_COMPLEX = PMPI_TYPE_CREATE_F90_COMPLEX
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_type_create_f90_complex__ = pmpi_type_create_f90_complex__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_type_create_f90_complex = pmpi_type_create_f90_complex
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_type_create_f90_complex_ = pmpi_type_create_f90_complex_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_TYPE_CREATE_F90_COMPLEX  MPI_TYPE_CREATE_F90_COMPLEX
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_type_create_f90_complex__  mpi_type_create_f90_complex__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_type_create_f90_complex  mpi_type_create_f90_complex
#else
#pragma _HP_SECONDARY_DEF pmpi_type_create_f90_complex_  mpi_type_create_f90_complex_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_TYPE_CREATE_F90_COMPLEX as PMPI_TYPE_CREATE_F90_COMPLEX
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_type_create_f90_complex__ as pmpi_type_create_f90_complex__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_type_create_f90_complex as pmpi_type_create_f90_complex
#else
#pragma _CRI duplicate mpi_type_create_f90_complex_ as pmpi_type_create_f90_complex_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_F90_COMPLEX( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_CREATE_F90_COMPLEX")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_CREATE_F90_COMPLEX")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_CREATE_F90_COMPLEX")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_CREATE_F90_COMPLEX")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_F90_COMPLEX( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_F90_COMPLEX( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_F90_COMPLEX( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_F90_COMPLEX( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_type_create_f90_complex__ = MPI_TYPE_CREATE_F90_COMPLEX
#pragma weak mpi_type_create_f90_complex_ = MPI_TYPE_CREATE_F90_COMPLEX
#pragma weak mpi_type_create_f90_complex = MPI_TYPE_CREATE_F90_COMPLEX
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TYPE_CREATE_F90_COMPLEX = mpi_type_create_f90_complex__
#pragma weak mpi_type_create_f90_complex_ = mpi_type_create_f90_complex__
#pragma weak mpi_type_create_f90_complex = mpi_type_create_f90_complex__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TYPE_CREATE_F90_COMPLEX = mpi_type_create_f90_complex_
#pragma weak mpi_type_create_f90_complex__ = mpi_type_create_f90_complex_
#pragma weak mpi_type_create_f90_complex = mpi_type_create_f90_complex_
#else
#pragma weak MPI_TYPE_CREATE_F90_COMPLEX = mpi_type_create_f90_complex
#pragma weak mpi_type_create_f90_complex__ = mpi_type_create_f90_complex
#pragma weak mpi_type_create_f90_complex_ = mpi_type_create_f90_complex
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_F90_COMPLEX( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_CREATE_F90_COMPLEX")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_CREATE_F90_COMPLEX")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_CREATE_F90_COMPLEX")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_F90_COMPLEX( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_f90_complex__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_f90_complex__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_f90_complex__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_F90_COMPLEX( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_f90_complex_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_f90_complex_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_f90_complex_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_F90_COMPLEX( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_f90_complex")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_f90_complex")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_f90_complex")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_CREATE_F90_COMPLEX( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_f90_complex__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_f90_complex_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_f90_complex( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_type_create_f90_complex__ = PMPI_TYPE_CREATE_F90_COMPLEX
#pragma weak pmpi_type_create_f90_complex_ = PMPI_TYPE_CREATE_F90_COMPLEX
#pragma weak pmpi_type_create_f90_complex = PMPI_TYPE_CREATE_F90_COMPLEX
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_TYPE_CREATE_F90_COMPLEX = pmpi_type_create_f90_complex__
#pragma weak pmpi_type_create_f90_complex_ = pmpi_type_create_f90_complex__
#pragma weak pmpi_type_create_f90_complex = pmpi_type_create_f90_complex__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_TYPE_CREATE_F90_COMPLEX = pmpi_type_create_f90_complex_
#pragma weak pmpi_type_create_f90_complex__ = pmpi_type_create_f90_complex_
#pragma weak pmpi_type_create_f90_complex = pmpi_type_create_f90_complex_
#else
#pragma weak PMPI_TYPE_CREATE_F90_COMPLEX = pmpi_type_create_f90_complex
#pragma weak pmpi_type_create_f90_complex__ = pmpi_type_create_f90_complex
#pragma weak pmpi_type_create_f90_complex_ = pmpi_type_create_f90_complex
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_f90_complex__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_CREATE_F90_COMPLEX")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_f90_complex_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_CREATE_F90_COMPLEX")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_f90_complex( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_CREATE_F90_COMPLEX")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_CREATE_F90_COMPLEX( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_f90_complex_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_f90_complex( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_CREATE_F90_COMPLEX( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_f90_complex__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_f90_complex( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_CREATE_F90_COMPLEX( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_f90_complex__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_f90_complex_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_f90_complex")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_type_create_f90_complex_ PMPI_TYPE_CREATE_F90_COMPLEX
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_type_create_f90_complex_ pmpi_type_create_f90_complex__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_type_create_f90_complex_ pmpi_type_create_f90_complex
#else
#define mpi_type_create_f90_complex_ pmpi_type_create_f90_complex_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Type_create_f90_complex
#define MPI_Type_create_f90_complex PMPI_Type_create_f90_complex
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_type_create_f90_complex_ MPI_TYPE_CREATE_F90_COMPLEX
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_type_create_f90_complex_ mpi_type_create_f90_complex__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_type_create_f90_complex_ mpi_type_create_f90_complex
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "mpif90type.h"
FORT_DLL_SPEC void FORT_CALL mpi_type_create_f90_complex_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *ierr ){
    *ierr = MPI_Type_create_f90_complex( (int)*v1, (int)*v2, (MPI_Datatype *)(v3) );
}
