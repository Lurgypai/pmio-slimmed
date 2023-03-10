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
extern FORT_DLL_SPEC void FORT_CALL MPI_REDUCE( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_REDUCE = PMPI_REDUCE
#pragma weak mpi_reduce__ = PMPI_REDUCE
#pragma weak mpi_reduce_ = PMPI_REDUCE
#pragma weak mpi_reduce = PMPI_REDUCE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_REDUCE = pmpi_reduce__
#pragma weak mpi_reduce__ = pmpi_reduce__
#pragma weak mpi_reduce_ = pmpi_reduce__
#pragma weak mpi_reduce = pmpi_reduce__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_REDUCE = pmpi_reduce_
#pragma weak mpi_reduce__ = pmpi_reduce_
#pragma weak mpi_reduce_ = pmpi_reduce_
#pragma weak mpi_reduce = pmpi_reduce_
#else
#pragma weak MPI_REDUCE = pmpi_reduce
#pragma weak mpi_reduce__ = pmpi_reduce
#pragma weak mpi_reduce_ = pmpi_reduce
#pragma weak mpi_reduce = pmpi_reduce
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_REDUCE( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_REDUCE = PMPI_REDUCE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_reduce__ = pmpi_reduce__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_reduce = pmpi_reduce
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_reduce_ = pmpi_reduce_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_REDUCE  MPI_REDUCE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_reduce__  mpi_reduce__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_reduce  mpi_reduce
#else
#pragma _HP_SECONDARY_DEF pmpi_reduce_  mpi_reduce_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_REDUCE as PMPI_REDUCE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_reduce__ as pmpi_reduce__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_reduce as pmpi_reduce
#else
#pragma _CRI duplicate mpi_reduce_ as pmpi_reduce_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_REDUCE( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_REDUCE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_REDUCE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_REDUCE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_REDUCE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_REDUCE( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_REDUCE( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_REDUCE( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_REDUCE( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_reduce__ = MPI_REDUCE
#pragma weak mpi_reduce_ = MPI_REDUCE
#pragma weak mpi_reduce = MPI_REDUCE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_REDUCE = mpi_reduce__
#pragma weak mpi_reduce_ = mpi_reduce__
#pragma weak mpi_reduce = mpi_reduce__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_REDUCE = mpi_reduce_
#pragma weak mpi_reduce__ = mpi_reduce_
#pragma weak mpi_reduce = mpi_reduce_
#else
#pragma weak MPI_REDUCE = mpi_reduce
#pragma weak mpi_reduce__ = mpi_reduce
#pragma weak mpi_reduce_ = mpi_reduce
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_REDUCE( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_REDUCE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_REDUCE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_REDUCE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_REDUCE( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_reduce__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_reduce__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_reduce__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_REDUCE( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_reduce_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_reduce_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_reduce_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_REDUCE( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_reduce")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_reduce")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_reduce")));
extern FORT_DLL_SPEC void FORT_CALL mpi_reduce( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_REDUCE( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_reduce__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_reduce_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_reduce( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_reduce__ = PMPI_REDUCE
#pragma weak pmpi_reduce_ = PMPI_REDUCE
#pragma weak pmpi_reduce = PMPI_REDUCE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_REDUCE = pmpi_reduce__
#pragma weak pmpi_reduce_ = pmpi_reduce__
#pragma weak pmpi_reduce = pmpi_reduce__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_REDUCE = pmpi_reduce_
#pragma weak pmpi_reduce__ = pmpi_reduce_
#pragma weak pmpi_reduce = pmpi_reduce_
#else
#pragma weak PMPI_REDUCE = pmpi_reduce
#pragma weak pmpi_reduce__ = pmpi_reduce
#pragma weak pmpi_reduce_ = pmpi_reduce
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_reduce__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_REDUCE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_reduce_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_REDUCE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_reduce( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_REDUCE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_REDUCE( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_reduce_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_reduce( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_REDUCE( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_reduce__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_reduce( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_REDUCE( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_reduce__( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_reduce_( void*, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_reduce")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_reduce_ PMPI_REDUCE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_reduce_ pmpi_reduce__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_reduce_ pmpi_reduce
#else
#define mpi_reduce_ pmpi_reduce_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Reduce
#define MPI_Reduce PMPI_Reduce
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_reduce_ MPI_REDUCE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_reduce_ mpi_reduce__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_reduce_ mpi_reduce
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_reduce_ ( void*v1, void*v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Fint *v5, MPI_Fint *v6, MPI_Fint *v7, MPI_Fint *ierr ){

#ifndef HAVE_MPI_F_INIT_WORKS_WITH_C
    if (MPIR_F_NeedInit){ mpirinitf_(); MPIR_F_NeedInit = 0; }
#endif
    if (v1 == MPIR_F_MPI_IN_PLACE) v1 = MPI_IN_PLACE;
    if (v1 == MPIR_F_MPI_BOTTOM) v1 = MPI_BOTTOM;
    if (v2 == MPIR_F_MPI_BOTTOM) v2 = MPI_BOTTOM;
    *ierr = MPI_Reduce( v1, v2, (int)*v3, (MPI_Datatype)(*v4), (MPI_Op)*v5, (int)*v6, (MPI_Comm)(*v7) );
}
