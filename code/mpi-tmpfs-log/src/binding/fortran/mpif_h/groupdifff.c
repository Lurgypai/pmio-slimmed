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
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_DIFFERENCE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_GROUP_DIFFERENCE = PMPI_GROUP_DIFFERENCE
#pragma weak mpi_group_difference__ = PMPI_GROUP_DIFFERENCE
#pragma weak mpi_group_difference_ = PMPI_GROUP_DIFFERENCE
#pragma weak mpi_group_difference = PMPI_GROUP_DIFFERENCE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GROUP_DIFFERENCE = pmpi_group_difference__
#pragma weak mpi_group_difference__ = pmpi_group_difference__
#pragma weak mpi_group_difference_ = pmpi_group_difference__
#pragma weak mpi_group_difference = pmpi_group_difference__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GROUP_DIFFERENCE = pmpi_group_difference_
#pragma weak mpi_group_difference__ = pmpi_group_difference_
#pragma weak mpi_group_difference_ = pmpi_group_difference_
#pragma weak mpi_group_difference = pmpi_group_difference_
#else
#pragma weak MPI_GROUP_DIFFERENCE = pmpi_group_difference
#pragma weak mpi_group_difference__ = pmpi_group_difference
#pragma weak mpi_group_difference_ = pmpi_group_difference
#pragma weak mpi_group_difference = pmpi_group_difference
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_DIFFERENCE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_GROUP_DIFFERENCE = PMPI_GROUP_DIFFERENCE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_group_difference__ = pmpi_group_difference__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_group_difference = pmpi_group_difference
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_group_difference_ = pmpi_group_difference_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_GROUP_DIFFERENCE  MPI_GROUP_DIFFERENCE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_group_difference__  mpi_group_difference__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_group_difference  mpi_group_difference
#else
#pragma _HP_SECONDARY_DEF pmpi_group_difference_  mpi_group_difference_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_GROUP_DIFFERENCE as PMPI_GROUP_DIFFERENCE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_group_difference__ as pmpi_group_difference__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_group_difference as pmpi_group_difference
#else
#pragma _CRI duplicate mpi_group_difference_ as pmpi_group_difference_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_DIFFERENCE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_DIFFERENCE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_DIFFERENCE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_DIFFERENCE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_DIFFERENCE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_DIFFERENCE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_DIFFERENCE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_DIFFERENCE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_DIFFERENCE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_group_difference__ = MPI_GROUP_DIFFERENCE
#pragma weak mpi_group_difference_ = MPI_GROUP_DIFFERENCE
#pragma weak mpi_group_difference = MPI_GROUP_DIFFERENCE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GROUP_DIFFERENCE = mpi_group_difference__
#pragma weak mpi_group_difference_ = mpi_group_difference__
#pragma weak mpi_group_difference = mpi_group_difference__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GROUP_DIFFERENCE = mpi_group_difference_
#pragma weak mpi_group_difference__ = mpi_group_difference_
#pragma weak mpi_group_difference = mpi_group_difference_
#else
#pragma weak MPI_GROUP_DIFFERENCE = mpi_group_difference
#pragma weak mpi_group_difference__ = mpi_group_difference
#pragma weak mpi_group_difference_ = mpi_group_difference
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_DIFFERENCE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GROUP_DIFFERENCE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GROUP_DIFFERENCE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GROUP_DIFFERENCE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_DIFFERENCE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_difference__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_difference__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_difference__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_DIFFERENCE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_difference_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_difference_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_difference_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GROUP_DIFFERENCE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_difference")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_difference")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_group_difference")));
extern FORT_DLL_SPEC void FORT_CALL mpi_group_difference( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_GROUP_DIFFERENCE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_difference__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_difference_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_difference( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_group_difference__ = PMPI_GROUP_DIFFERENCE
#pragma weak pmpi_group_difference_ = PMPI_GROUP_DIFFERENCE
#pragma weak pmpi_group_difference = PMPI_GROUP_DIFFERENCE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_GROUP_DIFFERENCE = pmpi_group_difference__
#pragma weak pmpi_group_difference_ = pmpi_group_difference__
#pragma weak pmpi_group_difference = pmpi_group_difference__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_GROUP_DIFFERENCE = pmpi_group_difference_
#pragma weak pmpi_group_difference__ = pmpi_group_difference_
#pragma weak pmpi_group_difference = pmpi_group_difference_
#else
#pragma weak PMPI_GROUP_DIFFERENCE = pmpi_group_difference
#pragma weak pmpi_group_difference__ = pmpi_group_difference
#pragma weak pmpi_group_difference_ = pmpi_group_difference
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_difference__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_DIFFERENCE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_difference_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_DIFFERENCE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_difference( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GROUP_DIFFERENCE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GROUP_DIFFERENCE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_difference_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_difference( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GROUP_DIFFERENCE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_difference__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_difference( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_GROUP_DIFFERENCE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_difference__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_group_difference_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_group_difference")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_group_difference_ PMPI_GROUP_DIFFERENCE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_group_difference_ pmpi_group_difference__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_group_difference_ pmpi_group_difference
#else
#define mpi_group_difference_ pmpi_group_difference_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Group_difference
#define MPI_Group_difference PMPI_Group_difference
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_group_difference_ MPI_GROUP_DIFFERENCE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_group_difference_ mpi_group_difference__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_group_difference_ mpi_group_difference
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_group_difference_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *ierr ){
    *ierr = MPI_Group_difference( (MPI_Group)*v1, (MPI_Group)*v2, v3 );
}
