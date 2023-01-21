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
extern FORT_DLL_SPEC double FORT_CALL MPI_WTICK(void);
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick__(void);
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick(void);
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick_(void);

#if defined(F77_NAME_UPPER)
#pragma weak MPI_WTICK = PMPI_WTICK
#pragma weak mpi_wtick__ = PMPI_WTICK
#pragma weak mpi_wtick_ = PMPI_WTICK
#pragma weak mpi_wtick = PMPI_WTICK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WTICK = pmpi_wtick__
#pragma weak mpi_wtick__ = pmpi_wtick__
#pragma weak mpi_wtick_ = pmpi_wtick__
#pragma weak mpi_wtick = pmpi_wtick__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WTICK = pmpi_wtick_
#pragma weak mpi_wtick__ = pmpi_wtick_
#pragma weak mpi_wtick_ = pmpi_wtick_
#pragma weak mpi_wtick = pmpi_wtick_
#else
#pragma weak MPI_WTICK = pmpi_wtick
#pragma weak mpi_wtick__ = pmpi_wtick
#pragma weak mpi_wtick_ = pmpi_wtick
#pragma weak mpi_wtick = pmpi_wtick
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC double FORT_CALL MPI_WTICK(void);

#pragma weak MPI_WTICK = PMPI_WTICK
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick__(void);

#pragma weak mpi_wtick__ = pmpi_wtick__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick(void);

#pragma weak mpi_wtick = pmpi_wtick
#else
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick_(void);

#pragma weak mpi_wtick_ = pmpi_wtick_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_WTICK  MPI_WTICK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_wtick__  mpi_wtick__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_wtick  mpi_wtick
#else
#pragma _HP_SECONDARY_DEF pmpi_wtick_  mpi_wtick_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_WTICK as PMPI_WTICK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_wtick__ as pmpi_wtick__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_wtick as pmpi_wtick
#else
#pragma _CRI duplicate mpi_wtick_ as pmpi_wtick_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC double FORT_CALL MPI_WTICK(void) __attribute__((weak,alias("PMPI_WTICK")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick__(void) __attribute__((weak,alias("PMPI_WTICK")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick_(void) __attribute__((weak,alias("PMPI_WTICK")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick(void) __attribute__((weak,alias("PMPI_WTICK")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC double FORT_CALL MPI_WTICK(void) __attribute__((weak,alias("pmpi_wtick__")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick__(void) __attribute__((weak,alias("pmpi_wtick__")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick_(void) __attribute__((weak,alias("pmpi_wtick__")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick(void) __attribute__((weak,alias("pmpi_wtick__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC double FORT_CALL MPI_WTICK(void) __attribute__((weak,alias("pmpi_wtick_")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick__(void) __attribute__((weak,alias("pmpi_wtick_")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick_(void) __attribute__((weak,alias("pmpi_wtick_")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick(void) __attribute__((weak,alias("pmpi_wtick_")));

