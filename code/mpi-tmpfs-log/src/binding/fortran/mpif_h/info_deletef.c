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
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_DELETE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_INFO_DELETE = PMPI_INFO_DELETE
#pragma weak mpi_info_delete__ = PMPI_INFO_DELETE
#pragma weak mpi_info_delete_ = PMPI_INFO_DELETE
#pragma weak mpi_info_delete = PMPI_INFO_DELETE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INFO_DELETE = pmpi_info_delete__
#pragma weak mpi_info_delete__ = pmpi_info_delete__
#pragma weak mpi_info_delete_ = pmpi_info_delete__
#pragma weak mpi_info_delete = pmpi_info_delete__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INFO_DELETE = pmpi_info_delete_
#pragma weak mpi_info_delete__ = pmpi_info_delete_
#pragma weak mpi_info_delete_ = pmpi_info_delete_
#pragma weak mpi_info_delete = pmpi_info_delete_
#else
#pragma weak MPI_INFO_DELETE = pmpi_info_delete
#pragma weak mpi_info_delete__ = pmpi_info_delete
#pragma weak mpi_info_delete_ = pmpi_info_delete
#pragma weak mpi_info_delete = pmpi_info_delete
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_DELETE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak MPI_INFO_DELETE = PMPI_INFO_DELETE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_info_delete__ = pmpi_info_delete__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_info_delete = pmpi_info_delete
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_info_delete_ = pmpi_info_delete_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_INFO_DELETE  MPI_INFO_DELETE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_info_delete__  mpi_info_delete__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_info_delete  mpi_info_delete
#else
#pragma _HP_SECONDARY_DEF pmpi_info_delete_  mpi_info_delete_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_INFO_DELETE as PMPI_INFO_DELETE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_info_delete__ as pmpi_info_delete__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_info_delete as pmpi_info_delete
#else
#pragma _CRI duplicate mpi_info_delete_ as pmpi_info_delete_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_DELETE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_DELETE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_DELETE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_DELETE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_DELETE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_DELETE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_DELETE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_DELETE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_DELETE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_info_delete__ = MPI_INFO_DELETE
#pragma weak mpi_info_delete_ = MPI_INFO_DELETE
#pragma weak mpi_info_delete = MPI_INFO_DELETE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INFO_DELETE = mpi_info_delete__
#pragma weak mpi_info_delete_ = mpi_info_delete__
#pragma weak mpi_info_delete = mpi_info_delete__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INFO_DELETE = mpi_info_delete_
#pragma weak mpi_info_delete__ = mpi_info_delete_
#pragma weak mpi_info_delete = mpi_info_delete_
#else
#pragma weak MPI_INFO_DELETE = mpi_info_delete
#pragma weak mpi_info_delete__ = mpi_info_delete
#pragma weak mpi_info_delete_ = mpi_info_delete
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_DELETE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_INFO_DELETE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_INFO_DELETE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_INFO_DELETE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_DELETE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_delete__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_delete__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_delete__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_DELETE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_delete_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_delete_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_delete_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_INFO_DELETE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_delete")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_delete")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_info_delete")));
extern FORT_DLL_SPEC void FORT_CALL mpi_info_delete( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_DELETE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_delete__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_delete_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_delete( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_info_delete__ = PMPI_INFO_DELETE
#pragma weak pmpi_info_delete_ = PMPI_INFO_DELETE
#pragma weak pmpi_info_delete = PMPI_INFO_DELETE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_INFO_DELETE = pmpi_info_delete__
#pragma weak pmpi_info_delete_ = pmpi_info_delete__
#pragma weak pmpi_info_delete = pmpi_info_delete__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_INFO_DELETE = pmpi_info_delete_
#pragma weak pmpi_info_delete__ = pmpi_info_delete_
#pragma weak pmpi_info_delete = pmpi_info_delete_
#else
#pragma weak PMPI_INFO_DELETE = pmpi_info_delete
#pragma weak pmpi_info_delete__ = pmpi_info_delete
#pragma weak pmpi_info_delete_ = pmpi_info_delete
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_delete__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_DELETE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_delete_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_DELETE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_delete( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INFO_DELETE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_DELETE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_delete_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_delete( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_DELETE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_delete__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_delete( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_INFO_DELETE( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_delete__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_info_delete_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_info_delete")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_info_delete_ PMPI_INFO_DELETE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_info_delete_ pmpi_info_delete__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_info_delete_ pmpi_info_delete
#else
#define mpi_info_delete_ pmpi_info_delete_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Info_delete
#define MPI_Info_delete PMPI_Info_delete
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_info_delete_ MPI_INFO_DELETE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_info_delete_ mpi_info_delete__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_info_delete_ mpi_info_delete
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_info_delete_ ( MPI_Fint *v1, char *v2 FORT_MIXED_LEN(d2), MPI_Fint *ierr FORT_END_LEN(d2) ){
    char *p2;

    {char *p = v2 + d2 - 1;
     int  li;
        while (*p == ' ' && p > v2) p--;
        p++;
        p2 = (char *)malloc(p-v2 + 1);
        for (li=0; li<(p-v2); li++) { p2[li] = v2[li]; }
        p2[li] = 0;
    }
    *ierr = MPI_Info_delete( (MPI_Info)(*v1), p2 );
    free( p2 );
}
