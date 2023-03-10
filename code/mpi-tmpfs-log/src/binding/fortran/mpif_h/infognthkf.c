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
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET_NTHKEY( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey__( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey_( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_INFO_GET_NTHKEY = PMPI_INFO_GET_NTHKEY
#pragma weak mpi_info_get_nthkey__ = PMPI_INFO_GET_NTHKEY
#pragma weak mpi_info_get_nthkey_ = PMPI_INFO_GET_NTHKEY
#pragma weak mpi_info_get_nthkey = PMPI_INFO_GET_NTHKEY
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INFO_GET_NTHKEY = pmpi_info_get_nthkey__
#pragma weak mpi_info_get_nthkey__ = pmpi_info_get_nthkey__
#pragma weak mpi_info_get_nthkey_ = pmpi_info_get_nthkey__
#pragma weak mpi_info_get_nthkey = pmpi_info_get_nthkey__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INFO_GET_NTHKEY = pmpi_info_get_nthkey_
#pragma weak mpi_info_get_nthkey__ = pmpi_info_get_nthkey_
#pragma weak mpi_info_get_nthkey_ = pmpi_info_get_nthkey_
#pragma weak mpi_info_get_nthkey = pmpi_info_get_nthkey_
#else
#pragma weak MPI_INFO_GET_NTHKEY = pmpi_info_get_nthkey
#pragma weak mpi_info_get_nthkey__ = pmpi_info_get_nthkey
#pragma weak mpi_info_get_nthkey_ = pmpi_info_get_nthkey
#pragma weak mpi_info_get_nthkey = pmpi_info_get_nthkey
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET_NTHKEY( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak MPI_INFO_GET_NTHKEY = PMPI_INFO_GET_NTHKEY
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey__( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_info_get_nthkey__ = pmpi_info_get_nthkey__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_info_get_nthkey = pmpi_info_get_nthkey
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey_( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_info_get_nthkey_ = pmpi_info_get_nthkey_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_INFO_GET_NTHKEY  MPI_INFO_GET_NTHKEY
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_info_get_nthkey__  mpi_info_get_nthkey__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_info_get_nthkey  mpi_info_get_nthkey
#else
#pragma _HP_SECONDARY_DEF pmpi_info_get_nthkey_  mpi_info_get_nthkey_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_INFO_GET_NTHKEY as PMPI_INFO_GET_NTHKEY
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_info_get_nthkey__ as pmpi_info_get_nthkey__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_info_get_nthkey as pmpi_info_get_nthkey
#else
#pragma _CRI duplicate mpi_info_get_nthkey_ as pmpi_info_get_nthkey_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET_NTHKEY( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_GET_NTHKEY")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey__( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_GET_NTHKEY")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey_( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_GET_NTHKEY")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_GET_NTHKEY")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET_NTHKEY( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey__( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey_( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET_NTHKEY( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey__( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey_( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET_NTHKEY( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey__( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey_( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET_NTHKEY( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey__( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey_( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_info_get_nthkey__ = MPI_INFO_GET_NTHKEY
#pragma weak mpi_info_get_nthkey_ = MPI_INFO_GET_NTHKEY
#pragma weak mpi_info_get_nthkey = MPI_INFO_GET_NTHKEY
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INFO_GET_NTHKEY = mpi_info_get_nthkey__
#pragma weak mpi_info_get_nthkey_ = mpi_info_get_nthkey__
#pragma weak mpi_info_get_nthkey = mpi_info_get_nthkey__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INFO_GET_NTHKEY = mpi_info_get_nthkey_
#pragma weak mpi_info_get_nthkey__ = mpi_info_get_nthkey_
#pragma weak mpi_info_get_nthkey = mpi_info_get_nthkey_
#else
#pragma weak MPI_INFO_GET_NTHKEY = mpi_info_get_nthkey
#pragma weak mpi_info_get_nthkey__ = mpi_info_get_nthkey
#pragma weak mpi_info_get_nthkey_ = mpi_info_get_nthkey
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET_NTHKEY( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey__( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_INFO_GET_NTHKEY")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey_( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_INFO_GET_NTHKEY")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_INFO_GET_NTHKEY")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET_NTHKEY( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get_nthkey__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey__( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey_( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get_nthkey__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get_nthkey__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET_NTHKEY( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get_nthkey_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey__( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get_nthkey_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey_( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get_nthkey_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_GET_NTHKEY( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get_nthkey")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey__( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get_nthkey")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey_( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_get_nthkey")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_GET_NTHKEY( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_nthkey__( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_nthkey_( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_nthkey( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_info_get_nthkey__ = PMPI_INFO_GET_NTHKEY
#pragma weak pmpi_info_get_nthkey_ = PMPI_INFO_GET_NTHKEY
#pragma weak pmpi_info_get_nthkey = PMPI_INFO_GET_NTHKEY
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_INFO_GET_NTHKEY = pmpi_info_get_nthkey__
#pragma weak pmpi_info_get_nthkey_ = pmpi_info_get_nthkey__
#pragma weak pmpi_info_get_nthkey = pmpi_info_get_nthkey__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_INFO_GET_NTHKEY = pmpi_info_get_nthkey_
#pragma weak pmpi_info_get_nthkey__ = pmpi_info_get_nthkey_
#pragma weak pmpi_info_get_nthkey = pmpi_info_get_nthkey_
#else
#pragma weak PMPI_INFO_GET_NTHKEY = pmpi_info_get_nthkey
#pragma weak pmpi_info_get_nthkey__ = pmpi_info_get_nthkey
#pragma weak pmpi_info_get_nthkey_ = pmpi_info_get_nthkey
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_nthkey__( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_GET_NTHKEY")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_nthkey_( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_GET_NTHKEY")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_nthkey( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_GET_NTHKEY")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_GET_NTHKEY( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_nthkey_( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_nthkey( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_GET_NTHKEY( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_nthkey__( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_nthkey( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_GET_NTHKEY( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_nthkey__( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_get_nthkey_( MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_get_nthkey")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_info_get_nthkey_ PMPI_INFO_GET_NTHKEY
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_info_get_nthkey_ pmpi_info_get_nthkey__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_info_get_nthkey_ pmpi_info_get_nthkey
#else
#define mpi_info_get_nthkey_ pmpi_info_get_nthkey_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Info_get_nthkey
#define MPI_Info_get_nthkey PMPI_Info_get_nthkey
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_info_get_nthkey_ MPI_INFO_GET_NTHKEY
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_info_get_nthkey_ mpi_info_get_nthkey__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_info_get_nthkey_ mpi_info_get_nthkey
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_info_get_nthkey_ ( MPI_Fint *v1, MPI_Fint *v2, char *v3 FORT_MIXED_LEN(d3), MPI_Fint *ierr FORT_END_LEN(d3) ){
    char *p3;
    p3 = (char *)malloc(d3 + 1);
    *ierr = MPI_Info_get_nthkey( (MPI_Info)(*v1), (int)*v2, p3 );

    if (!*ierr) {char *p = v3, *pc=p3;
        while (*pc) {*p++ = *pc++;}
        while ((p-v3) < d3) { *p++ = ' '; }
    }
    free( p3 );
}