#else
extern FORT_DLL_SPEC double FORT_CALL MPI_WTICK(void) __attribute__((weak,alias("pmpi_wtick")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick__(void) __attribute__((weak,alias("pmpi_wtick")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick_(void) __attribute__((weak,alias("pmpi_wtick")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick(void) __attribute__((weak,alias("pmpi_wtick")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC double FORT_CALL MPI_WTICK(void);
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick__(void);
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick(void);
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick_(void);

#if defined(F77_NAME_UPPER)
#pragma weak mpi_wtick__ = MPI_WTICK
#pragma weak mpi_wtick_ = MPI_WTICK
#pragma weak mpi_wtick = MPI_WTICK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_WTICK = mpi_wtick__
#pragma weak mpi_wtick_ = mpi_wtick__
#pragma weak mpi_wtick = mpi_wtick__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_WTICK = mpi_wtick_
#pragma weak mpi_wtick__ = mpi_wtick_
#pragma weak mpi_wtick = mpi_wtick_
#else
#pragma weak MPI_WTICK = mpi_wtick
#pragma weak mpi_wtick__ = mpi_wtick
#pragma weak mpi_wtick_ = mpi_wtick
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC double FORT_CALL MPI_WTICK(void);
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick__(void) __attribute__((weak,alias("MPI_WTICK")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick_(void) __attribute__((weak,alias("MPI_WTICK")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick(void) __attribute__((weak,alias("MPI_WTICK")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC double FORT_CALL MPI_WTICK(void) __attribute__((weak,alias("mpi_wtick__")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick__(void);
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick_(void) __attribute__((weak,alias("mpi_wtick__")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick(void) __attribute__((weak,alias("mpi_wtick__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC double FORT_CALL MPI_WTICK(void) __attribute__((weak,alias("mpi_wtick_")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick__(void) __attribute__((weak,alias("mpi_wtick_")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick_(void);
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick(void) __attribute__((weak,alias("mpi_wtick_")));

#else
extern FORT_DLL_SPEC double FORT_CALL MPI_WTICK(void) __attribute__((weak,alias("mpi_wtick")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick__(void) __attribute__((weak,alias("mpi_wtick")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick_(void) __attribute__((weak,alias("mpi_wtick")));
extern FORT_DLL_SPEC double FORT_CALL mpi_wtick(void);

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC double FORT_CALL PMPI_WTICK(void);
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC double FORT_CALL pmpi_wtick__(void);
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC double FORT_CALL pmpi_wtick_(void);
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC double FORT_CALL pmpi_wtick(void);

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_wtick__ = PMPI_WTICK
#pragma weak pmpi_wtick_ = PMPI_WTICK
#pragma weak pmpi_wtick = PMPI_WTICK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_WTICK = pmpi_wtick__
#pragma weak pmpi_wtick_ = pmpi_wtick__
#pragma weak pmpi_wtick = pmpi_wtick__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_WTICK = pmpi_wtick_
#pragma weak pmpi_wtick__ = pmpi_wtick_
#pragma weak pmpi_wtick = pmpi_wtick_
#else
#pragma weak PMPI_WTICK = pmpi_wtick
#pragma weak pmpi_wtick__ = pmpi_wtick
#pragma weak pmpi_wtick_ = pmpi_wtick
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC double FORT_CALL pmpi_wtick__(void) __attribute__((weak,alias("PMPI_WTICK")));
extern FORT_DLL_SPEC double FORT_CALL pmpi_wtick_(void) __attribute__((weak,alias("PMPI_WTICK")));
extern FORT_DLL_SPEC double FORT_CALL pmpi_wtick(void) __attribute__((weak,alias("PMPI_WTICK")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC double FORT_CALL PMPI_WTICK(void) __attribute__((weak,alias("pmpi_wtick__")));
extern FORT_DLL_SPEC double FORT_CALL pmpi_wtick_(void) __attribute__((weak,alias("pmpi_wtick__")));
extern FORT_DLL_SPEC double FORT_CALL pmpi_wtick(void) __attribute__((weak,alias("pmpi_wtick__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC double FORT_CALL PMPI_WTICK(void) __attribute__((weak,alias("pmpi_wtick_")));
extern FORT_DLL_SPEC double FORT_CALL pmpi_wtick__(void) __attribute__((weak,alias("pmpi_wtick_")));
extern FORT_DLL_SPEC double FORT_CALL pmpi_wtick(void) __attribute__((weak,alias("pmpi_wtick_")));

#else
extern FORT_DLL_SPEC double FORT_CALL PMPI_WTICK(void) __attribute__((weak,alias("pmpi_wtick")));
extern FORT_DLL_SPEC double FORT_CALL pmpi_wtick__(void) __attribute__((weak,alias("pmpi_wtick")));
extern FORT_DLL_SPEC double FORT_CALL pmpi_wtick_(void) __attribute__((weak,alias("pmpi_wtick")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_wtick_ PMPI_WTICK
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_wtick_ pmpi_wtick__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_wtick_ pmpi_wtick
#else
#define mpi_wtick_ pmpi_wtick_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Wtick
#define MPI_Wtick PMPI_Wtick
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_wtick_ MPI_WTICK
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_wtick_ mpi_wtick__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_wtick_ mpi_wtick
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
#include "mpichconf.h"
FORT_DLL_SPEC double FORT_CALL mpi_wtick_ ( void ) {
return MPI_Wtick();
}
