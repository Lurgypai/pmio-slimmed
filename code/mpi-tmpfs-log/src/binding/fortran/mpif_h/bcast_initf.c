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
extern FORT_DLL_SPEC void FORT_CALL MPI_BCAST_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_BCAST_INIT = PMPI_BCAST_INIT
#pragma weak mpi_bcast_init__ = PMPI_BCAST_INIT
#pragma weak mpi_bcast_init_ = PMPI_BCAST_INIT
#pragma weak mpi_bcast_init = PMPI_BCAST_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_BCAST_INIT = pmpi_bcast_init__
#pragma weak mpi_bcast_init__ = pmpi_bcast_init__
#pragma weak mpi_bcast_init_ = pmpi_bcast_init__
#pragma weak mpi_bcast_init = pmpi_bcast_init__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_BCAST_INIT = pmpi_bcast_init_
#pragma weak mpi_bcast_init__ = pmpi_bcast_init_
#pragma weak mpi_bcast_init_ = pmpi_bcast_init_
#pragma weak mpi_bcast_init = pmpi_bcast_init_
#else
#pragma weak MPI_BCAST_INIT = pmpi_bcast_init
#pragma weak mpi_bcast_init__ = pmpi_bcast_init
#pragma weak mpi_bcast_init_ = pmpi_bcast_init
#pragma weak mpi_bcast_init = pmpi_bcast_init
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_BCAST_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_BCAST_INIT = PMPI_BCAST_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_bcast_init__ = pmpi_bcast_init__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_bcast_init = pmpi_bcast_init
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_bcast_init_ = pmpi_bcast_init_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_BCAST_INIT  MPI_BCAST_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_bcast_init__  mpi_bcast_init__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_bcast_init  mpi_bcast_init
#else
#pragma _HP_SECONDARY_DEF pmpi_bcast_init_  mpi_bcast_init_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_BCAST_INIT as PMPI_BCAST_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_bcast_init__ as pmpi_bcast_init__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_bcast_init as pmpi_bcast_init
#else
#pragma _CRI duplicate mpi_bcast_init_ as pmpi_bcast_init_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_BCAST_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_BCAST_INIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_BCAST_INIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_BCAST_INIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_BCAST_INIT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_BCAST_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_BCAST_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_BCAST_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_BCAST_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_bcast_init__ = MPI_BCAST_INIT
#pragma weak mpi_bcast_init_ = MPI_BCAST_INIT
#pragma weak mpi_bcast_init = MPI_BCAST_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_BCAST_INIT = mpi_bcast_init__
#pragma weak mpi_bcast_init_ = mpi_bcast_init__
#pragma weak mpi_bcast_init = mpi_bcast_init__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_BCAST_INIT = mpi_bcast_init_
#pragma weak mpi_bcast_init__ = mpi_bcast_init_
#pragma weak mpi_bcast_init = mpi_bcast_init_
#else
#pragma weak MPI_BCAST_INIT = mpi_bcast_init
#pragma weak mpi_bcast_init__ = mpi_bcast_init
#pragma weak mpi_bcast_init_ = mpi_bcast_init
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_BCAST_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_BCAST_INIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_BCAST_INIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_BCAST_INIT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_BCAST_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_bcast_init__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_bcast_init__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_bcast_init__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_BCAST_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_bcast_init_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_bcast_init_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_bcast_init_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_BCAST_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_bcast_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_bcast_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_bcast_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_bcast_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_BCAST_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_bcast_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_bcast_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_bcast_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_bcast_init__ = PMPI_BCAST_INIT
#pragma weak pmpi_bcast_init_ = PMPI_BCAST_INIT
#pragma weak pmpi_bcast_init = PMPI_BCAST_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_BCAST_INIT = pmpi_bcast_init__
#pragma weak pmpi_bcast_init_ = pmpi_bcast_init__
#pragma weak pmpi_bcast_init = pmpi_bcast_init__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_BCAST_INIT = pmpi_bcast_init_
#pragma weak pmpi_bcast_init__ = pmpi_bcast_init_
#pragma weak pmpi_bcast_init = pmpi_bcast_init_
#else
#pragma weak PMPI_BCAST_INIT = pmpi_bcast_init
#pragma weak pmpi_bcast_init__ = pmpi_bcast_init
#pragma weak pmpi_bcast_init_ = pmpi_bcast_init
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_bcast_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_BCAST_INIT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_bcast_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_BCAST_INIT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_bcast_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_BCAST_INIT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_BCAST_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_bcast_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_bcast_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_BCAST_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_bcast_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_bcast_init( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_BCAST_INIT( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_bcast_init__( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_bcast_init_( void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_bcast_init")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_bcast_init_ PMPI_BCAST_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_bcast_init_ pmpi_bcast_init__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_bcast_init_ pmpi_bcast_init
#else
#define mpi_bcast_init_ pmpi_bcast_init_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Bcast_init
#define MPI_Bcast_init PMPI_Bcast_init
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_bcast_init_ MPI_BCAST_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_bcast_init_ mpi_bcast_init__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_bcast_init_ mpi_bcast_init
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_bcast_init_ ( void*v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Fint *v5, MPI_Fint *v6, MPI_Fint *v7, MPI_Fint *ierr ){
    if (v1 == MPIR_F_MPI_BOTTOM) v1 = MPI_BOTTOM;
    *ierr = MPI_Bcast_init( v1, (int)*v2, (MPI_Datatype)(*v3), (int)*v4, (MPI_Comm)(*v5), (MPI_Info)(*v6), (MPI_Request *)(v7) );
}