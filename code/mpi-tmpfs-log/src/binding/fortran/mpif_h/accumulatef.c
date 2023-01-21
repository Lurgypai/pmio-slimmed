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
extern FORT_DLL_SPEC void FORT_CALL MPI_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_ACCUMULATE = PMPI_ACCUMULATE
#pragma weak mpi_accumulate__ = PMPI_ACCUMULATE
#pragma weak mpi_accumulate_ = PMPI_ACCUMULATE
#pragma weak mpi_accumulate = PMPI_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ACCUMULATE = pmpi_accumulate__
#pragma weak mpi_accumulate__ = pmpi_accumulate__
#pragma weak mpi_accumulate_ = pmpi_accumulate__
#pragma weak mpi_accumulate = pmpi_accumulate__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ACCUMULATE = pmpi_accumulate_
#pragma weak mpi_accumulate__ = pmpi_accumulate_
#pragma weak mpi_accumulate_ = pmpi_accumulate_
#pragma weak mpi_accumulate = pmpi_accumulate_
#else
#pragma weak MPI_ACCUMULATE = pmpi_accumulate
#pragma weak mpi_accumulate__ = pmpi_accumulate
#pragma weak mpi_accumulate_ = pmpi_accumulate
#pragma weak mpi_accumulate = pmpi_accumulate
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_ACCUMULATE = PMPI_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_accumulate__ = pmpi_accumulate__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_accumulate = pmpi_accumulate
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_accumulate_ = pmpi_accumulate_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_ACCUMULATE  MPI_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_accumulate__  mpi_accumulate__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_accumulate  mpi_accumulate
#else
#pragma _HP_SECONDARY_DEF pmpi_accumulate_  mpi_accumulate_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_ACCUMULATE as PMPI_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_accumulate__ as pmpi_accumulate__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_accumulate as pmpi_accumulate
#else
#pragma _CRI duplicate mpi_accumulate_ as pmpi_accumulate_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ACCUMULATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ACCUMULATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ACCUMULATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ACCUMULATE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_accumulate__ = MPI_ACCUMULATE
#pragma weak mpi_accumulate_ = MPI_ACCUMULATE
#pragma weak mpi_accumulate = MPI_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ACCUMULATE = mpi_accumulate__
#pragma weak mpi_accumulate_ = mpi_accumulate__
#pragma weak mpi_accumulate = mpi_accumulate__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ACCUMULATE = mpi_accumulate_
#pragma weak mpi_accumulate__ = mpi_accumulate_
#pragma weak mpi_accumulate = mpi_accumulate_
#else
#pragma weak MPI_ACCUMULATE = mpi_accumulate
#pragma weak mpi_accumulate__ = mpi_accumulate
#pragma weak mpi_accumulate_ = mpi_accumulate
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ACCUMULATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ACCUMULATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ACCUMULATE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_accumulate__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_accumulate__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_accumulate__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_accumulate_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_accumulate_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_accumulate_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_accumulate( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_accumulate__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_accumulate_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_accumulate( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_accumulate__ = PMPI_ACCUMULATE
#pragma weak pmpi_accumulate_ = PMPI_ACCUMULATE
#pragma weak pmpi_accumulate = PMPI_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_ACCUMULATE = pmpi_accumulate__
#pragma weak pmpi_accumulate_ = pmpi_accumulate__
#pragma weak pmpi_accumulate = pmpi_accumulate__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_ACCUMULATE = pmpi_accumulate_
#pragma weak pmpi_accumulate__ = pmpi_accumulate_
#pragma weak pmpi_accumulate = pmpi_accumulate_
#else
#pragma weak PMPI_ACCUMULATE = pmpi_accumulate
#pragma weak pmpi_accumulate__ = pmpi_accumulate
#pragma weak pmpi_accumulate_ = pmpi_accumulate
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_accumulate__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ACCUMULATE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_accumulate_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ACCUMULATE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_accumulate( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ACCUMULATE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_accumulate_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_accumulate( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_accumulate__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_accumulate( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_accumulate__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_accumulate_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_accumulate")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_accumulate_ PMPI_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_accumulate_ pmpi_accumulate__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_accumulate_ pmpi_accumulate
#else
#define mpi_accumulate_ pmpi_accumulate_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Accumulate
#define MPI_Accumulate PMPI_Accumulate
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_accumulate_ MPI_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_accumulate_ mpi_accumulate__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_accumulate_ mpi_accumulate
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_accumulate_ ( void*v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Aint * v5, MPI_Fint *v6, MPI_Fint *v7, MPI_Fint *v8, MPI_Fint *v9, MPI_Fint *ierr ){
    if (v1 == MPIR_F_MPI_BOTTOM) v1 = MPI_BOTTOM;
    *ierr = MPI_Accumulate( v1, (int)*v2, (MPI_Datatype)(*v3), (int)*v4, *v5, (int)*v6, (MPI_Datatype)(*v7), (MPI_Op)*v8, (MPI_Win)*v9 );
}
