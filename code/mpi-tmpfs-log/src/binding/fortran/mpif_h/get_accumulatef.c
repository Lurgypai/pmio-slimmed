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
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_GET_ACCUMULATE = PMPI_GET_ACCUMULATE
#pragma weak mpi_get_accumulate__ = PMPI_GET_ACCUMULATE
#pragma weak mpi_get_accumulate_ = PMPI_GET_ACCUMULATE
#pragma weak mpi_get_accumulate = PMPI_GET_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GET_ACCUMULATE = pmpi_get_accumulate__
#pragma weak mpi_get_accumulate__ = pmpi_get_accumulate__
#pragma weak mpi_get_accumulate_ = pmpi_get_accumulate__
#pragma weak mpi_get_accumulate = pmpi_get_accumulate__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GET_ACCUMULATE = pmpi_get_accumulate_
#pragma weak mpi_get_accumulate__ = pmpi_get_accumulate_
#pragma weak mpi_get_accumulate_ = pmpi_get_accumulate_
#pragma weak mpi_get_accumulate = pmpi_get_accumulate_
#else
#pragma weak MPI_GET_ACCUMULATE = pmpi_get_accumulate
#pragma weak mpi_get_accumulate__ = pmpi_get_accumulate
#pragma weak mpi_get_accumulate_ = pmpi_get_accumulate
#pragma weak mpi_get_accumulate = pmpi_get_accumulate
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_GET_ACCUMULATE = PMPI_GET_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_get_accumulate__ = pmpi_get_accumulate__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_get_accumulate = pmpi_get_accumulate
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_get_accumulate_ = pmpi_get_accumulate_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_GET_ACCUMULATE  MPI_GET_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_get_accumulate__  mpi_get_accumulate__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_get_accumulate  mpi_get_accumulate
#else
#pragma _HP_SECONDARY_DEF pmpi_get_accumulate_  mpi_get_accumulate_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_GET_ACCUMULATE as PMPI_GET_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_get_accumulate__ as pmpi_get_accumulate__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_get_accumulate as pmpi_get_accumulate
#else
#pragma _CRI duplicate mpi_get_accumulate_ as pmpi_get_accumulate_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_ACCUMULATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_ACCUMULATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_ACCUMULATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_ACCUMULATE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_get_accumulate__ = MPI_GET_ACCUMULATE
#pragma weak mpi_get_accumulate_ = MPI_GET_ACCUMULATE
#pragma weak mpi_get_accumulate = MPI_GET_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GET_ACCUMULATE = mpi_get_accumulate__
#pragma weak mpi_get_accumulate_ = mpi_get_accumulate__
#pragma weak mpi_get_accumulate = mpi_get_accumulate__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GET_ACCUMULATE = mpi_get_accumulate_
#pragma weak mpi_get_accumulate__ = mpi_get_accumulate_
#pragma weak mpi_get_accumulate = mpi_get_accumulate_
#else
#pragma weak MPI_GET_ACCUMULATE = mpi_get_accumulate
#pragma weak mpi_get_accumulate__ = mpi_get_accumulate
#pragma weak mpi_get_accumulate_ = mpi_get_accumulate
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GET_ACCUMULATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GET_ACCUMULATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GET_ACCUMULATE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_accumulate__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_accumulate__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_accumulate__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_accumulate_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_accumulate_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_accumulate_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_accumulate__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_accumulate_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_accumulate( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_get_accumulate__ = PMPI_GET_ACCUMULATE
#pragma weak pmpi_get_accumulate_ = PMPI_GET_ACCUMULATE
#pragma weak pmpi_get_accumulate = PMPI_GET_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_GET_ACCUMULATE = pmpi_get_accumulate__
#pragma weak pmpi_get_accumulate_ = pmpi_get_accumulate__
#pragma weak pmpi_get_accumulate = pmpi_get_accumulate__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_GET_ACCUMULATE = pmpi_get_accumulate_
#pragma weak pmpi_get_accumulate__ = pmpi_get_accumulate_
#pragma weak pmpi_get_accumulate = pmpi_get_accumulate_
#else
#pragma weak PMPI_GET_ACCUMULATE = pmpi_get_accumulate
#pragma weak pmpi_get_accumulate__ = pmpi_get_accumulate
#pragma weak pmpi_get_accumulate_ = pmpi_get_accumulate
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_accumulate__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_ACCUMULATE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_accumulate_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_ACCUMULATE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_accumulate( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_ACCUMULATE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_accumulate_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_accumulate( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_accumulate__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_accumulate( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_ACCUMULATE( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_accumulate__( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_accumulate_( void*, MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Aint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_accumulate")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_get_accumulate_ PMPI_GET_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_get_accumulate_ pmpi_get_accumulate__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_get_accumulate_ pmpi_get_accumulate
#else
#define mpi_get_accumulate_ pmpi_get_accumulate_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Get_accumulate
#define MPI_Get_accumulate PMPI_Get_accumulate
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_get_accumulate_ MPI_GET_ACCUMULATE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_get_accumulate_ mpi_get_accumulate__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_get_accumulate_ mpi_get_accumulate
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_get_accumulate_ ( void*v1, MPI_Fint *v2, MPI_Fint *v3, void*v4, MPI_Fint *v5, MPI_Fint *v6, MPI_Fint *v7, MPI_Aint * v8, MPI_Fint *v9, MPI_Fint *v10, MPI_Fint *v11, MPI_Fint *v12, MPI_Fint *ierr ){
    if (v1 == MPIR_F_MPI_BOTTOM) v1 = MPI_BOTTOM;
    if (v4 == MPIR_F_MPI_BOTTOM) v4 = MPI_BOTTOM;
    *ierr = MPI_Get_accumulate( v1, (int)*v2, (MPI_Datatype)(*v3), v4, (int)*v5, (MPI_Datatype)(*v6), (int)*v7, *v8, (int)*v9, (MPI_Datatype)(*v10), (MPI_Op)*v11, (MPI_Win)*v12 );
}
