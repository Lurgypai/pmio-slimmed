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
extern FORT_DLL_SPEC void FORT_CALL MPI_ISENDRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_ISENDRECV = PMPI_ISENDRECV
#pragma weak mpi_isendrecv__ = PMPI_ISENDRECV
#pragma weak mpi_isendrecv_ = PMPI_ISENDRECV
#pragma weak mpi_isendrecv = PMPI_ISENDRECV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ISENDRECV = pmpi_isendrecv__
#pragma weak mpi_isendrecv__ = pmpi_isendrecv__
#pragma weak mpi_isendrecv_ = pmpi_isendrecv__
#pragma weak mpi_isendrecv = pmpi_isendrecv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ISENDRECV = pmpi_isendrecv_
#pragma weak mpi_isendrecv__ = pmpi_isendrecv_
#pragma weak mpi_isendrecv_ = pmpi_isendrecv_
#pragma weak mpi_isendrecv = pmpi_isendrecv_
#else
#pragma weak MPI_ISENDRECV = pmpi_isendrecv
#pragma weak mpi_isendrecv__ = pmpi_isendrecv
#pragma weak mpi_isendrecv_ = pmpi_isendrecv
#pragma weak mpi_isendrecv = pmpi_isendrecv
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISENDRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_ISENDRECV = PMPI_ISENDRECV
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_isendrecv__ = pmpi_isendrecv__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_isendrecv = pmpi_isendrecv
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_isendrecv_ = pmpi_isendrecv_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_ISENDRECV  MPI_ISENDRECV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_isendrecv__  mpi_isendrecv__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_isendrecv  mpi_isendrecv
#else
#pragma _HP_SECONDARY_DEF pmpi_isendrecv_  mpi_isendrecv_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_ISENDRECV as PMPI_ISENDRECV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_isendrecv__ as pmpi_isendrecv__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_isendrecv as pmpi_isendrecv
#else
#pragma _CRI duplicate mpi_isendrecv_ as pmpi_isendrecv_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISENDRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISENDRECV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISENDRECV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISENDRECV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISENDRECV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISENDRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISENDRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ISENDRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISENDRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_isendrecv__ = MPI_ISENDRECV
#pragma weak mpi_isendrecv_ = MPI_ISENDRECV
#pragma weak mpi_isendrecv = MPI_ISENDRECV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ISENDRECV = mpi_isendrecv__
#pragma weak mpi_isendrecv_ = mpi_isendrecv__
#pragma weak mpi_isendrecv = mpi_isendrecv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ISENDRECV = mpi_isendrecv_
#pragma weak mpi_isendrecv__ = mpi_isendrecv_
#pragma weak mpi_isendrecv = mpi_isendrecv_
#else
#pragma weak MPI_ISENDRECV = mpi_isendrecv
#pragma weak mpi_isendrecv__ = mpi_isendrecv
#pragma weak mpi_isendrecv_ = mpi_isendrecv
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISENDRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ISENDRECV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ISENDRECV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ISENDRECV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISENDRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_isendrecv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_isendrecv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_isendrecv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISENDRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_isendrecv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_isendrecv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_isendrecv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ISENDRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_isendrecv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_isendrecv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_isendrecv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_isendrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_ISENDRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_isendrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_isendrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_isendrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_isendrecv__ = PMPI_ISENDRECV
#pragma weak pmpi_isendrecv_ = PMPI_ISENDRECV
#pragma weak pmpi_isendrecv = PMPI_ISENDRECV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_ISENDRECV = pmpi_isendrecv__
#pragma weak pmpi_isendrecv_ = pmpi_isendrecv__
#pragma weak pmpi_isendrecv = pmpi_isendrecv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_ISENDRECV = pmpi_isendrecv_
#pragma weak pmpi_isendrecv__ = pmpi_isendrecv_
#pragma weak pmpi_isendrecv = pmpi_isendrecv_
#else
#pragma weak PMPI_ISENDRECV = pmpi_isendrecv
#pragma weak pmpi_isendrecv__ = pmpi_isendrecv
#pragma weak pmpi_isendrecv_ = pmpi_isendrecv
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_isendrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISENDRECV")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_isendrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISENDRECV")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_isendrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISENDRECV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ISENDRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_isendrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_isendrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ISENDRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_isendrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_isendrecv( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_ISENDRECV( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_isendrecv__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_isendrecv_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_isendrecv")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_isendrecv_ PMPI_ISENDRECV
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_isendrecv_ pmpi_isendrecv__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_isendrecv_ pmpi_isendrecv
#else
#define mpi_isendrecv_ pmpi_isendrecv_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Isendrecv
#define MPI_Isendrecv PMPI_Isendrecv
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_isendrecv_ MPI_ISENDRECV
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_isendrecv_ mpi_isendrecv__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_isendrecv_ mpi_isendrecv
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_isendrecv_ ( void*v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Fint *v5, void*v6, MPI_Fint *v7, MPI_Fint *v8, MPI_Fint *v9, MPI_Fint *v10, MPI_Fint *v11, MPI_Fint *v12, MPI_Fint *ierr ){
    if (v1 == MPIR_F_MPI_BOTTOM) v1 = MPI_BOTTOM;
    if (v6 == MPIR_F_MPI_BOTTOM) v6 = MPI_BOTTOM;
    *ierr = MPI_Isendrecv( v1, (int)*v2, (MPI_Datatype)(*v3), (int)*v4, (int)*v5, v6, (int)*v7, (MPI_Datatype)(*v8), (int)*v9, (int)*v10, (MPI_Comm)(*v11), (MPI_Request *)(v12) );
}
