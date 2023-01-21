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
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CLOSE( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close_( MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_FILE_CLOSE = PMPI_FILE_CLOSE
#pragma weak mpi_file_close__ = PMPI_FILE_CLOSE
#pragma weak mpi_file_close_ = PMPI_FILE_CLOSE
#pragma weak mpi_file_close = PMPI_FILE_CLOSE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FILE_CLOSE = pmpi_file_close__
#pragma weak mpi_file_close__ = pmpi_file_close__
#pragma weak mpi_file_close_ = pmpi_file_close__
#pragma weak mpi_file_close = pmpi_file_close__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FILE_CLOSE = pmpi_file_close_
#pragma weak mpi_file_close__ = pmpi_file_close_
#pragma weak mpi_file_close_ = pmpi_file_close_
#pragma weak mpi_file_close = pmpi_file_close_
#else
#pragma weak MPI_FILE_CLOSE = pmpi_file_close
#pragma weak mpi_file_close__ = pmpi_file_close
#pragma weak mpi_file_close_ = pmpi_file_close
#pragma weak mpi_file_close = pmpi_file_close
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CLOSE( MPI_Fint *, MPI_Fint * );

#pragma weak MPI_FILE_CLOSE = PMPI_FILE_CLOSE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close__( MPI_Fint *, MPI_Fint * );

#pragma weak mpi_file_close__ = pmpi_file_close__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close( MPI_Fint *, MPI_Fint * );

#pragma weak mpi_file_close = pmpi_file_close
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close_( MPI_Fint *, MPI_Fint * );

#pragma weak mpi_file_close_ = pmpi_file_close_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_FILE_CLOSE  MPI_FILE_CLOSE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_close__  mpi_file_close__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_close  mpi_file_close
#else
#pragma _HP_SECONDARY_DEF pmpi_file_close_  mpi_file_close_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_FILE_CLOSE as PMPI_FILE_CLOSE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_file_close__ as pmpi_file_close__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_file_close as pmpi_file_close
#else
#pragma _CRI duplicate mpi_file_close_ as pmpi_file_close_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CLOSE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_CLOSE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_CLOSE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_CLOSE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_CLOSE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CLOSE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CLOSE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CLOSE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CLOSE( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close_( MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_file_close__ = MPI_FILE_CLOSE
#pragma weak mpi_file_close_ = MPI_FILE_CLOSE
#pragma weak mpi_file_close = MPI_FILE_CLOSE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FILE_CLOSE = mpi_file_close__
#pragma weak mpi_file_close_ = mpi_file_close__
#pragma weak mpi_file_close = mpi_file_close__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FILE_CLOSE = mpi_file_close_
#pragma weak mpi_file_close__ = mpi_file_close_
#pragma weak mpi_file_close = mpi_file_close_
#else
#pragma weak MPI_FILE_CLOSE = mpi_file_close
#pragma weak mpi_file_close__ = mpi_file_close
#pragma weak mpi_file_close_ = mpi_file_close
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CLOSE( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_CLOSE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_CLOSE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_CLOSE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CLOSE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_close__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close__( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_close__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_close__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CLOSE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_close_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_close_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close_( MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_close_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_CLOSE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_close")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_close")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_close")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_close( MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_CLOSE( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_close__( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_close_( MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_close( MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_file_close__ = PMPI_FILE_CLOSE
#pragma weak pmpi_file_close_ = PMPI_FILE_CLOSE
#pragma weak pmpi_file_close = PMPI_FILE_CLOSE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_FILE_CLOSE = pmpi_file_close__
#pragma weak pmpi_file_close_ = pmpi_file_close__
#pragma weak pmpi_file_close = pmpi_file_close__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_FILE_CLOSE = pmpi_file_close_
#pragma weak pmpi_file_close__ = pmpi_file_close_
#pragma weak pmpi_file_close = pmpi_file_close_
#else
#pragma weak PMPI_FILE_CLOSE = pmpi_file_close
#pragma weak pmpi_file_close__ = pmpi_file_close
#pragma weak pmpi_file_close_ = pmpi_file_close
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_close__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_CLOSE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_close_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_CLOSE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_close( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_CLOSE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_CLOSE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_close_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_close( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_CLOSE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_close__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_close( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_CLOSE( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_close__( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_close_( MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_close")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_file_close_ PMPI_FILE_CLOSE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_close_ pmpi_file_close__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_close_ pmpi_file_close
#else
#define mpi_file_close_ pmpi_file_close_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_File_close
#define MPI_File_close PMPI_File_close
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_file_close_ MPI_FILE_CLOSE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_close_ mpi_file_close__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_close_ mpi_file_close
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_file_close_ ( MPI_Fint *v1, MPI_Fint *ierr ){
#ifdef MPI_MODE_RDONLY
    MPI_File l1 = MPI_File_f2c(*v1);
    *ierr = MPI_File_close( &l1 );
    *v1 = MPI_File_c2f(l1);
#else
*ierr = MPI_ERR_INTERN;
#endif
}
