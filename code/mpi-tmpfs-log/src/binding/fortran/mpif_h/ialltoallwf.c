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
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLW( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_IALLTOALLW = PMPI_IALLTOALLW
#pragma weak mpi_ialltoallw__ = PMPI_IALLTOALLW
#pragma weak mpi_ialltoallw_ = PMPI_IALLTOALLW
#pragma weak mpi_ialltoallw = PMPI_IALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_IALLTOALLW = pmpi_ialltoallw__
#pragma weak mpi_ialltoallw__ = pmpi_ialltoallw__
#pragma weak mpi_ialltoallw_ = pmpi_ialltoallw__
#pragma weak mpi_ialltoallw = pmpi_ialltoallw__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_IALLTOALLW = pmpi_ialltoallw_
#pragma weak mpi_ialltoallw__ = pmpi_ialltoallw_
#pragma weak mpi_ialltoallw_ = pmpi_ialltoallw_
#pragma weak mpi_ialltoallw = pmpi_ialltoallw_
#else
#pragma weak MPI_IALLTOALLW = pmpi_ialltoallw
#pragma weak mpi_ialltoallw__ = pmpi_ialltoallw
#pragma weak mpi_ialltoallw_ = pmpi_ialltoallw
#pragma weak mpi_ialltoallw = pmpi_ialltoallw
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLW( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_IALLTOALLW = PMPI_IALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ialltoallw__ = pmpi_ialltoallw__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ialltoallw = pmpi_ialltoallw
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ialltoallw_ = pmpi_ialltoallw_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_IALLTOALLW  MPI_IALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_ialltoallw__  mpi_ialltoallw__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_ialltoallw  mpi_ialltoallw
#else
#pragma _HP_SECONDARY_DEF pmpi_ialltoallw_  mpi_ialltoallw_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_IALLTOALLW as PMPI_IALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_ialltoallw__ as pmpi_ialltoallw__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_ialltoallw as pmpi_ialltoallw
#else
#pragma _CRI duplicate mpi_ialltoallw_ as pmpi_ialltoallw_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLW( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IALLTOALLW")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IALLTOALLW")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IALLTOALLW")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IALLTOALLW")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLW( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLW( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLW( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLW( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_ialltoallw__ = MPI_IALLTOALLW
#pragma weak mpi_ialltoallw_ = MPI_IALLTOALLW
#pragma weak mpi_ialltoallw = MPI_IALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_IALLTOALLW = mpi_ialltoallw__
#pragma weak mpi_ialltoallw_ = mpi_ialltoallw__
#pragma weak mpi_ialltoallw = mpi_ialltoallw__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_IALLTOALLW = mpi_ialltoallw_
#pragma weak mpi_ialltoallw__ = mpi_ialltoallw_
#pragma weak mpi_ialltoallw = mpi_ialltoallw_
#else
#pragma weak MPI_IALLTOALLW = mpi_ialltoallw
#pragma weak mpi_ialltoallw__ = mpi_ialltoallw
#pragma weak mpi_ialltoallw_ = mpi_ialltoallw
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLW( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_IALLTOALLW")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_IALLTOALLW")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_IALLTOALLW")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLW( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallw__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallw__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallw__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLW( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallw_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallw_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallw_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_IALLTOALLW( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallw")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallw")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ialltoallw")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_IALLTOALLW( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallw__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallw_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallw( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_ialltoallw__ = PMPI_IALLTOALLW
#pragma weak pmpi_ialltoallw_ = PMPI_IALLTOALLW
#pragma weak pmpi_ialltoallw = PMPI_IALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_IALLTOALLW = pmpi_ialltoallw__
#pragma weak pmpi_ialltoallw_ = pmpi_ialltoallw__
#pragma weak pmpi_ialltoallw = pmpi_ialltoallw__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_IALLTOALLW = pmpi_ialltoallw_
#pragma weak pmpi_ialltoallw__ = pmpi_ialltoallw_
#pragma weak pmpi_ialltoallw = pmpi_ialltoallw_
#else
#pragma weak PMPI_IALLTOALLW = pmpi_ialltoallw
#pragma weak pmpi_ialltoallw__ = pmpi_ialltoallw
#pragma weak pmpi_ialltoallw_ = pmpi_ialltoallw
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallw__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IALLTOALLW")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallw_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IALLTOALLW")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallw( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IALLTOALLW")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_IALLTOALLW( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallw_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallw( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_IALLTOALLW( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallw__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallw( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_IALLTOALLW( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallw__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ialltoallw_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ialltoallw")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_ialltoallw_ PMPI_IALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_ialltoallw_ pmpi_ialltoallw__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_ialltoallw_ pmpi_ialltoallw
#else
#define mpi_ialltoallw_ pmpi_ialltoallw_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Ialltoallw
#define MPI_Ialltoallw PMPI_Ialltoallw
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_ialltoallw_ MPI_IALLTOALLW
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_ialltoallw_ mpi_ialltoallw__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_ialltoallw_ mpi_ialltoallw
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_ialltoallw_ ( void*v1, MPI_Fint v2[], MPI_Fint v3[], MPI_Fint v4[], void*v5, MPI_Fint v6[], MPI_Fint v7[], MPI_Fint v8[], MPI_Fint *v9, MPI_Fint *v10, MPI_Fint *ierr ){

#ifndef HAVE_MPI_F_INIT_WORKS_WITH_C
    if (MPIR_F_NeedInit){ mpirinitf_(); MPIR_F_NeedInit = 0; }
#endif
    if (v1 == MPIR_F_MPI_IN_PLACE) v1 = MPI_IN_PLACE;
    if (v1 == MPIR_F_MPI_BOTTOM) v1 = MPI_BOTTOM;
    if (v5 == MPIR_F_MPI_BOTTOM) v5 = MPI_BOTTOM;
    *ierr = MPI_Ialltoallw( v1, v2, v3, (MPI_Datatype *)(v4), v5, v6, v7, (MPI_Datatype *)(v8), (MPI_Comm)(*v9), (MPI_Request *)(v10) );
}
