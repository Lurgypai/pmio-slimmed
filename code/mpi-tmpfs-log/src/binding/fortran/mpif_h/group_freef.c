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
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_FREE( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free_( MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_GROUP_FREE = PMPI_GROUP_FREE
#pragma weak mpi_group_free__ = PMPI_GROUP_FREE
#pragma weak mpi_group_free_ = PMPI_GROUP_FREE
#pragma weak mpi_group_free = PMPI_GROUP_FREE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GROUP_FREE = pmpi_group_free__
#pragma weak mpi_group_free__ = pmpi_group_free__
#pragma weak mpi_group_free_ = pmpi_group_free__
#pragma weak mpi_group_free = pmpi_group_free__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GROUP_FREE = pmpi_group_free_
#pragma weak mpi_group_free__ = pmpi_group_free_
#pragma weak mpi_group_free_ = pmpi_group_free_
#pragma weak mpi_group_free = pmpi_group_free_
#else
#pragma weak MPI_GROUP_FREE = pmpi_group_free
#pragma weak mpi_group_free__ = pmpi_group_free
#pragma weak mpi_group_free_ = pmpi_group_free
#pragma weak mpi_group_free = pmpi_group_free
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_FREE( MPI_Fint *, MPI_Fint * );

#pragma weak MPI_GROUP_FREE = PMPI_GROUP_FREE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free__( MPI_Fint *, MPI_Fint * );

#pragma weak mpi_group_free__ = pmpi_group_free__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free( MPI_Fint *, MPI_Fint * );

#pragma weak mpi_group_free = pmpi_group_free
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free_( MPI_Fint *, MPI_Fint * );

#pragma weak mpi_group_free_ = pmpi_group_free_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_GROUP_FREE  MPI_GROUP_FREE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_group_free__  mpi_group_free__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_group_free  mpi_group_free
#else
#pragma _HP_SECONDARY_DEF pmpi_group_free_  mpi_group_free_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_GROUP_FREE as PMPI_GROUP_FREE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_group_free__ as pmpi_group_free__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_group_free as pmpi_group_free
#else
#pragma _CRI duplicate mpi_group_free_ as pmpi_group_free_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_FREE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_FREE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_FREE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_FREE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_FREE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_FREE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_FREE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_FREE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_FREE( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free_( MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_group_free__ = MPI_GROUP_FREE
#pragma weak mpi_group_free_ = MPI_GROUP_FREE
#pragma weak mpi_group_free = MPI_GROUP_FREE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GROUP_FREE = mpi_group_free__
#pragma weak mpi_group_free_ = mpi_group_free__
#pragma weak mpi_group_free = mpi_group_free__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GROUP_FREE = mpi_group_free_
#pragma weak mpi_group_free__ = mpi_group_free_
#pragma weak mpi_group_free = mpi_group_free_
#else
#pragma weak MPI_GROUP_FREE = mpi_group_free
#pragma weak mpi_group_free__ = mpi_group_free
#pragma weak mpi_group_free_ = mpi_group_free
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_FREE( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GROUP_FREE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GROUP_FREE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GROUP_FREE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_FREE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_free__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_free__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_free__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_FREE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_free_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_free_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free_( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_free_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_FREE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_free")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_free")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_free")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_free( MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_GROUP_FREE( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_free__( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_free_( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_free( MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_group_free__ = PMPI_GROUP_FREE
#pragma weak pmpi_group_free_ = PMPI_GROUP_FREE
#pragma weak pmpi_group_free = PMPI_GROUP_FREE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_GROUP_FREE = pmpi_group_free__
#pragma weak pmpi_group_free_ = pmpi_group_free__
#pragma weak pmpi_group_free = pmpi_group_free__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_GROUP_FREE = pmpi_group_free_
#pragma weak pmpi_group_free__ = pmpi_group_free_
#pragma weak pmpi_group_free = pmpi_group_free_
#else
#pragma weak PMPI_GROUP_FREE = pmpi_group_free
#pragma weak pmpi_group_free__ = pmpi_group_free
#pragma weak pmpi_group_free_ = pmpi_group_free
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_free__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_FREE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_free_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_FREE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_free( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_FREE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GROUP_FREE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_free_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_free( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GROUP_FREE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_free__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_free( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_GROUP_FREE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_free__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_free_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_free")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_group_free_ PMPI_GROUP_FREE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_group_free_ pmpi_group_free__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_group_free_ pmpi_group_free
#else
#define mpi_group_free_ pmpi_group_free_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Group_free
#define MPI_Group_free PMPI_Group_free
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_group_free_ MPI_GROUP_FREE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_group_free_ mpi_group_free__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_group_free_ mpi_group_free
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_group_free_ ( MPI_Fint *v1, MPI_Fint *ierr ){
    *ierr = MPI_Group_free( v1 );
}
