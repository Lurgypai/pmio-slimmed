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
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_COUNT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_GET_COUNT = PMPI_GET_COUNT
#pragma weak mpi_get_count__ = PMPI_GET_COUNT
#pragma weak mpi_get_count_ = PMPI_GET_COUNT
#pragma weak mpi_get_count = PMPI_GET_COUNT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GET_COUNT = pmpi_get_count__
#pragma weak mpi_get_count__ = pmpi_get_count__
#pragma weak mpi_get_count_ = pmpi_get_count__
#pragma weak mpi_get_count = pmpi_get_count__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GET_COUNT = pmpi_get_count_
#pragma weak mpi_get_count__ = pmpi_get_count_
#pragma weak mpi_get_count_ = pmpi_get_count_
#pragma weak mpi_get_count = pmpi_get_count_
#else
#pragma weak MPI_GET_COUNT = pmpi_get_count
#pragma weak mpi_get_count__ = pmpi_get_count
#pragma weak mpi_get_count_ = pmpi_get_count
#pragma weak mpi_get_count = pmpi_get_count
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_COUNT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_GET_COUNT = PMPI_GET_COUNT
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_get_count__ = pmpi_get_count__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_get_count = pmpi_get_count
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_get_count_ = pmpi_get_count_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_GET_COUNT  MPI_GET_COUNT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_get_count__  mpi_get_count__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_get_count  mpi_get_count
#else
#pragma _HP_SECONDARY_DEF pmpi_get_count_  mpi_get_count_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_GET_COUNT as PMPI_GET_COUNT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_get_count__ as pmpi_get_count__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_get_count as pmpi_get_count
#else
#pragma _CRI duplicate mpi_get_count_ as pmpi_get_count_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_COUNT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_COUNT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_COUNT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_COUNT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_COUNT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_COUNT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_COUNT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_COUNT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_COUNT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_get_count__ = MPI_GET_COUNT
#pragma weak mpi_get_count_ = MPI_GET_COUNT
#pragma weak mpi_get_count = MPI_GET_COUNT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GET_COUNT = mpi_get_count__
#pragma weak mpi_get_count_ = mpi_get_count__
#pragma weak mpi_get_count = mpi_get_count__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GET_COUNT = mpi_get_count_
#pragma weak mpi_get_count__ = mpi_get_count_
#pragma weak mpi_get_count = mpi_get_count_
#else
#pragma weak MPI_GET_COUNT = mpi_get_count
#pragma weak mpi_get_count__ = mpi_get_count
#pragma weak mpi_get_count_ = mpi_get_count
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_COUNT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GET_COUNT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GET_COUNT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GET_COUNT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_COUNT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_count__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_count__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_count__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_COUNT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_count_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_count_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_count_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_COUNT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_count")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_count")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_get_count")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_count( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_COUNT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_count__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_count_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_count( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_get_count__ = PMPI_GET_COUNT
#pragma weak pmpi_get_count_ = PMPI_GET_COUNT
#pragma weak pmpi_get_count = PMPI_GET_COUNT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_GET_COUNT = pmpi_get_count__
#pragma weak pmpi_get_count_ = pmpi_get_count__
#pragma weak pmpi_get_count = pmpi_get_count__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_GET_COUNT = pmpi_get_count_
#pragma weak pmpi_get_count__ = pmpi_get_count_
#pragma weak pmpi_get_count = pmpi_get_count_
#else
#pragma weak PMPI_GET_COUNT = pmpi_get_count
#pragma weak pmpi_get_count__ = pmpi_get_count
#pragma weak pmpi_get_count_ = pmpi_get_count
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_count__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_COUNT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_count_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_COUNT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_count( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GET_COUNT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_COUNT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_count_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_count( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_COUNT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_count__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_count( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_COUNT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_count__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_count_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_get_count")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_get_count_ PMPI_GET_COUNT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_get_count_ pmpi_get_count__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_get_count_ pmpi_get_count
#else
#define mpi_get_count_ pmpi_get_count_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Get_count
#define MPI_Get_count PMPI_Get_count
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_get_count_ MPI_GET_COUNT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_get_count_ mpi_get_count__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_get_count_ mpi_get_count
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_get_count_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *ierr ){
    *ierr = MPI_Get_count( (MPI_Status *)(v1), (MPI_Datatype)(*v2), v3 );
}
