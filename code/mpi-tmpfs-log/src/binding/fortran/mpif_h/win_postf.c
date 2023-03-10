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
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_POST( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_WIN_POST = PMPI_WIN_POST
#pragma weak mpi_win_post__ = PMPI_WIN_POST
#pragma weak mpi_win_post_ = PMPI_WIN_POST
#pragma weak mpi_win_post = PMPI_WIN_POST
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WIN_POST = pmpi_win_post__
#pragma weak mpi_win_post__ = pmpi_win_post__
#pragma weak mpi_win_post_ = pmpi_win_post__
#pragma weak mpi_win_post = pmpi_win_post__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WIN_POST = pmpi_win_post_
#pragma weak mpi_win_post__ = pmpi_win_post_
#pragma weak mpi_win_post_ = pmpi_win_post_
#pragma weak mpi_win_post = pmpi_win_post_
#else
#pragma weak MPI_WIN_POST = pmpi_win_post
#pragma weak mpi_win_post__ = pmpi_win_post
#pragma weak mpi_win_post_ = pmpi_win_post
#pragma weak mpi_win_post = pmpi_win_post
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_POST( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_WIN_POST = PMPI_WIN_POST
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_win_post__ = pmpi_win_post__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_win_post = pmpi_win_post
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_win_post_ = pmpi_win_post_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_WIN_POST  MPI_WIN_POST
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_win_post__  mpi_win_post__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_win_post  mpi_win_post
#else
#pragma _HP_SECONDARY_DEF pmpi_win_post_  mpi_win_post_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_WIN_POST as PMPI_WIN_POST
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_win_post__ as pmpi_win_post__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_win_post as pmpi_win_post
#else
#pragma _CRI duplicate mpi_win_post_ as pmpi_win_post_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_POST( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_POST")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_POST")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_POST")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_POST")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_POST( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_POST( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_POST( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_POST( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_win_post__ = MPI_WIN_POST
#pragma weak mpi_win_post_ = MPI_WIN_POST
#pragma weak mpi_win_post = MPI_WIN_POST
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WIN_POST = mpi_win_post__
#pragma weak mpi_win_post_ = mpi_win_post__
#pragma weak mpi_win_post = mpi_win_post__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WIN_POST = mpi_win_post_
#pragma weak mpi_win_post__ = mpi_win_post_
#pragma weak mpi_win_post = mpi_win_post_
#else
#pragma weak MPI_WIN_POST = mpi_win_post
#pragma weak mpi_win_post__ = mpi_win_post
#pragma weak mpi_win_post_ = mpi_win_post
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_POST( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_WIN_POST")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_WIN_POST")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_WIN_POST")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_POST( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_post__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_post__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_post__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_POST( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_post_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_post_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_post_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_WIN_POST( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_post")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_post")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_win_post")));
extern FORT_DLL_SPEC void FORT_CALL mpi_win_post( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_POST( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_post__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_post_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_post( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_win_post__ = PMPI_WIN_POST
#pragma weak pmpi_win_post_ = PMPI_WIN_POST
#pragma weak pmpi_win_post = PMPI_WIN_POST
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_WIN_POST = pmpi_win_post__
#pragma weak pmpi_win_post_ = pmpi_win_post__
#pragma weak pmpi_win_post = pmpi_win_post__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_WIN_POST = pmpi_win_post_
#pragma weak pmpi_win_post__ = pmpi_win_post_
#pragma weak pmpi_win_post = pmpi_win_post_
#else
#pragma weak PMPI_WIN_POST = pmpi_win_post
#pragma weak pmpi_win_post__ = pmpi_win_post
#pragma weak pmpi_win_post_ = pmpi_win_post
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_post__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_POST")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_post_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_POST")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_post( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_WIN_POST")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_POST( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_post_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_post( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_POST( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_post__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_post( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_WIN_POST( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_post__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_win_post_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_win_post")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_win_post_ PMPI_WIN_POST
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_win_post_ pmpi_win_post__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_win_post_ pmpi_win_post
#else
#define mpi_win_post_ pmpi_win_post_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Win_post
#define MPI_Win_post PMPI_Win_post
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_win_post_ MPI_WIN_POST
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_win_post_ mpi_win_post__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_win_post_ mpi_win_post
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_win_post_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *ierr ){
    *ierr = MPI_Win_post( (MPI_Group)*v1, (int)*v2, (MPI_Win)*v3 );
}
