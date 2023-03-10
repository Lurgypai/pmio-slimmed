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
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_DUP( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_COMM_DUP = PMPI_COMM_DUP
#pragma weak mpi_comm_dup__ = PMPI_COMM_DUP
#pragma weak mpi_comm_dup_ = PMPI_COMM_DUP
#pragma weak mpi_comm_dup = PMPI_COMM_DUP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_COMM_DUP = pmpi_comm_dup__
#pragma weak mpi_comm_dup__ = pmpi_comm_dup__
#pragma weak mpi_comm_dup_ = pmpi_comm_dup__
#pragma weak mpi_comm_dup = pmpi_comm_dup__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_COMM_DUP = pmpi_comm_dup_
#pragma weak mpi_comm_dup__ = pmpi_comm_dup_
#pragma weak mpi_comm_dup_ = pmpi_comm_dup_
#pragma weak mpi_comm_dup = pmpi_comm_dup_
#else
#pragma weak MPI_COMM_DUP = pmpi_comm_dup
#pragma weak mpi_comm_dup__ = pmpi_comm_dup
#pragma weak mpi_comm_dup_ = pmpi_comm_dup
#pragma weak mpi_comm_dup = pmpi_comm_dup
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_DUP( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_COMM_DUP = PMPI_COMM_DUP
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup__( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_comm_dup__ = pmpi_comm_dup__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_comm_dup = pmpi_comm_dup
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_comm_dup_ = pmpi_comm_dup_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_COMM_DUP  MPI_COMM_DUP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_comm_dup__  mpi_comm_dup__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_comm_dup  mpi_comm_dup
#else
#pragma _HP_SECONDARY_DEF pmpi_comm_dup_  mpi_comm_dup_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_COMM_DUP as PMPI_COMM_DUP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_comm_dup__ as pmpi_comm_dup__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_comm_dup as pmpi_comm_dup
#else
#pragma _CRI duplicate mpi_comm_dup_ as pmpi_comm_dup_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_DUP( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_DUP")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_DUP")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_DUP")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_DUP")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_DUP( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_DUP( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_DUP( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_DUP( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_comm_dup__ = MPI_COMM_DUP
#pragma weak mpi_comm_dup_ = MPI_COMM_DUP
#pragma weak mpi_comm_dup = MPI_COMM_DUP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_COMM_DUP = mpi_comm_dup__
#pragma weak mpi_comm_dup_ = mpi_comm_dup__
#pragma weak mpi_comm_dup = mpi_comm_dup__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_COMM_DUP = mpi_comm_dup_
#pragma weak mpi_comm_dup__ = mpi_comm_dup_
#pragma weak mpi_comm_dup = mpi_comm_dup_
#else
#pragma weak MPI_COMM_DUP = mpi_comm_dup
#pragma weak mpi_comm_dup__ = mpi_comm_dup
#pragma weak mpi_comm_dup_ = mpi_comm_dup
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_DUP( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_COMM_DUP")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_COMM_DUP")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_COMM_DUP")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_DUP( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_dup__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_dup__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_dup__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_DUP( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_dup_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_dup_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_dup_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_DUP( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_dup")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_dup")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_dup")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_dup( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_DUP( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_dup__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_dup_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_dup( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_comm_dup__ = PMPI_COMM_DUP
#pragma weak pmpi_comm_dup_ = PMPI_COMM_DUP
#pragma weak pmpi_comm_dup = PMPI_COMM_DUP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_COMM_DUP = pmpi_comm_dup__
#pragma weak pmpi_comm_dup_ = pmpi_comm_dup__
#pragma weak pmpi_comm_dup = pmpi_comm_dup__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_COMM_DUP = pmpi_comm_dup_
#pragma weak pmpi_comm_dup__ = pmpi_comm_dup_
#pragma weak pmpi_comm_dup = pmpi_comm_dup_
#else
#pragma weak PMPI_COMM_DUP = pmpi_comm_dup
#pragma weak pmpi_comm_dup__ = pmpi_comm_dup
#pragma weak pmpi_comm_dup_ = pmpi_comm_dup
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_dup__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_DUP")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_dup_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_DUP")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_dup( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_DUP")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_DUP( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_dup_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_dup( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_DUP( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_dup__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_dup( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_DUP( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_dup__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_dup_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_dup")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_comm_dup_ PMPI_COMM_DUP
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_comm_dup_ pmpi_comm_dup__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_comm_dup_ pmpi_comm_dup
#else
#define mpi_comm_dup_ pmpi_comm_dup_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Comm_dup
#define MPI_Comm_dup PMPI_Comm_dup
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_comm_dup_ MPI_COMM_DUP
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_comm_dup_ mpi_comm_dup__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_comm_dup_ mpi_comm_dup
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_comm_dup_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *ierr ){
    *ierr = MPI_Comm_dup( (MPI_Comm)(*v1), (MPI_Comm *)(v2) );
}
