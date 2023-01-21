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
extern FORT_DLL_SPEC void FORT_CALL MPI_SESSION_GET_PSET_INFO( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info__( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info_( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_SESSION_GET_PSET_INFO = PMPI_SESSION_GET_PSET_INFO
#pragma weak mpi_session_get_pset_info__ = PMPI_SESSION_GET_PSET_INFO
#pragma weak mpi_session_get_pset_info_ = PMPI_SESSION_GET_PSET_INFO
#pragma weak mpi_session_get_pset_info = PMPI_SESSION_GET_PSET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_SESSION_GET_PSET_INFO = pmpi_session_get_pset_info__
#pragma weak mpi_session_get_pset_info__ = pmpi_session_get_pset_info__
#pragma weak mpi_session_get_pset_info_ = pmpi_session_get_pset_info__
#pragma weak mpi_session_get_pset_info = pmpi_session_get_pset_info__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_SESSION_GET_PSET_INFO = pmpi_session_get_pset_info_
#pragma weak mpi_session_get_pset_info__ = pmpi_session_get_pset_info_
#pragma weak mpi_session_get_pset_info_ = pmpi_session_get_pset_info_
#pragma weak mpi_session_get_pset_info = pmpi_session_get_pset_info_
#else
#pragma weak MPI_SESSION_GET_PSET_INFO = pmpi_session_get_pset_info
#pragma weak mpi_session_get_pset_info__ = pmpi_session_get_pset_info
#pragma weak mpi_session_get_pset_info_ = pmpi_session_get_pset_info
#pragma weak mpi_session_get_pset_info = pmpi_session_get_pset_info
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_SESSION_GET_PSET_INFO( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak MPI_SESSION_GET_PSET_INFO = PMPI_SESSION_GET_PSET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info__( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_session_get_pset_info__ = pmpi_session_get_pset_info__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_session_get_pset_info = pmpi_session_get_pset_info
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info_( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_session_get_pset_info_ = pmpi_session_get_pset_info_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_SESSION_GET_PSET_INFO  MPI_SESSION_GET_PSET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_session_get_pset_info__  mpi_session_get_pset_info__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_session_get_pset_info  mpi_session_get_pset_info
#else
#pragma _HP_SECONDARY_DEF pmpi_session_get_pset_info_  mpi_session_get_pset_info_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_SESSION_GET_PSET_INFO as PMPI_SESSION_GET_PSET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_session_get_pset_info__ as pmpi_session_get_pset_info__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_session_get_pset_info as pmpi_session_get_pset_info
#else
#pragma _CRI duplicate mpi_session_get_pset_info_ as pmpi_session_get_pset_info_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_SESSION_GET_PSET_INFO( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_SESSION_GET_PSET_INFO")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info__( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_SESSION_GET_PSET_INFO")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info_( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_SESSION_GET_PSET_INFO")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_SESSION_GET_PSET_INFO")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_SESSION_GET_PSET_INFO( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info__( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info_( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_SESSION_GET_PSET_INFO( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info__( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info_( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_SESSION_GET_PSET_INFO( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info__( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info_( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_SESSION_GET_PSET_INFO( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info__( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info_( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_session_get_pset_info__ = MPI_SESSION_GET_PSET_INFO
#pragma weak mpi_session_get_pset_info_ = MPI_SESSION_GET_PSET_INFO
#pragma weak mpi_session_get_pset_info = MPI_SESSION_GET_PSET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_SESSION_GET_PSET_INFO = mpi_session_get_pset_info__
#pragma weak mpi_session_get_pset_info_ = mpi_session_get_pset_info__
#pragma weak mpi_session_get_pset_info = mpi_session_get_pset_info__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_SESSION_GET_PSET_INFO = mpi_session_get_pset_info_
#pragma weak mpi_session_get_pset_info__ = mpi_session_get_pset_info_
#pragma weak mpi_session_get_pset_info = mpi_session_get_pset_info_
#else
#pragma weak MPI_SESSION_GET_PSET_INFO = mpi_session_get_pset_info
#pragma weak mpi_session_get_pset_info__ = mpi_session_get_pset_info
#pragma weak mpi_session_get_pset_info_ = mpi_session_get_pset_info
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_SESSION_GET_PSET_INFO( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info__( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_SESSION_GET_PSET_INFO")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info_( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_SESSION_GET_PSET_INFO")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_SESSION_GET_PSET_INFO")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_SESSION_GET_PSET_INFO( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_session_get_pset_info__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info__( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info_( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_session_get_pset_info__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_session_get_pset_info__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_SESSION_GET_PSET_INFO( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_session_get_pset_info_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info__( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_session_get_pset_info_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info_( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_session_get_pset_info_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_SESSION_GET_PSET_INFO( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_session_get_pset_info")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info__( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_session_get_pset_info")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info_( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_session_get_pset_info")));
extern FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_SESSION_GET_PSET_INFO( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_session_get_pset_info__( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_session_get_pset_info_( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_session_get_pset_info( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_session_get_pset_info__ = PMPI_SESSION_GET_PSET_INFO
#pragma weak pmpi_session_get_pset_info_ = PMPI_SESSION_GET_PSET_INFO
#pragma weak pmpi_session_get_pset_info = PMPI_SESSION_GET_PSET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_SESSION_GET_PSET_INFO = pmpi_session_get_pset_info__
#pragma weak pmpi_session_get_pset_info_ = pmpi_session_get_pset_info__
#pragma weak pmpi_session_get_pset_info = pmpi_session_get_pset_info__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_SESSION_GET_PSET_INFO = pmpi_session_get_pset_info_
#pragma weak pmpi_session_get_pset_info__ = pmpi_session_get_pset_info_
#pragma weak pmpi_session_get_pset_info = pmpi_session_get_pset_info_
#else
#pragma weak PMPI_SESSION_GET_PSET_INFO = pmpi_session_get_pset_info
#pragma weak pmpi_session_get_pset_info__ = pmpi_session_get_pset_info
#pragma weak pmpi_session_get_pset_info_ = pmpi_session_get_pset_info
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_session_get_pset_info__( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_SESSION_GET_PSET_INFO")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_session_get_pset_info_( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_SESSION_GET_PSET_INFO")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_session_get_pset_info( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_SESSION_GET_PSET_INFO")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_SESSION_GET_PSET_INFO( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_session_get_pset_info_( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_session_get_pset_info( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_SESSION_GET_PSET_INFO( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_session_get_pset_info__( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_session_get_pset_info( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_SESSION_GET_PSET_INFO( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_session_get_pset_info__( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_session_get_pset_info_( MPI_Session, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_session_get_pset_info")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_session_get_pset_info_ PMPI_SESSION_GET_PSET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_session_get_pset_info_ pmpi_session_get_pset_info__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_session_get_pset_info_ pmpi_session_get_pset_info
#else
#define mpi_session_get_pset_info_ pmpi_session_get_pset_info_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Session_get_pset_info
#define MPI_Session_get_pset_info PMPI_Session_get_pset_info
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_session_get_pset_info_ MPI_SESSION_GET_PSET_INFO
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_session_get_pset_info_ mpi_session_get_pset_info__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_session_get_pset_info_ mpi_session_get_pset_info
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_session_get_pset_info_ ( MPI_Session v1, char *v2 FORT_MIXED_LEN(d2), MPI_Fint *v3, MPI_Fint *ierr FORT_END_LEN(d2) ){
    *ierr = MPI_Session_get_pset_info( v1, v2, (MPI_Info *)(v3) );
}