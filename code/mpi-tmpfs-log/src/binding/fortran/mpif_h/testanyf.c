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
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTANY( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testany__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testany( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testany_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_TESTANY = PMPI_TESTANY
#pragma weak mpi_testany__ = PMPI_TESTANY
#pragma weak mpi_testany_ = PMPI_TESTANY
#pragma weak mpi_testany = PMPI_TESTANY
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TESTANY = pmpi_testany__
#pragma weak mpi_testany__ = pmpi_testany__
#pragma weak mpi_testany_ = pmpi_testany__
#pragma weak mpi_testany = pmpi_testany__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TESTANY = pmpi_testany_
#pragma weak mpi_testany__ = pmpi_testany_
#pragma weak mpi_testany_ = pmpi_testany_
#pragma weak mpi_testany = pmpi_testany_
#else
#pragma weak MPI_TESTANY = pmpi_testany
#pragma weak mpi_testany__ = pmpi_testany
#pragma weak mpi_testany_ = pmpi_testany
#pragma weak mpi_testany = pmpi_testany
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTANY( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_TESTANY = PMPI_TESTANY
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_testany__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_testany__ = pmpi_testany__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_testany( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_testany = pmpi_testany
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_testany_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_testany_ = pmpi_testany_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_TESTANY  MPI_TESTANY
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_testany__  mpi_testany__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_testany  mpi_testany
#else
#pragma _HP_SECONDARY_DEF pmpi_testany_  mpi_testany_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_TESTANY as PMPI_TESTANY
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_testany__ as pmpi_testany__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_testany as pmpi_testany
#else
#pragma _CRI duplicate mpi_testany_ as pmpi_testany_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTANY( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TESTANY")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TESTANY")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TESTANY")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TESTANY")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTANY( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTANY( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTANY( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTANY( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testany__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testany( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testany_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_testany__ = MPI_TESTANY
#pragma weak mpi_testany_ = MPI_TESTANY
#pragma weak mpi_testany = MPI_TESTANY
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TESTANY = mpi_testany__
#pragma weak mpi_testany_ = mpi_testany__
#pragma weak mpi_testany = mpi_testany__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TESTANY = mpi_testany_
#pragma weak mpi_testany__ = mpi_testany_
#pragma weak mpi_testany = mpi_testany_
#else
#pragma weak MPI_TESTANY = mpi_testany
#pragma weak mpi_testany__ = mpi_testany
#pragma weak mpi_testany_ = mpi_testany
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTANY( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testany__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_TESTANY")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_TESTANY")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_TESTANY")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTANY( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_testany__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testany_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_testany__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_testany__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTANY( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_testany_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_testany_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testany( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_testany_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTANY( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_testany")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_testany")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_testany")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testany( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_TESTANY( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_testany__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_testany_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_testany( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_testany__ = PMPI_TESTANY
#pragma weak pmpi_testany_ = PMPI_TESTANY
#pragma weak pmpi_testany = PMPI_TESTANY
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_TESTANY = pmpi_testany__
#pragma weak pmpi_testany_ = pmpi_testany__
#pragma weak pmpi_testany = pmpi_testany__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_TESTANY = pmpi_testany_
#pragma weak pmpi_testany__ = pmpi_testany_
#pragma weak pmpi_testany = pmpi_testany_
#else
#pragma weak PMPI_TESTANY = pmpi_testany
#pragma weak pmpi_testany__ = pmpi_testany
#pragma weak pmpi_testany_ = pmpi_testany
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_testany__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TESTANY")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testany_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TESTANY")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testany( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TESTANY")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TESTANY( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testany_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testany( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TESTANY( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testany__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testany( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_TESTANY( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testany__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testany_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_testany")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_testany_ PMPI_TESTANY
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_testany_ pmpi_testany__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_testany_ pmpi_testany
#else
#define mpi_testany_ pmpi_testany_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Testany
#define MPI_Testany PMPI_Testany
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_testany_ MPI_TESTANY
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_testany_ mpi_testany__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_testany_ mpi_testany
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_testany_ ( MPI_Fint *v1, MPI_Fint v2[], MPI_Fint *v3, MPI_Fint *v4, MPI_Fint *v5, MPI_Fint *ierr ){
    int l3;
    int l4;

#ifndef HAVE_MPI_F_INIT_WORKS_WITH_C
    if (MPIR_F_NeedInit){ mpirinitf_(); MPIR_F_NeedInit = 0; }
#endif

    if (v5 == MPI_F_STATUS_IGNORE) { v5 = (MPI_Fint*)MPI_STATUS_IGNORE; }
    *ierr = MPI_Testany( (int)*v1, (MPI_Request *)(v2),  &l3, &l4, (MPI_Status *)v5 );
    *v3 = (MPI_Fint)l3;
    if (l3 >= 0) *v3 = *v3 + 1;
    if (*ierr == MPI_SUCCESS) *v4 = MPII_TO_FLOG(l4);
}
