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
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALL( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_INEIGHBOR_ALLTOALL = PMPI_INEIGHBOR_ALLTOALL
#pragma weak mpi_ineighbor_alltoall__ = PMPI_INEIGHBOR_ALLTOALL
#pragma weak mpi_ineighbor_alltoall_ = PMPI_INEIGHBOR_ALLTOALL
#pragma weak mpi_ineighbor_alltoall = PMPI_INEIGHBOR_ALLTOALL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INEIGHBOR_ALLTOALL = pmpi_ineighbor_alltoall__
#pragma weak mpi_ineighbor_alltoall__ = pmpi_ineighbor_alltoall__
#pragma weak mpi_ineighbor_alltoall_ = pmpi_ineighbor_alltoall__
#pragma weak mpi_ineighbor_alltoall = pmpi_ineighbor_alltoall__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INEIGHBOR_ALLTOALL = pmpi_ineighbor_alltoall_
#pragma weak mpi_ineighbor_alltoall__ = pmpi_ineighbor_alltoall_
#pragma weak mpi_ineighbor_alltoall_ = pmpi_ineighbor_alltoall_
#pragma weak mpi_ineighbor_alltoall = pmpi_ineighbor_alltoall_
#else
#pragma weak MPI_INEIGHBOR_ALLTOALL = pmpi_ineighbor_alltoall
#pragma weak mpi_ineighbor_alltoall__ = pmpi_ineighbor_alltoall
#pragma weak mpi_ineighbor_alltoall_ = pmpi_ineighbor_alltoall
#pragma weak mpi_ineighbor_alltoall = pmpi_ineighbor_alltoall
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALL( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_INEIGHBOR_ALLTOALL = PMPI_INEIGHBOR_ALLTOALL
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ineighbor_alltoall__ = pmpi_ineighbor_alltoall__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ineighbor_alltoall = pmpi_ineighbor_alltoall
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_ineighbor_alltoall_ = pmpi_ineighbor_alltoall_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_INEIGHBOR_ALLTOALL  MPI_INEIGHBOR_ALLTOALL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_ineighbor_alltoall__  mpi_ineighbor_alltoall__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_ineighbor_alltoall  mpi_ineighbor_alltoall
#else
#pragma _HP_SECONDARY_DEF pmpi_ineighbor_alltoall_  mpi_ineighbor_alltoall_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_INEIGHBOR_ALLTOALL as PMPI_INEIGHBOR_ALLTOALL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_ineighbor_alltoall__ as pmpi_ineighbor_alltoall__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_ineighbor_alltoall as pmpi_ineighbor_alltoall
#else
#pragma _CRI duplicate mpi_ineighbor_alltoall_ as pmpi_ineighbor_alltoall_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALL( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_INEIGHBOR_ALLTOALL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_INEIGHBOR_ALLTOALL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_INEIGHBOR_ALLTOALL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_INEIGHBOR_ALLTOALL")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALL( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALL( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALL( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALL( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_ineighbor_alltoall__ = MPI_INEIGHBOR_ALLTOALL
#pragma weak mpi_ineighbor_alltoall_ = MPI_INEIGHBOR_ALLTOALL
#pragma weak mpi_ineighbor_alltoall = MPI_INEIGHBOR_ALLTOALL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INEIGHBOR_ALLTOALL = mpi_ineighbor_alltoall__
#pragma weak mpi_ineighbor_alltoall_ = mpi_ineighbor_alltoall__
#pragma weak mpi_ineighbor_alltoall = mpi_ineighbor_alltoall__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INEIGHBOR_ALLTOALL = mpi_ineighbor_alltoall_
#pragma weak mpi_ineighbor_alltoall__ = mpi_ineighbor_alltoall_
#pragma weak mpi_ineighbor_alltoall = mpi_ineighbor_alltoall_
#else
#pragma weak MPI_INEIGHBOR_ALLTOALL = mpi_ineighbor_alltoall
#pragma weak mpi_ineighbor_alltoall__ = mpi_ineighbor_alltoall
#pragma weak mpi_ineighbor_alltoall_ = mpi_ineighbor_alltoall
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALL( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_INEIGHBOR_ALLTOALL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_INEIGHBOR_ALLTOALL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_INEIGHBOR_ALLTOALL")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALL( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoall__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoall__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoall__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALL( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoall_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoall_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoall_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_INEIGHBOR_ALLTOALL( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoall")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoall")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_ineighbor_alltoall")));
extern FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_INEIGHBOR_ALLTOALL( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoall__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoall_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoall( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_ineighbor_alltoall__ = PMPI_INEIGHBOR_ALLTOALL
#pragma weak pmpi_ineighbor_alltoall_ = PMPI_INEIGHBOR_ALLTOALL
#pragma weak pmpi_ineighbor_alltoall = PMPI_INEIGHBOR_ALLTOALL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_INEIGHBOR_ALLTOALL = pmpi_ineighbor_alltoall__
#pragma weak pmpi_ineighbor_alltoall_ = pmpi_ineighbor_alltoall__
#pragma weak pmpi_ineighbor_alltoall = pmpi_ineighbor_alltoall__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_INEIGHBOR_ALLTOALL = pmpi_ineighbor_alltoall_
#pragma weak pmpi_ineighbor_alltoall__ = pmpi_ineighbor_alltoall_
#pragma weak pmpi_ineighbor_alltoall = pmpi_ineighbor_alltoall_
#else
#pragma weak PMPI_INEIGHBOR_ALLTOALL = pmpi_ineighbor_alltoall
#pragma weak pmpi_ineighbor_alltoall__ = pmpi_ineighbor_alltoall
#pragma weak pmpi_ineighbor_alltoall_ = pmpi_ineighbor_alltoall
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoall__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_INEIGHBOR_ALLTOALL")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoall_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_INEIGHBOR_ALLTOALL")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoall( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_INEIGHBOR_ALLTOALL")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_INEIGHBOR_ALLTOALL( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoall_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoall( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_INEIGHBOR_ALLTOALL( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoall__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoall( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_INEIGHBOR_ALLTOALL( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoall__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_ineighbor_alltoall_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_ineighbor_alltoall")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_ineighbor_alltoall_ PMPI_INEIGHBOR_ALLTOALL
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_ineighbor_alltoall_ pmpi_ineighbor_alltoall__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_ineighbor_alltoall_ pmpi_ineighbor_alltoall
#else
#define mpi_ineighbor_alltoall_ pmpi_ineighbor_alltoall_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Ineighbor_alltoall
#define MPI_Ineighbor_alltoall PMPI_Ineighbor_alltoall
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_ineighbor_alltoall_ MPI_INEIGHBOR_ALLTOALL
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_ineighbor_alltoall_ mpi_ineighbor_alltoall__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_ineighbor_alltoall_ mpi_ineighbor_alltoall
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_ineighbor_alltoall_ ( void*v1, MPI_Fint *v2, MPI_Fint *v3, void*v4, MPI_Fint *v5, MPI_Fint *v6, MPI_Fint *v7, MPI_Fint *v8, MPI_Fint *ierr ){
    if (v1 == MPIR_F_MPI_BOTTOM) v1 = MPI_BOTTOM;
    if (v4 == MPIR_F_MPI_BOTTOM) v4 = MPI_BOTTOM;
    *ierr = MPI_Ineighbor_alltoall( v1, (int)*v2, (MPI_Datatype)(*v3), v4, (int)*v5, (MPI_Datatype)(*v6), (MPI_Comm)(*v7), (MPI_Request *)(v8) );
}
