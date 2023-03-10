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
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_LIBRARY_VERSION( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_GET_LIBRARY_VERSION = PMPI_GET_LIBRARY_VERSION
#pragma weak mpi_get_library_version__ = PMPI_GET_LIBRARY_VERSION
#pragma weak mpi_get_library_version_ = PMPI_GET_LIBRARY_VERSION
#pragma weak mpi_get_library_version = PMPI_GET_LIBRARY_VERSION
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GET_LIBRARY_VERSION = pmpi_get_library_version__
#pragma weak mpi_get_library_version__ = pmpi_get_library_version__
#pragma weak mpi_get_library_version_ = pmpi_get_library_version__
#pragma weak mpi_get_library_version = pmpi_get_library_version__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GET_LIBRARY_VERSION = pmpi_get_library_version_
#pragma weak mpi_get_library_version__ = pmpi_get_library_version_
#pragma weak mpi_get_library_version_ = pmpi_get_library_version_
#pragma weak mpi_get_library_version = pmpi_get_library_version_
#else
#pragma weak MPI_GET_LIBRARY_VERSION = pmpi_get_library_version
#pragma weak mpi_get_library_version__ = pmpi_get_library_version
#pragma weak mpi_get_library_version_ = pmpi_get_library_version
#pragma weak mpi_get_library_version = pmpi_get_library_version
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_LIBRARY_VERSION( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak MPI_GET_LIBRARY_VERSION = PMPI_GET_LIBRARY_VERSION
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_get_library_version__ = pmpi_get_library_version__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_get_library_version = pmpi_get_library_version
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_get_library_version_ = pmpi_get_library_version_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_GET_LIBRARY_VERSION  MPI_GET_LIBRARY_VERSION
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_get_library_version__  mpi_get_library_version__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_get_library_version  mpi_get_library_version
#else
#pragma _HP_SECONDARY_DEF pmpi_get_library_version_  mpi_get_library_version_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_GET_LIBRARY_VERSION as PMPI_GET_LIBRARY_VERSION
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_get_library_version__ as pmpi_get_library_version__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_get_library_version as pmpi_get_library_version
#else
#pragma _CRI duplicate mpi_get_library_version_ as pmpi_get_library_version_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_LIBRARY_VERSION( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_GET_LIBRARY_VERSION")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_GET_LIBRARY_VERSION")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_GET_LIBRARY_VERSION")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_GET_LIBRARY_VERSION")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_LIBRARY_VERSION( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_LIBRARY_VERSION( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_LIBRARY_VERSION( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_LIBRARY_VERSION( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_get_library_version__ = MPI_GET_LIBRARY_VERSION
#pragma weak mpi_get_library_version_ = MPI_GET_LIBRARY_VERSION
#pragma weak mpi_get_library_version = MPI_GET_LIBRARY_VERSION
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_GET_LIBRARY_VERSION = mpi_get_library_version__
#pragma weak mpi_get_library_version_ = mpi_get_library_version__
#pragma weak mpi_get_library_version = mpi_get_library_version__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_GET_LIBRARY_VERSION = mpi_get_library_version_
#pragma weak mpi_get_library_version__ = mpi_get_library_version_
#pragma weak mpi_get_library_version = mpi_get_library_version_
#else
#pragma weak MPI_GET_LIBRARY_VERSION = mpi_get_library_version
#pragma weak mpi_get_library_version__ = mpi_get_library_version
#pragma weak mpi_get_library_version_ = mpi_get_library_version
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_LIBRARY_VERSION( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_GET_LIBRARY_VERSION")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_GET_LIBRARY_VERSION")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_GET_LIBRARY_VERSION")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_LIBRARY_VERSION( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_get_library_version__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_get_library_version__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_get_library_version__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_LIBRARY_VERSION( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_get_library_version_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_get_library_version_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_get_library_version_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_GET_LIBRARY_VERSION( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_get_library_version")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_get_library_version")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_get_library_version")));
extern FORT_DLL_SPEC void FORT_CALL mpi_get_library_version( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_LIBRARY_VERSION( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_library_version__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_library_version_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_library_version( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_get_library_version__ = PMPI_GET_LIBRARY_VERSION
#pragma weak pmpi_get_library_version_ = PMPI_GET_LIBRARY_VERSION
#pragma weak pmpi_get_library_version = PMPI_GET_LIBRARY_VERSION
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_GET_LIBRARY_VERSION = pmpi_get_library_version__
#pragma weak pmpi_get_library_version_ = pmpi_get_library_version__
#pragma weak pmpi_get_library_version = pmpi_get_library_version__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_GET_LIBRARY_VERSION = pmpi_get_library_version_
#pragma weak pmpi_get_library_version__ = pmpi_get_library_version_
#pragma weak pmpi_get_library_version = pmpi_get_library_version_
#else
#pragma weak PMPI_GET_LIBRARY_VERSION = pmpi_get_library_version
#pragma weak pmpi_get_library_version__ = pmpi_get_library_version
#pragma weak pmpi_get_library_version_ = pmpi_get_library_version
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_library_version__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_GET_LIBRARY_VERSION")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_library_version_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_GET_LIBRARY_VERSION")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_library_version( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_GET_LIBRARY_VERSION")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_LIBRARY_VERSION( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_library_version_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_library_version( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_LIBRARY_VERSION( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_library_version__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_library_version( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_GET_LIBRARY_VERSION( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_library_version__( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_get_library_version_( char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_get_library_version")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_get_library_version_ PMPI_GET_LIBRARY_VERSION
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_get_library_version_ pmpi_get_library_version__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_get_library_version_ pmpi_get_library_version
#else
#define mpi_get_library_version_ pmpi_get_library_version_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Get_library_version
#define MPI_Get_library_version PMPI_Get_library_version
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_get_library_version_ MPI_GET_LIBRARY_VERSION
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_get_library_version_ mpi_get_library_version__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_get_library_version_ mpi_get_library_version
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_get_library_version_ ( char *v1 FORT_MIXED_LEN(d1), MPI_Fint *v2, MPI_Fint *ierr FORT_END_LEN(d1) ){
    char *p1;
    p1 = (char *)malloc(d1 + 1);
    *ierr = MPI_Get_library_version( p1, v2 );

    if (!*ierr) {char *p = v1, *pc=p1;
        while (*pc) {*p++ = *pc++;}
        while ((p-v1) < d1) { *p++ = ' '; }
    }
    free( p1 );
}
