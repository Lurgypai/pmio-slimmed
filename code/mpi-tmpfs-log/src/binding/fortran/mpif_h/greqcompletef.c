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
extern FORT_DLL_SPEC void FORT_CALL MPI_GREQUEST_COMPLETE( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete_( MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_GREQUEST_COMPLETE = PMPI_GREQUEST_COMPLETE
#pragma weak mpi_grequest_complete__ = PMPI_GREQUEST_COMPLETE
#pragma weak mpi_grequest_complete_ = PMPI_GREQUEST_COMPLETE
#pragma weak mpi_grequest_complete = PMPI_GREQUEST_COMPLETE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GREQUEST_COMPLETE = pmpi_grequest_complete__
#pragma weak mpi_grequest_complete__ = pmpi_grequest_complete__
#pragma weak mpi_grequest_complete_ = pmpi_grequest_complete__
#pragma weak mpi_grequest_complete = pmpi_grequest_complete__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GREQUEST_COMPLETE = pmpi_grequest_complete_
#pragma weak mpi_grequest_complete__ = pmpi_grequest_complete_
#pragma weak mpi_grequest_complete_ = pmpi_grequest_complete_
#pragma weak mpi_grequest_complete = pmpi_grequest_complete_
#else
#pragma weak MPI_GREQUEST_COMPLETE = pmpi_grequest_complete
#pragma weak mpi_grequest_complete__ = pmpi_grequest_complete
#pragma weak mpi_grequest_complete_ = pmpi_grequest_complete
#pragma weak mpi_grequest_complete = pmpi_grequest_complete
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GREQUEST_COMPLETE( MPI_Fint *, MPI_Fint * );

#pragma weak MPI_GREQUEST_COMPLETE = PMPI_GREQUEST_COMPLETE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete__( MPI_Fint *, MPI_Fint * );

#pragma weak mpi_grequest_complete__ = pmpi_grequest_complete__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete( MPI_Fint *, MPI_Fint * );

#pragma weak mpi_grequest_complete = pmpi_grequest_complete
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete_( MPI_Fint *, MPI_Fint * );

#pragma weak mpi_grequest_complete_ = pmpi_grequest_complete_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_GREQUEST_COMPLETE  MPI_GREQUEST_COMPLETE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_grequest_complete__  mpi_grequest_complete__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_grequest_complete  mpi_grequest_complete
#else
#pragma _HP_SECONDARY_DEF pmpi_grequest_complete_  mpi_grequest_complete_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_GREQUEST_COMPLETE as PMPI_GREQUEST_COMPLETE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_grequest_complete__ as pmpi_grequest_complete__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_grequest_complete as pmpi_grequest_complete
#else
#pragma _CRI duplicate mpi_grequest_complete_ as pmpi_grequest_complete_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GREQUEST_COMPLETE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GREQUEST_COMPLETE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GREQUEST_COMPLETE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GREQUEST_COMPLETE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GREQUEST_COMPLETE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GREQUEST_COMPLETE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GREQUEST_COMPLETE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GREQUEST_COMPLETE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_GREQUEST_COMPLETE( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete_( MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_grequest_complete__ = MPI_GREQUEST_COMPLETE
#pragma weak mpi_grequest_complete_ = MPI_GREQUEST_COMPLETE
#pragma weak mpi_grequest_complete = MPI_GREQUEST_COMPLETE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GREQUEST_COMPLETE = mpi_grequest_complete__
#pragma weak mpi_grequest_complete_ = mpi_grequest_complete__
#pragma weak mpi_grequest_complete = mpi_grequest_complete__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GREQUEST_COMPLETE = mpi_grequest_complete_
#pragma weak mpi_grequest_complete__ = mpi_grequest_complete_
#pragma weak mpi_grequest_complete = mpi_grequest_complete_
#else
#pragma weak MPI_GREQUEST_COMPLETE = mpi_grequest_complete
#pragma weak mpi_grequest_complete__ = mpi_grequest_complete
#pragma weak mpi_grequest_complete_ = mpi_grequest_complete
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GREQUEST_COMPLETE( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GREQUEST_COMPLETE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GREQUEST_COMPLETE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_GREQUEST_COMPLETE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GREQUEST_COMPLETE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_grequest_complete__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_grequest_complete__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_grequest_complete__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GREQUEST_COMPLETE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_grequest_complete_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_grequest_complete_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete_( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_grequest_complete_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GREQUEST_COMPLETE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_grequest_complete")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_grequest_complete")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_grequest_complete")));
extern FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete( MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_GREQUEST_COMPLETE( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_grequest_complete__( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_grequest_complete_( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_grequest_complete( MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_grequest_complete__ = PMPI_GREQUEST_COMPLETE
#pragma weak pmpi_grequest_complete_ = PMPI_GREQUEST_COMPLETE
#pragma weak pmpi_grequest_complete = PMPI_GREQUEST_COMPLETE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_GREQUEST_COMPLETE = pmpi_grequest_complete__
#pragma weak pmpi_grequest_complete_ = pmpi_grequest_complete__
#pragma weak pmpi_grequest_complete = pmpi_grequest_complete__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_GREQUEST_COMPLETE = pmpi_grequest_complete_
#pragma weak pmpi_grequest_complete__ = pmpi_grequest_complete_
#pragma weak pmpi_grequest_complete = pmpi_grequest_complete_
#else
#pragma weak PMPI_GREQUEST_COMPLETE = pmpi_grequest_complete
#pragma weak pmpi_grequest_complete__ = pmpi_grequest_complete
#pragma weak pmpi_grequest_complete_ = pmpi_grequest_complete
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_grequest_complete__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GREQUEST_COMPLETE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_grequest_complete_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GREQUEST_COMPLETE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_grequest_complete( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_GREQUEST_COMPLETE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GREQUEST_COMPLETE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_grequest_complete_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_grequest_complete( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GREQUEST_COMPLETE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_grequest_complete__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_grequest_complete( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_GREQUEST_COMPLETE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_grequest_complete__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_grequest_complete_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_grequest_complete")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_grequest_complete_ PMPI_GREQUEST_COMPLETE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_grequest_complete_ pmpi_grequest_complete__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_grequest_complete_ pmpi_grequest_complete
#else
#define mpi_grequest_complete_ pmpi_grequest_complete_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Grequest_complete
#define MPI_Grequest_complete PMPI_Grequest_complete
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_grequest_complete_ MPI_GREQUEST_COMPLETE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_grequest_complete_ mpi_grequest_complete__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_grequest_complete_ mpi_grequest_complete
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_grequest_complete_ ( MPI_Fint *v1, MPI_Fint *ierr ){
    *ierr = MPI_Grequest_complete( (MPI_Request)*v1 );
}
