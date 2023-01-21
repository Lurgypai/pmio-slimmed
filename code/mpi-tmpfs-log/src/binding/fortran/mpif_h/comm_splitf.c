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
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_SPLIT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_COMM_SPLIT = PMPI_COMM_SPLIT
#pragma weak mpi_comm_split__ = PMPI_COMM_SPLIT
#pragma weak mpi_comm_split_ = PMPI_COMM_SPLIT
#pragma weak mpi_comm_split = PMPI_COMM_SPLIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_COMM_SPLIT = pmpi_comm_split__
#pragma weak mpi_comm_split__ = pmpi_comm_split__
#pragma weak mpi_comm_split_ = pmpi_comm_split__
#pragma weak mpi_comm_split = pmpi_comm_split__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_COMM_SPLIT = pmpi_comm_split_
#pragma weak mpi_comm_split__ = pmpi_comm_split_
#pragma weak mpi_comm_split_ = pmpi_comm_split_
#pragma weak mpi_comm_split = pmpi_comm_split_
#else
#pragma weak MPI_COMM_SPLIT = pmpi_comm_split
#pragma weak mpi_comm_split__ = pmpi_comm_split
#pragma weak mpi_comm_split_ = pmpi_comm_split
#pragma weak mpi_comm_split = pmpi_comm_split
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_SPLIT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_COMM_SPLIT = PMPI_COMM_SPLIT
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_comm_split__ = pmpi_comm_split__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_comm_split = pmpi_comm_split
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_comm_split_ = pmpi_comm_split_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_COMM_SPLIT  MPI_COMM_SPLIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_comm_split__  mpi_comm_split__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_comm_split  mpi_comm_split
#else
#pragma _HP_SECONDARY_DEF pmpi_comm_split_  mpi_comm_split_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_COMM_SPLIT as PMPI_COMM_SPLIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_comm_split__ as pmpi_comm_split__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_comm_split as pmpi_comm_split
#else
#pragma _CRI duplicate mpi_comm_split_ as pmpi_comm_split_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_SPLIT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_SPLIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_SPLIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_SPLIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_SPLIT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_SPLIT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_SPLIT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_SPLIT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_SPLIT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_comm_split__ = MPI_COMM_SPLIT
#pragma weak mpi_comm_split_ = MPI_COMM_SPLIT
#pragma weak mpi_comm_split = MPI_COMM_SPLIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_COMM_SPLIT = mpi_comm_split__
#pragma weak mpi_comm_split_ = mpi_comm_split__
#pragma weak mpi_comm_split = mpi_comm_split__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_COMM_SPLIT = mpi_comm_split_
#pragma weak mpi_comm_split__ = mpi_comm_split_
#pragma weak mpi_comm_split = mpi_comm_split_
#else
#pragma weak MPI_COMM_SPLIT = mpi_comm_split
#pragma weak mpi_comm_split__ = mpi_comm_split
#pragma weak mpi_comm_split_ = mpi_comm_split
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_SPLIT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_COMM_SPLIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_COMM_SPLIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_COMM_SPLIT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_SPLIT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_split__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_split__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_split__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_SPLIT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_split_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_split_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_split_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_SPLIT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_split")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_split")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_split")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_split( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_SPLIT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_split__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_split_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_split( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_comm_split__ = PMPI_COMM_SPLIT
#pragma weak pmpi_comm_split_ = PMPI_COMM_SPLIT
#pragma weak pmpi_comm_split = PMPI_COMM_SPLIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_COMM_SPLIT = pmpi_comm_split__
#pragma weak pmpi_comm_split_ = pmpi_comm_split__
#pragma weak pmpi_comm_split = pmpi_comm_split__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_COMM_SPLIT = pmpi_comm_split_
#pragma weak pmpi_comm_split__ = pmpi_comm_split_
#pragma weak pmpi_comm_split = pmpi_comm_split_
#else
#pragma weak PMPI_COMM_SPLIT = pmpi_comm_split
#pragma weak pmpi_comm_split__ = pmpi_comm_split
#pragma weak pmpi_comm_split_ = pmpi_comm_split
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_split__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_SPLIT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_split_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_SPLIT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_split( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_SPLIT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_SPLIT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_split_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_split( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_SPLIT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_split__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_split( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_SPLIT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_split__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_split_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_split")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_comm_split_ PMPI_COMM_SPLIT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_comm_split_ pmpi_comm_split__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_comm_split_ pmpi_comm_split
#else
#define mpi_comm_split_ pmpi_comm_split_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Comm_split
#define MPI_Comm_split PMPI_Comm_split
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_comm_split_ MPI_COMM_SPLIT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_comm_split_ mpi_comm_split__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_comm_split_ mpi_comm_split
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_comm_split_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Fint *ierr ){
    *ierr = MPI_Comm_split( (MPI_Comm)(*v1), (int)*v2, (int)*v3, (MPI_Comm *)(v4) );
}
