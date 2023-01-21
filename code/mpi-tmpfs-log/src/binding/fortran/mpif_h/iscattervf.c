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
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_ISCATTERV = PMPI_ISCATTERV
#pragma weak mpi_iscatterv__ = PMPI_ISCATTERV
#pragma weak mpi_iscatterv_ = PMPI_ISCATTERV
#pragma weak mpi_iscatterv = PMPI_ISCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ISCATTERV = pmpi_iscatterv__
#pragma weak mpi_iscatterv__ = pmpi_iscatterv__
#pragma weak mpi_iscatterv_ = pmpi_iscatterv__
#pragma weak mpi_iscatterv = pmpi_iscatterv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ISCATTERV = pmpi_iscatterv_
#pragma weak mpi_iscatterv__ = pmpi_iscatterv_
#pragma weak mpi_iscatterv_ = pmpi_iscatterv_
#pragma weak mpi_iscatterv = pmpi_iscatterv_
#else
#pragma weak MPI_ISCATTERV = pmpi_iscatterv
#pragma weak mpi_iscatterv__ = pmpi_iscatterv
#pragma weak mpi_iscatterv_ = pmpi_iscatterv
#pragma weak mpi_iscatterv = pmpi_iscatterv
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_ISCATTERV = PMPI_ISCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_iscatterv__ = pmpi_iscatterv__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_iscatterv = pmpi_iscatterv
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_iscatterv_ = pmpi_iscatterv_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_ISCATTERV  MPI_ISCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_iscatterv__  mpi_iscatterv__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_iscatterv  mpi_iscatterv
#else
#pragma _HP_SECONDARY_DEF pmpi_iscatterv_  mpi_iscatterv_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_ISCATTERV as PMPI_ISCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_iscatterv__ as pmpi_iscatterv__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_iscatterv as pmpi_iscatterv
#else
#pragma _CRI duplicate mpi_iscatterv_ as pmpi_iscatterv_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISCATTERV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISCATTERV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISCATTERV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISCATTERV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_iscatterv__ = MPI_ISCATTERV
#pragma weak mpi_iscatterv_ = MPI_ISCATTERV
#pragma weak mpi_iscatterv = MPI_ISCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ISCATTERV = mpi_iscatterv__
#pragma weak mpi_iscatterv_ = mpi_iscatterv__
#pragma weak mpi_iscatterv = mpi_iscatterv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ISCATTERV = mpi_iscatterv_
#pragma weak mpi_iscatterv__ = mpi_iscatterv_
#pragma weak mpi_iscatterv = mpi_iscatterv_
#else
#pragma weak MPI_ISCATTERV = mpi_iscatterv
#pragma weak mpi_iscatterv__ = mpi_iscatterv
#pragma weak mpi_iscatterv_ = mpi_iscatterv
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ISCATTERV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ISCATTERV")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ISCATTERV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscatterv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscatterv__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscatterv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscatterv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscatterv_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscatterv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ISCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscatterv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscatterv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iscatterv")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iscatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_ISCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_iscatterv__ = PMPI_ISCATTERV
#pragma weak pmpi_iscatterv_ = PMPI_ISCATTERV
#pragma weak pmpi_iscatterv = PMPI_ISCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_ISCATTERV = pmpi_iscatterv__
#pragma weak pmpi_iscatterv_ = pmpi_iscatterv__
#pragma weak pmpi_iscatterv = pmpi_iscatterv__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_ISCATTERV = pmpi_iscatterv_
#pragma weak pmpi_iscatterv__ = pmpi_iscatterv_
#pragma weak pmpi_iscatterv = pmpi_iscatterv_
#else
#pragma weak PMPI_ISCATTERV = pmpi_iscatterv
#pragma weak pmpi_iscatterv__ = pmpi_iscatterv
#pragma weak pmpi_iscatterv_ = pmpi_iscatterv
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISCATTERV")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISCATTERV")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ISCATTERV")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ISCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ISCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscatterv( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_ISCATTERV( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscatterv__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iscatterv_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iscatterv")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_iscatterv_ PMPI_ISCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_iscatterv_ pmpi_iscatterv__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_iscatterv_ pmpi_iscatterv
#else
#define mpi_iscatterv_ pmpi_iscatterv_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Iscatterv
#define MPI_Iscatterv PMPI_Iscatterv
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_iscatterv_ MPI_ISCATTERV
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_iscatterv_ mpi_iscatterv__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_iscatterv_ mpi_iscatterv
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_iscatterv_ ( void*v1, MPI_Fint v2[], MPI_Fint v3[], MPI_Fint *v4, void*v5, MPI_Fint *v6, MPI_Fint *v7, MPI_Fint *v8, MPI_Fint *v9, MPI_Fint *v10, MPI_Fint *ierr ){

#ifndef HAVE_MPI_F_INIT_WORKS_WITH_C
    if (MPIR_F_NeedInit){ mpirinitf_(); MPIR_F_NeedInit = 0; }
#endif
    if (v5 == MPIR_F_MPI_IN_PLACE) v5 = MPI_IN_PLACE;
    if (v1 == MPIR_F_MPI_BOTTOM) v1 = MPI_BOTTOM;
    if (v5 == MPIR_F_MPI_BOTTOM) v5 = MPI_BOTTOM;
    *ierr = MPI_Iscatterv( v1, v2, v3, (MPI_Datatype)(*v4), v5, (int)*v6, (MPI_Datatype)(*v7), (int)*v8, (MPI_Comm)(*v9), (MPI_Request *)(v10) );
}
