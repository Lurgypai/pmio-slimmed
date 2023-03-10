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
extern FORT_DLL_SPEC void FORT_CALL MPI_IPROBE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_IPROBE = PMPI_IPROBE
#pragma weak mpi_iprobe__ = PMPI_IPROBE
#pragma weak mpi_iprobe_ = PMPI_IPROBE
#pragma weak mpi_iprobe = PMPI_IPROBE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_IPROBE = pmpi_iprobe__
#pragma weak mpi_iprobe__ = pmpi_iprobe__
#pragma weak mpi_iprobe_ = pmpi_iprobe__
#pragma weak mpi_iprobe = pmpi_iprobe__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_IPROBE = pmpi_iprobe_
#pragma weak mpi_iprobe__ = pmpi_iprobe_
#pragma weak mpi_iprobe_ = pmpi_iprobe_
#pragma weak mpi_iprobe = pmpi_iprobe_
#else
#pragma weak MPI_IPROBE = pmpi_iprobe
#pragma weak mpi_iprobe__ = pmpi_iprobe
#pragma weak mpi_iprobe_ = pmpi_iprobe
#pragma weak mpi_iprobe = pmpi_iprobe
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_IPROBE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_IPROBE = PMPI_IPROBE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_iprobe__ = pmpi_iprobe__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_iprobe = pmpi_iprobe
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_iprobe_ = pmpi_iprobe_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_IPROBE  MPI_IPROBE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_iprobe__  mpi_iprobe__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_iprobe  mpi_iprobe
#else
#pragma _HP_SECONDARY_DEF pmpi_iprobe_  mpi_iprobe_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_IPROBE as PMPI_IPROBE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_iprobe__ as pmpi_iprobe__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_iprobe as pmpi_iprobe
#else
#pragma _CRI duplicate mpi_iprobe_ as pmpi_iprobe_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_IPROBE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IPROBE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IPROBE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IPROBE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IPROBE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IPROBE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IPROBE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_IPROBE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_IPROBE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_iprobe__ = MPI_IPROBE
#pragma weak mpi_iprobe_ = MPI_IPROBE
#pragma weak mpi_iprobe = MPI_IPROBE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_IPROBE = mpi_iprobe__
#pragma weak mpi_iprobe_ = mpi_iprobe__
#pragma weak mpi_iprobe = mpi_iprobe__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_IPROBE = mpi_iprobe_
#pragma weak mpi_iprobe__ = mpi_iprobe_
#pragma weak mpi_iprobe = mpi_iprobe_
#else
#pragma weak MPI_IPROBE = mpi_iprobe
#pragma weak mpi_iprobe__ = mpi_iprobe
#pragma weak mpi_iprobe_ = mpi_iprobe
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_IPROBE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_IPROBE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_IPROBE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_IPROBE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IPROBE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iprobe__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iprobe__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iprobe__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_IPROBE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iprobe_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iprobe_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iprobe_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_IPROBE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iprobe")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iprobe")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_iprobe")));
extern FORT_DLL_SPEC void FORT_CALL mpi_iprobe( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_IPROBE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_iprobe__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_iprobe_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_iprobe( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_iprobe__ = PMPI_IPROBE
#pragma weak pmpi_iprobe_ = PMPI_IPROBE
#pragma weak pmpi_iprobe = PMPI_IPROBE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_IPROBE = pmpi_iprobe__
#pragma weak pmpi_iprobe_ = pmpi_iprobe__
#pragma weak pmpi_iprobe = pmpi_iprobe__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_IPROBE = pmpi_iprobe_
#pragma weak pmpi_iprobe__ = pmpi_iprobe_
#pragma weak pmpi_iprobe = pmpi_iprobe_
#else
#pragma weak PMPI_IPROBE = pmpi_iprobe
#pragma weak pmpi_iprobe__ = pmpi_iprobe
#pragma weak pmpi_iprobe_ = pmpi_iprobe
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_iprobe__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IPROBE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iprobe_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IPROBE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iprobe( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_IPROBE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_IPROBE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iprobe_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iprobe( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_IPROBE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iprobe__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iprobe( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_IPROBE( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iprobe__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_iprobe_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_iprobe")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_iprobe_ PMPI_IPROBE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_iprobe_ pmpi_iprobe__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_iprobe_ pmpi_iprobe
#else
#define mpi_iprobe_ pmpi_iprobe_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Iprobe
#define MPI_Iprobe PMPI_Iprobe
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_iprobe_ MPI_IPROBE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_iprobe_ mpi_iprobe__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_iprobe_ mpi_iprobe
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_iprobe_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Fint *v5, MPI_Fint *ierr ){
    int l4;

#ifndef HAVE_MPI_F_INIT_WORKS_WITH_C
    if (MPIR_F_NeedInit){ mpirinitf_(); MPIR_F_NeedInit = 0; }
#endif

    if (v5 == MPI_F_STATUS_IGNORE) { v5 = (MPI_Fint*)MPI_STATUS_IGNORE; }
    *ierr = MPI_Iprobe( (int)*v1, (int)*v2, (MPI_Comm)(*v3), &l4, (MPI_Status *)v5 );
    if (*ierr == MPI_SUCCESS) *v4 = MPII_TO_FLOG(l4);
}
