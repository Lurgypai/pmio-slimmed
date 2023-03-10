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
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_PREALLOCATE( MPI_Fint *, MPI_Offset *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate__( MPI_Fint *, MPI_Offset *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate( MPI_Fint *, MPI_Offset *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate_( MPI_Fint *, MPI_Offset *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_FILE_PREALLOCATE = PMPI_FILE_PREALLOCATE
#pragma weak mpi_file_preallocate__ = PMPI_FILE_PREALLOCATE
#pragma weak mpi_file_preallocate_ = PMPI_FILE_PREALLOCATE
#pragma weak mpi_file_preallocate = PMPI_FILE_PREALLOCATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FILE_PREALLOCATE = pmpi_file_preallocate__
#pragma weak mpi_file_preallocate__ = pmpi_file_preallocate__
#pragma weak mpi_file_preallocate_ = pmpi_file_preallocate__
#pragma weak mpi_file_preallocate = pmpi_file_preallocate__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FILE_PREALLOCATE = pmpi_file_preallocate_
#pragma weak mpi_file_preallocate__ = pmpi_file_preallocate_
#pragma weak mpi_file_preallocate_ = pmpi_file_preallocate_
#pragma weak mpi_file_preallocate = pmpi_file_preallocate_
#else
#pragma weak MPI_FILE_PREALLOCATE = pmpi_file_preallocate
#pragma weak mpi_file_preallocate__ = pmpi_file_preallocate
#pragma weak mpi_file_preallocate_ = pmpi_file_preallocate
#pragma weak mpi_file_preallocate = pmpi_file_preallocate
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_PREALLOCATE( MPI_Fint *, MPI_Offset *, MPI_Fint * );

#pragma weak MPI_FILE_PREALLOCATE = PMPI_FILE_PREALLOCATE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate__( MPI_Fint *, MPI_Offset *, MPI_Fint * );

#pragma weak mpi_file_preallocate__ = pmpi_file_preallocate__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate( MPI_Fint *, MPI_Offset *, MPI_Fint * );

#pragma weak mpi_file_preallocate = pmpi_file_preallocate
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate_( MPI_Fint *, MPI_Offset *, MPI_Fint * );

#pragma weak mpi_file_preallocate_ = pmpi_file_preallocate_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_FILE_PREALLOCATE  MPI_FILE_PREALLOCATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_preallocate__  mpi_file_preallocate__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_preallocate  mpi_file_preallocate
#else
#pragma _HP_SECONDARY_DEF pmpi_file_preallocate_  mpi_file_preallocate_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_FILE_PREALLOCATE as PMPI_FILE_PREALLOCATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_file_preallocate__ as pmpi_file_preallocate__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_file_preallocate as pmpi_file_preallocate
#else
#pragma _CRI duplicate mpi_file_preallocate_ as pmpi_file_preallocate_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_PREALLOCATE( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_PREALLOCATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate__( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_PREALLOCATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate_( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_PREALLOCATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_PREALLOCATE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_PREALLOCATE( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate__( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate_( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_PREALLOCATE( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate__( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate_( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_PREALLOCATE( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate__( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate_( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_PREALLOCATE( MPI_Fint *, MPI_Offset *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate__( MPI_Fint *, MPI_Offset *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate( MPI_Fint *, MPI_Offset *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate_( MPI_Fint *, MPI_Offset *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_file_preallocate__ = MPI_FILE_PREALLOCATE
#pragma weak mpi_file_preallocate_ = MPI_FILE_PREALLOCATE
#pragma weak mpi_file_preallocate = MPI_FILE_PREALLOCATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FILE_PREALLOCATE = mpi_file_preallocate__
#pragma weak mpi_file_preallocate_ = mpi_file_preallocate__
#pragma weak mpi_file_preallocate = mpi_file_preallocate__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FILE_PREALLOCATE = mpi_file_preallocate_
#pragma weak mpi_file_preallocate__ = mpi_file_preallocate_
#pragma weak mpi_file_preallocate = mpi_file_preallocate_
#else
#pragma weak MPI_FILE_PREALLOCATE = mpi_file_preallocate
#pragma weak mpi_file_preallocate__ = mpi_file_preallocate
#pragma weak mpi_file_preallocate_ = mpi_file_preallocate
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_PREALLOCATE( MPI_Fint *, MPI_Offset *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate__( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_PREALLOCATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate_( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_PREALLOCATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_PREALLOCATE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_PREALLOCATE( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_preallocate__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate__( MPI_Fint *, MPI_Offset *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate_( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_preallocate__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_preallocate__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_PREALLOCATE( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_preallocate_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate__( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_preallocate_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate_( MPI_Fint *, MPI_Offset *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_preallocate_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_PREALLOCATE( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_preallocate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate__( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_preallocate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate_( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_preallocate")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate( MPI_Fint *, MPI_Offset *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_PREALLOCATE( MPI_Fint *, MPI_Offset *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_preallocate__( MPI_Fint *, MPI_Offset *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_preallocate_( MPI_Fint *, MPI_Offset *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_preallocate( MPI_Fint *, MPI_Offset *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_file_preallocate__ = PMPI_FILE_PREALLOCATE
#pragma weak pmpi_file_preallocate_ = PMPI_FILE_PREALLOCATE
#pragma weak pmpi_file_preallocate = PMPI_FILE_PREALLOCATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_FILE_PREALLOCATE = pmpi_file_preallocate__
#pragma weak pmpi_file_preallocate_ = pmpi_file_preallocate__
#pragma weak pmpi_file_preallocate = pmpi_file_preallocate__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_FILE_PREALLOCATE = pmpi_file_preallocate_
#pragma weak pmpi_file_preallocate__ = pmpi_file_preallocate_
#pragma weak pmpi_file_preallocate = pmpi_file_preallocate_
#else
#pragma weak PMPI_FILE_PREALLOCATE = pmpi_file_preallocate
#pragma weak pmpi_file_preallocate__ = pmpi_file_preallocate
#pragma weak pmpi_file_preallocate_ = pmpi_file_preallocate
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_preallocate__( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_PREALLOCATE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_preallocate_( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_PREALLOCATE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_preallocate( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_PREALLOCATE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_PREALLOCATE( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_preallocate_( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_preallocate( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_PREALLOCATE( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_preallocate__( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_preallocate( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_PREALLOCATE( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_preallocate__( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_preallocate_( MPI_Fint *, MPI_Offset *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_preallocate")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_file_preallocate_ PMPI_FILE_PREALLOCATE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_preallocate_ pmpi_file_preallocate__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_preallocate_ pmpi_file_preallocate
#else
#define mpi_file_preallocate_ pmpi_file_preallocate_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_File_preallocate
#define MPI_File_preallocate PMPI_File_preallocate
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_file_preallocate_ MPI_FILE_PREALLOCATE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_preallocate_ mpi_file_preallocate__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_preallocate_ mpi_file_preallocate
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_file_preallocate_ ( MPI_Fint *v1, MPI_Offset *v2, MPI_Fint *ierr ){
#ifdef MPI_MODE_RDONLY
    *ierr = MPI_File_preallocate( MPI_File_f2c(*v1), (MPI_Offset)*v2 );
#else
*ierr = MPI_ERR_INTERN;
#endif
}
