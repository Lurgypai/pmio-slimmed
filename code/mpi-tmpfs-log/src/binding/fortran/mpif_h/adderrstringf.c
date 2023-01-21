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
extern FORT_DLL_SPEC void FORT_CALL MPI_ADD_ERROR_STRING( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_ADD_ERROR_STRING = PMPI_ADD_ERROR_STRING
#pragma weak mpi_add_error_string__ = PMPI_ADD_ERROR_STRING
#pragma weak mpi_add_error_string_ = PMPI_ADD_ERROR_STRING
#pragma weak mpi_add_error_string = PMPI_ADD_ERROR_STRING
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ADD_ERROR_STRING = pmpi_add_error_string__
#pragma weak mpi_add_error_string__ = pmpi_add_error_string__
#pragma weak mpi_add_error_string_ = pmpi_add_error_string__
#pragma weak mpi_add_error_string = pmpi_add_error_string__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ADD_ERROR_STRING = pmpi_add_error_string_
#pragma weak mpi_add_error_string__ = pmpi_add_error_string_
#pragma weak mpi_add_error_string_ = pmpi_add_error_string_
#pragma weak mpi_add_error_string = pmpi_add_error_string_
#else
#pragma weak MPI_ADD_ERROR_STRING = pmpi_add_error_string
#pragma weak mpi_add_error_string__ = pmpi_add_error_string
#pragma weak mpi_add_error_string_ = pmpi_add_error_string
#pragma weak mpi_add_error_string = pmpi_add_error_string
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ADD_ERROR_STRING( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak MPI_ADD_ERROR_STRING = PMPI_ADD_ERROR_STRING
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_add_error_string__ = pmpi_add_error_string__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_add_error_string = pmpi_add_error_string
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_add_error_string_ = pmpi_add_error_string_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_ADD_ERROR_STRING  MPI_ADD_ERROR_STRING
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_add_error_string__  mpi_add_error_string__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_add_error_string  mpi_add_error_string
#else
#pragma _HP_SECONDARY_DEF pmpi_add_error_string_  mpi_add_error_string_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_ADD_ERROR_STRING as PMPI_ADD_ERROR_STRING
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_add_error_string__ as pmpi_add_error_string__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_add_error_string as pmpi_add_error_string
#else
#pragma _CRI duplicate mpi_add_error_string_ as pmpi_add_error_string_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ADD_ERROR_STRING( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_ADD_ERROR_STRING")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_ADD_ERROR_STRING")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_ADD_ERROR_STRING")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_ADD_ERROR_STRING")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ADD_ERROR_STRING( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ADD_ERROR_STRING( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ADD_ERROR_STRING( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_ADD_ERROR_STRING( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_add_error_string__ = MPI_ADD_ERROR_STRING
#pragma weak mpi_add_error_string_ = MPI_ADD_ERROR_STRING
#pragma weak mpi_add_error_string = MPI_ADD_ERROR_STRING
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ADD_ERROR_STRING = mpi_add_error_string__
#pragma weak mpi_add_error_string_ = mpi_add_error_string__
#pragma weak mpi_add_error_string = mpi_add_error_string__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ADD_ERROR_STRING = mpi_add_error_string_
#pragma weak mpi_add_error_string__ = mpi_add_error_string_
#pragma weak mpi_add_error_string = mpi_add_error_string_
#else
#pragma weak MPI_ADD_ERROR_STRING = mpi_add_error_string
#pragma weak mpi_add_error_string__ = mpi_add_error_string
#pragma weak mpi_add_error_string_ = mpi_add_error_string
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ADD_ERROR_STRING( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_ADD_ERROR_STRING")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_ADD_ERROR_STRING")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_ADD_ERROR_STRING")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ADD_ERROR_STRING( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_add_error_string__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_add_error_string__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_add_error_string__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ADD_ERROR_STRING( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_add_error_string_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_add_error_string_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_add_error_string_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ADD_ERROR_STRING( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_add_error_string")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_add_error_string")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_add_error_string")));
extern FORT_DLL_SPEC void FORT_CALL mpi_add_error_string( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_ADD_ERROR_STRING( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_add_error_string__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_add_error_string_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_add_error_string( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_add_error_string__ = PMPI_ADD_ERROR_STRING
#pragma weak pmpi_add_error_string_ = PMPI_ADD_ERROR_STRING
#pragma weak pmpi_add_error_string = PMPI_ADD_ERROR_STRING
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_ADD_ERROR_STRING = pmpi_add_error_string__
#pragma weak pmpi_add_error_string_ = pmpi_add_error_string__
#pragma weak pmpi_add_error_string = pmpi_add_error_string__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_ADD_ERROR_STRING = pmpi_add_error_string_
#pragma weak pmpi_add_error_string__ = pmpi_add_error_string_
#pragma weak pmpi_add_error_string = pmpi_add_error_string_
#else
#pragma weak PMPI_ADD_ERROR_STRING = pmpi_add_error_string
#pragma weak pmpi_add_error_string__ = pmpi_add_error_string
#pragma weak pmpi_add_error_string_ = pmpi_add_error_string
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_add_error_string__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_ADD_ERROR_STRING")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_add_error_string_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_ADD_ERROR_STRING")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_add_error_string( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_ADD_ERROR_STRING")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ADD_ERROR_STRING( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_add_error_string_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_add_error_string( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ADD_ERROR_STRING( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_add_error_string__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_add_error_string( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_ADD_ERROR_STRING( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_add_error_string__( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_add_error_string_( MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_add_error_string")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_add_error_string_ PMPI_ADD_ERROR_STRING
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_add_error_string_ pmpi_add_error_string__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_add_error_string_ pmpi_add_error_string
#else
#define mpi_add_error_string_ pmpi_add_error_string_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Add_error_string
#define MPI_Add_error_string PMPI_Add_error_string
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_add_error_string_ MPI_ADD_ERROR_STRING
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_add_error_string_ mpi_add_error_string__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_add_error_string_ mpi_add_error_string
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_add_error_string_ ( MPI_Fint *v1, char *v2 FORT_MIXED_LEN(d2), MPI_Fint *ierr FORT_END_LEN(d2) ){
    char *p2;

    {char *p = v2 + d2 - 1;
     int  li;
        while (*p == ' ' && p > v2) p--;
        p++;
        p2 = (char *)malloc(p-v2 + 1);
        for (li=0; li<(p-v2); li++) { p2[li] = v2[li]; }
        p2[li] = 0;
    }
    *ierr = MPI_Add_error_string( (int)*v1, p2 );
    free( p2 );
}
