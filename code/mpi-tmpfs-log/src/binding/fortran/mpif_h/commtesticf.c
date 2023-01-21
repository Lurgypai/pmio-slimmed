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
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_TEST_INTER( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_COMM_TEST_INTER = PMPI_COMM_TEST_INTER
#pragma weak mpi_comm_test_inter__ = PMPI_COMM_TEST_INTER
#pragma weak mpi_comm_test_inter_ = PMPI_COMM_TEST_INTER
#pragma weak mpi_comm_test_inter = PMPI_COMM_TEST_INTER
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_COMM_TEST_INTER = pmpi_comm_test_inter__
#pragma weak mpi_comm_test_inter__ = pmpi_comm_test_inter__
#pragma weak mpi_comm_test_inter_ = pmpi_comm_test_inter__
#pragma weak mpi_comm_test_inter = pmpi_comm_test_inter__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_COMM_TEST_INTER = pmpi_comm_test_inter_
#pragma weak mpi_comm_test_inter__ = pmpi_comm_test_inter_
#pragma weak mpi_comm_test_inter_ = pmpi_comm_test_inter_
#pragma weak mpi_comm_test_inter = pmpi_comm_test_inter_
#else
#pragma weak MPI_COMM_TEST_INTER = pmpi_comm_test_inter
#pragma weak mpi_comm_test_inter__ = pmpi_comm_test_inter
#pragma weak mpi_comm_test_inter_ = pmpi_comm_test_inter
#pragma weak mpi_comm_test_inter = pmpi_comm_test_inter
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_TEST_INTER( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_COMM_TEST_INTER = PMPI_COMM_TEST_INTER
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter__( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_comm_test_inter__ = pmpi_comm_test_inter__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_comm_test_inter = pmpi_comm_test_inter
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_comm_test_inter_ = pmpi_comm_test_inter_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_COMM_TEST_INTER  MPI_COMM_TEST_INTER
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_comm_test_inter__  mpi_comm_test_inter__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_comm_test_inter  mpi_comm_test_inter
#else
#pragma _HP_SECONDARY_DEF pmpi_comm_test_inter_  mpi_comm_test_inter_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_COMM_TEST_INTER as PMPI_COMM_TEST_INTER
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_comm_test_inter__ as pmpi_comm_test_inter__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_comm_test_inter as pmpi_comm_test_inter
#else
#pragma _CRI duplicate mpi_comm_test_inter_ as pmpi_comm_test_inter_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_TEST_INTER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_TEST_INTER")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_TEST_INTER")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_TEST_INTER")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_TEST_INTER")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_TEST_INTER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_TEST_INTER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_TEST_INTER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_TEST_INTER( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_comm_test_inter__ = MPI_COMM_TEST_INTER
#pragma weak mpi_comm_test_inter_ = MPI_COMM_TEST_INTER
#pragma weak mpi_comm_test_inter = MPI_COMM_TEST_INTER
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_COMM_TEST_INTER = mpi_comm_test_inter__
#pragma weak mpi_comm_test_inter_ = mpi_comm_test_inter__
#pragma weak mpi_comm_test_inter = mpi_comm_test_inter__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_COMM_TEST_INTER = mpi_comm_test_inter_
#pragma weak mpi_comm_test_inter__ = mpi_comm_test_inter_
#pragma weak mpi_comm_test_inter = mpi_comm_test_inter_
#else
#pragma weak MPI_COMM_TEST_INTER = mpi_comm_test_inter
#pragma weak mpi_comm_test_inter__ = mpi_comm_test_inter
#pragma weak mpi_comm_test_inter_ = mpi_comm_test_inter
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_TEST_INTER( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_COMM_TEST_INTER")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_COMM_TEST_INTER")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_COMM_TEST_INTER")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_TEST_INTER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_test_inter__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_test_inter__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_test_inter__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_TEST_INTER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_test_inter_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_test_inter_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_test_inter_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_COMM_TEST_INTER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_test_inter")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_test_inter")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_comm_test_inter")));
extern FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_TEST_INTER( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_test_inter__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_test_inter_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_test_inter( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_comm_test_inter__ = PMPI_COMM_TEST_INTER
#pragma weak pmpi_comm_test_inter_ = PMPI_COMM_TEST_INTER
#pragma weak pmpi_comm_test_inter = PMPI_COMM_TEST_INTER
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_COMM_TEST_INTER = pmpi_comm_test_inter__
#pragma weak pmpi_comm_test_inter_ = pmpi_comm_test_inter__
#pragma weak pmpi_comm_test_inter = pmpi_comm_test_inter__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_COMM_TEST_INTER = pmpi_comm_test_inter_
#pragma weak pmpi_comm_test_inter__ = pmpi_comm_test_inter_
#pragma weak pmpi_comm_test_inter = pmpi_comm_test_inter_
#else
#pragma weak PMPI_COMM_TEST_INTER = pmpi_comm_test_inter
#pragma weak pmpi_comm_test_inter__ = pmpi_comm_test_inter
#pragma weak pmpi_comm_test_inter_ = pmpi_comm_test_inter
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_test_inter__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_TEST_INTER")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_test_inter_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_TEST_INTER")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_test_inter( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_COMM_TEST_INTER")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_TEST_INTER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_test_inter_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_test_inter( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_TEST_INTER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_test_inter__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_test_inter( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_COMM_TEST_INTER( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_test_inter__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_comm_test_inter_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_comm_test_inter")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_comm_test_inter_ PMPI_COMM_TEST_INTER
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_comm_test_inter_ pmpi_comm_test_inter__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_comm_test_inter_ pmpi_comm_test_inter
#else
#define mpi_comm_test_inter_ pmpi_comm_test_inter_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Comm_test_inter
#define MPI_Comm_test_inter PMPI_Comm_test_inter
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_comm_test_inter_ MPI_COMM_TEST_INTER
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_comm_test_inter_ mpi_comm_test_inter__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_comm_test_inter_ mpi_comm_test_inter
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_comm_test_inter_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *ierr ){
    int l2;
    *ierr = MPI_Comm_test_inter( (MPI_Comm)(*v1), &l2 );
    if (*ierr == MPI_SUCCESS) *v2 = MPII_TO_FLOG(l2);
}
