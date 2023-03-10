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
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTSOME( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_TESTSOME = PMPI_TESTSOME
#pragma weak mpi_testsome__ = PMPI_TESTSOME
#pragma weak mpi_testsome_ = PMPI_TESTSOME
#pragma weak mpi_testsome = PMPI_TESTSOME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TESTSOME = pmpi_testsome__
#pragma weak mpi_testsome__ = pmpi_testsome__
#pragma weak mpi_testsome_ = pmpi_testsome__
#pragma weak mpi_testsome = pmpi_testsome__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TESTSOME = pmpi_testsome_
#pragma weak mpi_testsome__ = pmpi_testsome_
#pragma weak mpi_testsome_ = pmpi_testsome_
#pragma weak mpi_testsome = pmpi_testsome_
#else
#pragma weak MPI_TESTSOME = pmpi_testsome
#pragma weak mpi_testsome__ = pmpi_testsome
#pragma weak mpi_testsome_ = pmpi_testsome
#pragma weak mpi_testsome = pmpi_testsome
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTSOME( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );

#pragma weak MPI_TESTSOME = PMPI_TESTSOME
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );

#pragma weak mpi_testsome__ = pmpi_testsome__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );

#pragma weak mpi_testsome = pmpi_testsome
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );

#pragma weak mpi_testsome_ = pmpi_testsome_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_TESTSOME  MPI_TESTSOME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_testsome__  mpi_testsome__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_testsome  mpi_testsome
#else
#pragma _HP_SECONDARY_DEF pmpi_testsome_  mpi_testsome_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_TESTSOME as PMPI_TESTSOME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_testsome__ as pmpi_testsome__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_testsome as pmpi_testsome
#else
#pragma _CRI duplicate mpi_testsome_ as pmpi_testsome_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTSOME( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_TESTSOME")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_TESTSOME")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_TESTSOME")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_TESTSOME")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTSOME( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTSOME( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTSOME( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTSOME( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_testsome__ = MPI_TESTSOME
#pragma weak mpi_testsome_ = MPI_TESTSOME
#pragma weak mpi_testsome = MPI_TESTSOME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TESTSOME = mpi_testsome__
#pragma weak mpi_testsome_ = mpi_testsome__
#pragma weak mpi_testsome = mpi_testsome__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TESTSOME = mpi_testsome_
#pragma weak mpi_testsome__ = mpi_testsome_
#pragma weak mpi_testsome = mpi_testsome_
#else
#pragma weak MPI_TESTSOME = mpi_testsome
#pragma weak mpi_testsome__ = mpi_testsome
#pragma weak mpi_testsome_ = mpi_testsome
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTSOME( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("MPI_TESTSOME")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("MPI_TESTSOME")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("MPI_TESTSOME")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTSOME( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_testsome__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_testsome__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_testsome__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTSOME( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_testsome_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_testsome_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_testsome_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TESTSOME( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_testsome")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_testsome")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("mpi_testsome")));
extern FORT_DLL_SPEC void FORT_CALL mpi_testsome( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_TESTSOME( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_testsome__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_testsome_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_testsome( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_testsome__ = PMPI_TESTSOME
#pragma weak pmpi_testsome_ = PMPI_TESTSOME
#pragma weak pmpi_testsome = PMPI_TESTSOME
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_TESTSOME = pmpi_testsome__
#pragma weak pmpi_testsome_ = pmpi_testsome__
#pragma weak pmpi_testsome = pmpi_testsome__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_TESTSOME = pmpi_testsome_
#pragma weak pmpi_testsome__ = pmpi_testsome_
#pragma weak pmpi_testsome = pmpi_testsome_
#else
#pragma weak PMPI_TESTSOME = pmpi_testsome
#pragma weak pmpi_testsome__ = pmpi_testsome
#pragma weak pmpi_testsome_ = pmpi_testsome
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_testsome__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_TESTSOME")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testsome_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_TESTSOME")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testsome( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("PMPI_TESTSOME")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TESTSOME( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testsome_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testsome( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TESTSOME( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testsome__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testsome( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_TESTSOME( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testsome__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_testsome_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint * ) __attribute__((weak,alias("pmpi_testsome")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_testsome_ PMPI_TESTSOME
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_testsome_ pmpi_testsome__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_testsome_ pmpi_testsome
#else
#define mpi_testsome_ pmpi_testsome_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Testsome
#define MPI_Testsome PMPI_Testsome
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_testsome_ MPI_TESTSOME
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_testsome_ mpi_testsome__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_testsome_ mpi_testsome
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_testsome_ ( MPI_Fint *v1, MPI_Fint v2[], MPI_Fint *v3, MPI_Fint v4[], MPI_Fint v5[], MPI_Fint *ierr ){

#ifndef HAVE_MPI_F_INIT_WORKS_WITH_C
    if (MPIR_F_NeedInit){ mpirinitf_(); MPIR_F_NeedInit = 0; }
#endif

    if (v5 == MPI_F_STATUSES_IGNORE) { v5 = (MPI_Fint *)MPI_STATUSES_IGNORE; }
    *ierr = MPI_Testsome( (int)*v1, (MPI_Request *)(v2),  v3, v4, (MPI_Status *)v5 );

    {int li;
     for (li=0; li<*v3; li++) {
        if (v4[li] >= 0) v4[li] += 1;
     }
    }
}
