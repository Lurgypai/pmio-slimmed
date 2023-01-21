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
extern FORT_DLL_SPEC void FORT_CALL MPI_PREADY_LIST( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_PREADY_LIST = PMPI_PREADY_LIST
#pragma weak mpi_pready_list__ = PMPI_PREADY_LIST
#pragma weak mpi_pready_list_ = PMPI_PREADY_LIST
#pragma weak mpi_pready_list = PMPI_PREADY_LIST
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_PREADY_LIST = pmpi_pready_list__
#pragma weak mpi_pready_list__ = pmpi_pready_list__
#pragma weak mpi_pready_list_ = pmpi_pready_list__
#pragma weak mpi_pready_list = pmpi_pready_list__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_PREADY_LIST = pmpi_pready_list_
#pragma weak mpi_pready_list__ = pmpi_pready_list_
#pragma weak mpi_pready_list_ = pmpi_pready_list_
#pragma weak mpi_pready_list = pmpi_pready_list_
#else
#pragma weak MPI_PREADY_LIST = pmpi_pready_list
#pragma weak mpi_pready_list__ = pmpi_pready_list
#pragma weak mpi_pready_list_ = pmpi_pready_list
#pragma weak mpi_pready_list = pmpi_pready_list
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_PREADY_LIST( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#pragma weak MPI_PREADY_LIST = PMPI_PREADY_LIST
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#pragma weak mpi_pready_list__ = pmpi_pready_list__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#pragma weak mpi_pready_list = pmpi_pready_list
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#pragma weak mpi_pready_list_ = pmpi_pready_list_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_PREADY_LIST  MPI_PREADY_LIST
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_pready_list__  mpi_pready_list__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_pready_list  mpi_pready_list
#else
#pragma _HP_SECONDARY_DEF pmpi_pready_list_  mpi_pready_list_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_PREADY_LIST as PMPI_PREADY_LIST
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_pready_list__ as pmpi_pready_list__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_pready_list as pmpi_pready_list
#else
#pragma _CRI duplicate mpi_pready_list_ as pmpi_pready_list_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_PREADY_LIST( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_PREADY_LIST")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_PREADY_LIST")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_PREADY_LIST")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_PREADY_LIST")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_PREADY_LIST( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_PREADY_LIST( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_PREADY_LIST( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_PREADY_LIST( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_pready_list__ = MPI_PREADY_LIST
#pragma weak mpi_pready_list_ = MPI_PREADY_LIST
#pragma weak mpi_pready_list = MPI_PREADY_LIST
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_PREADY_LIST = mpi_pready_list__
#pragma weak mpi_pready_list_ = mpi_pready_list__
#pragma weak mpi_pready_list = mpi_pready_list__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_PREADY_LIST = mpi_pready_list_
#pragma weak mpi_pready_list__ = mpi_pready_list_
#pragma weak mpi_pready_list = mpi_pready_list_
#else
#pragma weak MPI_PREADY_LIST = mpi_pready_list
#pragma weak mpi_pready_list__ = mpi_pready_list
#pragma weak mpi_pready_list_ = mpi_pready_list
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_PREADY_LIST( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_PREADY_LIST")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_PREADY_LIST")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_PREADY_LIST")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_PREADY_LIST( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_pready_list__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_pready_list__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_pready_list__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_PREADY_LIST( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_pready_list_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_pready_list_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_pready_list_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_PREADY_LIST( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_pready_list")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_pready_list")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_pready_list")));
extern FORT_DLL_SPEC void FORT_CALL mpi_pready_list( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_PREADY_LIST( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_pready_list__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_pready_list_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_pready_list( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_pready_list__ = PMPI_PREADY_LIST
#pragma weak pmpi_pready_list_ = PMPI_PREADY_LIST
#pragma weak pmpi_pready_list = PMPI_PREADY_LIST
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_PREADY_LIST = pmpi_pready_list__
#pragma weak pmpi_pready_list_ = pmpi_pready_list__
#pragma weak pmpi_pready_list = pmpi_pready_list__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_PREADY_LIST = pmpi_pready_list_
#pragma weak pmpi_pready_list__ = pmpi_pready_list_
#pragma weak pmpi_pready_list = pmpi_pready_list_
#else
#pragma weak PMPI_PREADY_LIST = pmpi_pready_list
#pragma weak pmpi_pready_list__ = pmpi_pready_list
#pragma weak pmpi_pready_list_ = pmpi_pready_list
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_pready_list__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_PREADY_LIST")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pready_list_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_PREADY_LIST")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pready_list( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_PREADY_LIST")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_PREADY_LIST( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pready_list_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pready_list( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_PREADY_LIST( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pready_list__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pready_list( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_PREADY_LIST( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pready_list__( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_pready_list_( MPI_Fint *, MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_pready_list")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_pready_list_ PMPI_PREADY_LIST
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_pready_list_ pmpi_pready_list__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_pready_list_ pmpi_pready_list
#else
#define mpi_pready_list_ pmpi_pready_list_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Pready_list
#define MPI_Pready_list PMPI_Pready_list
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_pready_list_ MPI_PREADY_LIST
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_pready_list_ mpi_pready_list__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_pready_list_ mpi_pready_list
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_pready_list_ ( MPI_Fint *v1, MPI_Fint v2[], MPI_Fint *v3, MPI_Fint *ierr ){
    *ierr = MPI_Pready_list( (int)*v1, v2, (MPI_Request)*v3 );
}