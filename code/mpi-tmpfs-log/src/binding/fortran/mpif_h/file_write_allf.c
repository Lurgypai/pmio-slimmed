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
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_WRITE_ALL( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_FILE_WRITE_ALL = PMPI_FILE_WRITE_ALL
#pragma weak mpi_file_write_all__ = PMPI_FILE_WRITE_ALL
#pragma weak mpi_file_write_all_ = PMPI_FILE_WRITE_ALL
#pragma weak mpi_file_write_all = PMPI_FILE_WRITE_ALL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FILE_WRITE_ALL = pmpi_file_write_all__
#pragma weak mpi_file_write_all__ = pmpi_file_write_all__
#pragma weak mpi_file_write_all_ = pmpi_file_write_all__
#pragma weak mpi_file_write_all = pmpi_file_write_all__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FILE_WRITE_ALL = pmpi_file_write_all_
#pragma weak mpi_file_write_all__ = pmpi_file_write_all_
#pragma weak mpi_file_write_all_ = pmpi_file_write_all_
#pragma weak mpi_file_write_all = pmpi_file_write_all_
#else
#pragma weak MPI_FILE_WRITE_ALL = pmpi_file_write_all
#pragma weak mpi_file_write_all__ = pmpi_file_write_all
#pragma weak mpi_file_write_all_ = pmpi_file_write_all
#pragma weak mpi_file_write_all = pmpi_file_write_all
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_WRITE_ALL( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_FILE_WRITE_ALL = PMPI_FILE_WRITE_ALL
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_file_write_all__ = pmpi_file_write_all__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_file_write_all = pmpi_file_write_all
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_file_write_all_ = pmpi_file_write_all_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_FILE_WRITE_ALL  MPI_FILE_WRITE_ALL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_write_all__  mpi_file_write_all__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_write_all  mpi_file_write_all
#else
#pragma _HP_SECONDARY_DEF pmpi_file_write_all_  mpi_file_write_all_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_FILE_WRITE_ALL as PMPI_FILE_WRITE_ALL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_file_write_all__ as pmpi_file_write_all__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_file_write_all as pmpi_file_write_all
#else
#pragma _CRI duplicate mpi_file_write_all_ as pmpi_file_write_all_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_WRITE_ALL( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_WRITE_ALL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_WRITE_ALL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_WRITE_ALL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_WRITE_ALL")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_WRITE_ALL( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_WRITE_ALL( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_WRITE_ALL( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_WRITE_ALL( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_file_write_all__ = MPI_FILE_WRITE_ALL
#pragma weak mpi_file_write_all_ = MPI_FILE_WRITE_ALL
#pragma weak mpi_file_write_all = MPI_FILE_WRITE_ALL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FILE_WRITE_ALL = mpi_file_write_all__
#pragma weak mpi_file_write_all_ = mpi_file_write_all__
#pragma weak mpi_file_write_all = mpi_file_write_all__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FILE_WRITE_ALL = mpi_file_write_all_
#pragma weak mpi_file_write_all__ = mpi_file_write_all_
#pragma weak mpi_file_write_all = mpi_file_write_all_
#else
#pragma weak MPI_FILE_WRITE_ALL = mpi_file_write_all
#pragma weak mpi_file_write_all__ = mpi_file_write_all
#pragma weak mpi_file_write_all_ = mpi_file_write_all
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_WRITE_ALL( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_WRITE_ALL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_WRITE_ALL")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_FILE_WRITE_ALL")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_WRITE_ALL( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_write_all__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_write_all__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_write_all__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_WRITE_ALL( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_write_all_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_write_all_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_write_all_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_WRITE_ALL( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_write_all")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_write_all")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_file_write_all")));
extern FORT_DLL_SPEC void FORT_CALL mpi_file_write_all( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_WRITE_ALL( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_write_all__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_write_all_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_write_all( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_file_write_all__ = PMPI_FILE_WRITE_ALL
#pragma weak pmpi_file_write_all_ = PMPI_FILE_WRITE_ALL
#pragma weak pmpi_file_write_all = PMPI_FILE_WRITE_ALL
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_FILE_WRITE_ALL = pmpi_file_write_all__
#pragma weak pmpi_file_write_all_ = pmpi_file_write_all__
#pragma weak pmpi_file_write_all = pmpi_file_write_all__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_FILE_WRITE_ALL = pmpi_file_write_all_
#pragma weak pmpi_file_write_all__ = pmpi_file_write_all_
#pragma weak pmpi_file_write_all = pmpi_file_write_all_
#else
#pragma weak PMPI_FILE_WRITE_ALL = pmpi_file_write_all
#pragma weak pmpi_file_write_all__ = pmpi_file_write_all
#pragma weak pmpi_file_write_all_ = pmpi_file_write_all
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_write_all__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_WRITE_ALL")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_write_all_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_WRITE_ALL")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_write_all( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_FILE_WRITE_ALL")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_WRITE_ALL( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_write_all_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_write_all( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_WRITE_ALL( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_write_all__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_write_all( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_WRITE_ALL( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_write_all__( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_write_all_( MPI_Fint *, void*, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_file_write_all")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_file_write_all_ PMPI_FILE_WRITE_ALL
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_write_all_ pmpi_file_write_all__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_write_all_ pmpi_file_write_all
#else
#define mpi_file_write_all_ pmpi_file_write_all_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_File_write_all
#define MPI_File_write_all PMPI_File_write_all
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_file_write_all_ MPI_FILE_WRITE_ALL
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_write_all_ mpi_file_write_all__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_write_all_ mpi_file_write_all
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_file_write_all_ ( MPI_Fint *v1, void*v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Fint *v5, MPI_Fint *ierr ){
#ifdef MPI_MODE_RDONLY

#ifndef HAVE_MPI_F_INIT_WORKS_WITH_C
    if (MPIR_F_NeedInit){ mpirinitf_(); MPIR_F_NeedInit = 0; }
#endif

    if (v5 == MPI_F_STATUS_IGNORE) { v5 = (MPI_Fint*)MPI_STATUS_IGNORE; }
    if (v2 == MPIR_F_MPI_BOTTOM) v2 = MPI_BOTTOM;
    *ierr = MPI_File_write_all( MPI_File_f2c(*v1), v2, (int)*v3, (MPI_Datatype)(*v4), (MPI_Status *)v5 );
#else
*ierr = MPI_ERR_INTERN;
#endif
}
