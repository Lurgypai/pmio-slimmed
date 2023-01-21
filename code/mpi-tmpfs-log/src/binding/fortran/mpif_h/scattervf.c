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
extern FORT_DLL_SPEC void FORT_CALL MPI_SCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_SCATTERV = PMPI_SCATTERV
#pragma weak mpi_scatterv__ = PMPI_SCATTERV
#pragma weak mpi_scatterv_ = PMPI_SCATTERV
#pragma weak mpi_scatterv = PMPI_SCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_SCATTERV = pmpi_scatterv__
#pragma weak mpi_scatterv__ = pmpi_scatterv__
#pragma weak mpi_scatterv_ = pmpi_scatterv__
#pragma weak mpi_scatterv = pmpi_scatterv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_SCATTERV = pmpi_scatterv_
#pragma weak mpi_scatterv__ = pmpi_scatterv_
#pragma weak mpi_scatterv_ = pmpi_scatterv_
#pragma weak mpi_scatterv = pmpi_scatterv_
#else
#pragma weak MPI_SCATTERV = pmpi_scatterv
#pragma weak mpi_scatterv__ = pmpi_scatterv
#pragma weak mpi_scatterv_ = pmpi_scatterv
#pragma weak mpi_scatterv = pmpi_scatterv
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_SCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_SCATTERV = PMPI_SCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_scatterv__ = pmpi_scatterv__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_scatterv = pmpi_scatterv
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_scatterv_ = pmpi_scatterv_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_SCATTERV  MPI_SCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_scatterv__  mpi_scatterv__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_scatterv  mpi_scatterv
#else
#pragma _HP_SECONDARY_DEF pmpi_scatterv_  mpi_scatterv_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_SCATTERV as PMPI_SCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_scatterv__ as pmpi_scatterv__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_scatterv as pmpi_scatterv
#else
#pragma _CRI duplicate mpi_scatterv_ as pmpi_scatterv_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_SCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_SCATTERV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_SCATTERV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_SCATTERV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_SCATTERV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_SCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_SCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_SCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_SCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_scatterv__ = MPI_SCATTERV
#pragma weak mpi_scatterv_ = MPI_SCATTERV
#pragma weak mpi_scatterv = MPI_SCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_SCATTERV = mpi_scatterv__
#pragma weak mpi_scatterv_ = mpi_scatterv__
#pragma weak mpi_scatterv = mpi_scatterv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_SCATTERV = mpi_scatterv_
#pragma weak mpi_scatterv__ = mpi_scatterv_
#pragma weak mpi_scatterv = mpi_scatterv_
#else
#pragma weak MPI_SCATTERV = mpi_scatterv
#pragma weak mpi_scatterv__ = mpi_scatterv
#pragma weak mpi_scatterv_ = mpi_scatterv
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_SCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_SCATTERV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_SCATTERV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_SCATTERV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_SCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_scatterv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_scatterv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_scatterv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_SCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_scatterv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_scatterv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_scatterv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_SCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_scatterv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_scatterv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_scatterv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_scatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_SCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_scatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_scatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_scatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_scatterv__ = PMPI_SCATTERV
#pragma weak pmpi_scatterv_ = PMPI_SCATTERV
#pragma weak pmpi_scatterv = PMPI_SCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_SCATTERV = pmpi_scatterv__
#pragma weak pmpi_scatterv_ = pmpi_scatterv__
#pragma weak pmpi_scatterv = pmpi_scatterv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_SCATTERV = pmpi_scatterv_
#pragma weak pmpi_scatterv__ = pmpi_scatterv_
#pragma weak pmpi_scatterv = pmpi_scatterv_
#else
#pragma weak PMPI_SCATTERV = pmpi_scatterv
#pragma weak pmpi_scatterv__ = pmpi_scatterv
#pragma weak pmpi_scatterv_ = pmpi_scatterv
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_scatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_SCATTERV")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_scatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_SCATTERV")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_scatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_SCATTERV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_SCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_scatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_scatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_SCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_scatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_scatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_SCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_scatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_scatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_scatterv")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_scatterv_ PMPI_SCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_scatterv_ pmpi_scatterv__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_scatterv_ pmpi_scatterv
#else
#define mpi_scatterv_ pmpi_scatterv_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Scatterv
#define MPI_Scatterv PMPI_Scatterv
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_scatterv_ MPI_SCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_scatterv_ mpi_scatterv__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_scatterv_ mpi_scatterv
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_scatterv_ ( void*v1, MPI_Fint v2[], MPI_Fint v3[], MPI_Fint *v4, void*v5, MPI_Fint *v6, MPI_Fint *v7, MPI_Fint *v8, MPI_Fint *v9, MPI_Fint *ierr ){

#ifndef HAVE_MPI_F_INIT_WORKS_WITH_C
    if (MPIR_F_NeedInit){ mpirinitf_(); MPIR_F_NeedInit = 0; }
#endif
    if (v5 == MPIR_F_MPI_IN_PLACE) v5 = MPI_IN_PLACE;
    if (v1 == MPIR_F_MPI_BOTTOM) v1 = MPI_BOTTOM;
    if (v5 == MPIR_F_MPI_BOTTOM) v5 = MPI_BOTTOM;
    *ierr = MPI_Scatterv( v1, v2, v3, (MPI_Datatype)(*v4), v5, (int)*v6, (MPI_Datatype)(*v7), (int)*v8, (MPI_Comm)(*v9) );
}
