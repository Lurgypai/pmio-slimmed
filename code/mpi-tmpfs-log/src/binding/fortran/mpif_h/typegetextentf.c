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
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_EXTENT( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent__( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent_( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_TYPE_GET_EXTENT = PMPI_TYPE_GET_EXTENT
#pragma weak mpi_type_get_extent__ = PMPI_TYPE_GET_EXTENT
#pragma weak mpi_type_get_extent_ = PMPI_TYPE_GET_EXTENT
#pragma weak mpi_type_get_extent = PMPI_TYPE_GET_EXTENT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TYPE_GET_EXTENT = pmpi_type_get_extent__
#pragma weak mpi_type_get_extent__ = pmpi_type_get_extent__
#pragma weak mpi_type_get_extent_ = pmpi_type_get_extent__
#pragma weak mpi_type_get_extent = pmpi_type_get_extent__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TYPE_GET_EXTENT = pmpi_type_get_extent_
#pragma weak mpi_type_get_extent__ = pmpi_type_get_extent_
#pragma weak mpi_type_get_extent_ = pmpi_type_get_extent_
#pragma weak mpi_type_get_extent = pmpi_type_get_extent_
#else
#pragma weak MPI_TYPE_GET_EXTENT = pmpi_type_get_extent
#pragma weak mpi_type_get_extent__ = pmpi_type_get_extent
#pragma weak mpi_type_get_extent_ = pmpi_type_get_extent
#pragma weak mpi_type_get_extent = pmpi_type_get_extent
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_EXTENT( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );

#pragma weak MPI_TYPE_GET_EXTENT = PMPI_TYPE_GET_EXTENT
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent__( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );

#pragma weak mpi_type_get_extent__ = pmpi_type_get_extent__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );

#pragma weak mpi_type_get_extent = pmpi_type_get_extent
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent_( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );

#pragma weak mpi_type_get_extent_ = pmpi_type_get_extent_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_TYPE_GET_EXTENT  MPI_TYPE_GET_EXTENT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_type_get_extent__  mpi_type_get_extent__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_type_get_extent  mpi_type_get_extent
#else
#pragma _HP_SECONDARY_DEF pmpi_type_get_extent_  mpi_type_get_extent_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_TYPE_GET_EXTENT as PMPI_TYPE_GET_EXTENT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_type_get_extent__ as pmpi_type_get_extent__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_type_get_extent as pmpi_type_get_extent
#else
#pragma _CRI duplicate mpi_type_get_extent_ as pmpi_type_get_extent_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_EXTENT( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_GET_EXTENT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent__( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_GET_EXTENT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent_( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_GET_EXTENT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_GET_EXTENT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_EXTENT( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent__( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent_( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_EXTENT( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent__( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent_( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_EXTENT( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent__( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent_( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_EXTENT( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent__( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent_( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_type_get_extent__ = MPI_TYPE_GET_EXTENT
#pragma weak mpi_type_get_extent_ = MPI_TYPE_GET_EXTENT
#pragma weak mpi_type_get_extent = MPI_TYPE_GET_EXTENT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TYPE_GET_EXTENT = mpi_type_get_extent__
#pragma weak mpi_type_get_extent_ = mpi_type_get_extent__
#pragma weak mpi_type_get_extent = mpi_type_get_extent__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TYPE_GET_EXTENT = mpi_type_get_extent_
#pragma weak mpi_type_get_extent__ = mpi_type_get_extent_
#pragma weak mpi_type_get_extent = mpi_type_get_extent_
#else
#pragma weak MPI_TYPE_GET_EXTENT = mpi_type_get_extent
#pragma weak mpi_type_get_extent__ = mpi_type_get_extent
#pragma weak mpi_type_get_extent_ = mpi_type_get_extent
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_EXTENT( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent__( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_GET_EXTENT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent_( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_GET_EXTENT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_GET_EXTENT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_EXTENT( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_extent__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent__( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent_( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_extent__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_extent__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_EXTENT( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_extent_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent__( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_extent_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent_( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_extent_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_GET_EXTENT( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_extent")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent__( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_extent")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent_( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_get_extent")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_GET_EXTENT( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_extent__( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_extent_( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_extent( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_type_get_extent__ = PMPI_TYPE_GET_EXTENT
#pragma weak pmpi_type_get_extent_ = PMPI_TYPE_GET_EXTENT
#pragma weak pmpi_type_get_extent = PMPI_TYPE_GET_EXTENT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_TYPE_GET_EXTENT = pmpi_type_get_extent__
#pragma weak pmpi_type_get_extent_ = pmpi_type_get_extent__
#pragma weak pmpi_type_get_extent = pmpi_type_get_extent__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_TYPE_GET_EXTENT = pmpi_type_get_extent_
#pragma weak pmpi_type_get_extent__ = pmpi_type_get_extent_
#pragma weak pmpi_type_get_extent = pmpi_type_get_extent_
#else
#pragma weak PMPI_TYPE_GET_EXTENT = pmpi_type_get_extent
#pragma weak pmpi_type_get_extent__ = pmpi_type_get_extent
#pragma weak pmpi_type_get_extent_ = pmpi_type_get_extent
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_extent__( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_GET_EXTENT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_extent_( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_GET_EXTENT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_extent( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_GET_EXTENT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_GET_EXTENT( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_extent_( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_extent( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_GET_EXTENT( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_extent__( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_extent( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_GET_EXTENT( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_extent__( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_get_extent_( MPI_Fint *, MPI_Aint *, MPI_Aint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_get_extent")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_type_get_extent_ PMPI_TYPE_GET_EXTENT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_type_get_extent_ pmpi_type_get_extent__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_type_get_extent_ pmpi_type_get_extent
#else
#define mpi_type_get_extent_ pmpi_type_get_extent_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Type_get_extent
#define MPI_Type_get_extent PMPI_Type_get_extent
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_type_get_extent_ MPI_TYPE_GET_EXTENT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_type_get_extent_ mpi_type_get_extent__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_type_get_extent_ mpi_type_get_extent
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_type_get_extent_ ( MPI_Fint *v1, MPI_Aint * v2, MPI_Aint * v3, MPI_Fint *ierr ){
    *ierr = MPI_Type_get_extent( (MPI_Datatype)(*v1), v2, v3 );
}
