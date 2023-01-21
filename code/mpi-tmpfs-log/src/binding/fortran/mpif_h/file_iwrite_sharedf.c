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
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_IWRITE_SHARED( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_FILE_IWRITE_SHARED = PMPI_FILE_IWRITE_SHARED
#pragma weak mpi_file_iwrite_shared__ = PMPI_FILE_IWRITE_SHARED
#pragma weak mpi_file_iwrite_shared_ = PMPI_FILE_IWRITE_SHARED
#pragma weak mpi_file_iwrite_shared = PMPI_FILE_IWRITE_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FILE_IWRITE_SHARED = pmpi_file_iwrite_shared__
#pragma weak mpi_file_iwrite_shared__ = pmpi_file_iwrite_shared__
#pragma weak mpi_file_iwrite_shared_ = pmpi_file_iwrite_shared__
#pragma weak mpi_file_iwrite_shared = pmpi_file_iwrite_shared__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FILE_IWRITE_SHARED = pmpi_file_iwrite_shared_
#pragma weak mpi_file_iwrite_shared__ = pmpi_file_iwrite_shared_
#pragma weak mpi_file_iwrite_shared_ = pmpi_file_iwrite_shared_
#pragma weak mpi_file_iwrite_shared = pmpi_file_iwrite_shared_
#else
#pragma weak MPI_FILE_IWRITE_SHARED = pmpi_file_iwrite_shared
#pragma weak mpi_file_iwrite_shared__ = pmpi_file_iwrite_shared
#pragma weak mpi_file_iwrite_shared_ = pmpi_file_iwrite_shared
#pragma weak mpi_file_iwrite_shared = pmpi_file_iwrite_shared
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_IWRITE_SHARED( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );

#pragma weak MPI_FILE_IWRITE_SHARED = PMPI_FILE_IWRITE_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );

#pragma weak mpi_file_iwrite_shared__ = pmpi_file_iwrite_shared__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );

#pragma weak mpi_file_iwrite_shared = pmpi_file_iwrite_shared
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );

#pragma weak mpi_file_iwrite_shared_ = pmpi_file_iwrite_shared_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_FILE_IWRITE_SHARED  MPI_FILE_IWRITE_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_iwrite_shared__  mpi_file_iwrite_shared__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_iwrite_shared  mpi_file_iwrite_shared
#else
#pragma _HP_SECONDARY_DEF pmpi_file_iwrite_shared_  mpi_file_iwrite_shared_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_FILE_IWRITE_SHARED as PMPI_FILE_IWRITE_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_file_iwrite_shared__ as pmpi_file_iwrite_shared__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_file_iwrite_shared as pmpi_file_iwrite_shared
#else
#pragma _CRI duplicate mpi_file_iwrite_shared_ as pmpi_file_iwrite_shared_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_IWRITE_SHARED( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_IWRITE_SHARED")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_IWRITE_SHARED")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_IWRITE_SHARED")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_IWRITE_SHARED")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_IWRITE_SHARED( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_IWRITE_SHARED( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_IWRITE_SHARED( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_IWRITE_SHARED( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_file_iwrite_shared__ = MPI_FILE_IWRITE_SHARED
#pragma weak mpi_file_iwrite_shared_ = MPI_FILE_IWRITE_SHARED
#pragma weak mpi_file_iwrite_shared = MPI_FILE_IWRITE_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FILE_IWRITE_SHARED = mpi_file_iwrite_shared__
#pragma weak mpi_file_iwrite_shared_ = mpi_file_iwrite_shared__
#pragma weak mpi_file_iwrite_shared = mpi_file_iwrite_shared__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FILE_IWRITE_SHARED = mpi_file_iwrite_shared_
#pragma weak mpi_file_iwrite_shared__ = mpi_file_iwrite_shared_
#pragma weak mpi_file_iwrite_shared = mpi_file_iwrite_shared_
#else
#pragma weak MPI_FILE_IWRITE_SHARED = mpi_file_iwrite_shared
#pragma weak mpi_file_iwrite_shared__ = mpi_file_iwrite_shared
#pragma weak mpi_file_iwrite_shared_ = mpi_file_iwrite_shared
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_IWRITE_SHARED( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_IWRITE_SHARED")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_IWRITE_SHARED")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_IWRITE_SHARED")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_IWRITE_SHARED( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_iwrite_shared__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_iwrite_shared__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_iwrite_shared__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_IWRITE_SHARED( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_iwrite_shared_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_iwrite_shared_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_iwrite_shared_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_IWRITE_SHARED( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_iwrite_shared")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_iwrite_shared")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("mpi_file_iwrite_shared")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_IWRITE_SHARED( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_iwrite_shared__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_iwrite_shared_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_iwrite_shared( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_file_iwrite_shared__ = PMPI_FILE_IWRITE_SHARED
#pragma weak pmpi_file_iwrite_shared_ = PMPI_FILE_IWRITE_SHARED
#pragma weak pmpi_file_iwrite_shared = PMPI_FILE_IWRITE_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_FILE_IWRITE_SHARED = pmpi_file_iwrite_shared__
#pragma weak pmpi_file_iwrite_shared_ = pmpi_file_iwrite_shared__
#pragma weak pmpi_file_iwrite_shared = pmpi_file_iwrite_shared__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_FILE_IWRITE_SHARED = pmpi_file_iwrite_shared_
#pragma weak pmpi_file_iwrite_shared__ = pmpi_file_iwrite_shared_
#pragma weak pmpi_file_iwrite_shared = pmpi_file_iwrite_shared_
#else
#pragma weak PMPI_FILE_IWRITE_SHARED = pmpi_file_iwrite_shared
#pragma weak pmpi_file_iwrite_shared__ = pmpi_file_iwrite_shared
#pragma weak pmpi_file_iwrite_shared_ = pmpi_file_iwrite_shared
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_iwrite_shared__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_IWRITE_SHARED")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_iwrite_shared_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_IWRITE_SHARED")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_iwrite_shared( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_IWRITE_SHARED")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_IWRITE_SHARED( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_iwrite_shared_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_iwrite_shared( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_IWRITE_SHARED( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_iwrite_shared__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_iwrite_shared( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_IWRITE_SHARED( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_iwrite_shared__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_iwrite_shared_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPIO_Request*, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_iwrite_shared")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_file_iwrite_shared_ PMPI_FILE_IWRITE_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_iwrite_shared_ pmpi_file_iwrite_shared__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_iwrite_shared_ pmpi_file_iwrite_shared
#else
#define mpi_file_iwrite_shared_ pmpi_file_iwrite_shared_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_File_iwrite_shared
#define MPI_File_iwrite_shared PMPI_File_iwrite_shared
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_file_iwrite_shared_ MPI_FILE_IWRITE_SHARED
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_iwrite_shared_ mpi_file_iwrite_shared__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_iwrite_shared_ mpi_file_iwrite_shared
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_file_iwrite_shared_ ( MPI_Fint *v1, void*v2, MPI_Fint *v3, MPI_Fint *v4, MPIO_Request*v5, MPI_Fint *ierr ){
#ifdef MPI_MODE_RDONLY
    if (v2 == MPIR_F_MPI_BOTTOM) v2 = MPI_BOTTOM;
    *ierr = MPI_File_iwrite_shared( MPI_File_f2c(*v1), v2, (int)*v3, (MPI_Datatype)(*v4), v5 );
#else
*ierr = MPI_ERR_INTERN;
#endif
}
