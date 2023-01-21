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
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_LB( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_TYPE_LB = PMPI_TYPE_LB
#pragma weak mpi_type_lb__ = PMPI_TYPE_LB
#pragma weak mpi_type_lb_ = PMPI_TYPE_LB
#pragma weak mpi_type_lb = PMPI_TYPE_LB
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TYPE_LB = pmpi_type_lb__
#pragma weak mpi_type_lb__ = pmpi_type_lb__
#pragma weak mpi_type_lb_ = pmpi_type_lb__
#pragma weak mpi_type_lb = pmpi_type_lb__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TYPE_LB = pmpi_type_lb_
#pragma weak mpi_type_lb__ = pmpi_type_lb_
#pragma weak mpi_type_lb_ = pmpi_type_lb_
#pragma weak mpi_type_lb = pmpi_type_lb_
#else
#pragma weak MPI_TYPE_LB = pmpi_type_lb
#pragma weak mpi_type_lb__ = pmpi_type_lb
#pragma weak mpi_type_lb_ = pmpi_type_lb
#pragma weak mpi_type_lb = pmpi_type_lb
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_LB( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_TYPE_LB = PMPI_TYPE_LB
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb__( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_type_lb__ = pmpi_type_lb__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_type_lb = pmpi_type_lb
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_type_lb_ = pmpi_type_lb_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_TYPE_LB  MPI_TYPE_LB
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_type_lb__  mpi_type_lb__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_type_lb  mpi_type_lb
#else
#pragma _HP_SECONDARY_DEF pmpi_type_lb_  mpi_type_lb_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_TYPE_LB as PMPI_TYPE_LB
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_type_lb__ as pmpi_type_lb__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_type_lb as pmpi_type_lb
#else
#pragma _CRI duplicate mpi_type_lb_ as pmpi_type_lb_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_LB( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_LB")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_LB")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_LB")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_LB")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_LB( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_LB( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_LB( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_LB( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_type_lb__ = MPI_TYPE_LB
#pragma weak mpi_type_lb_ = MPI_TYPE_LB
#pragma weak mpi_type_lb = MPI_TYPE_LB
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TYPE_LB = mpi_type_lb__
#pragma weak mpi_type_lb_ = mpi_type_lb__
#pragma weak mpi_type_lb = mpi_type_lb__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TYPE_LB = mpi_type_lb_
#pragma weak mpi_type_lb__ = mpi_type_lb_
#pragma weak mpi_type_lb = mpi_type_lb_
#else
#pragma weak MPI_TYPE_LB = mpi_type_lb
#pragma weak mpi_type_lb__ = mpi_type_lb
#pragma weak mpi_type_lb_ = mpi_type_lb
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_LB( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_LB")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_LB")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_LB")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_LB( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_lb__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_lb__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_lb__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_LB( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_lb_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_lb_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_lb_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_LB( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_lb")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_lb")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_lb")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_lb( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_LB( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_lb__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_lb_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_lb( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_type_lb__ = PMPI_TYPE_LB
#pragma weak pmpi_type_lb_ = PMPI_TYPE_LB
#pragma weak pmpi_type_lb = PMPI_TYPE_LB
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_TYPE_LB = pmpi_type_lb__
#pragma weak pmpi_type_lb_ = pmpi_type_lb__
#pragma weak pmpi_type_lb = pmpi_type_lb__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_TYPE_LB = pmpi_type_lb_
#pragma weak pmpi_type_lb__ = pmpi_type_lb_
#pragma weak pmpi_type_lb = pmpi_type_lb_
#else
#pragma weak PMPI_TYPE_LB = pmpi_type_lb
#pragma weak pmpi_type_lb__ = pmpi_type_lb
#pragma weak pmpi_type_lb_ = pmpi_type_lb
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_lb__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_LB")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_lb_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_LB")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_lb( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_LB")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_LB( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_lb_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_lb( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_LB( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_lb__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_lb( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_LB( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_lb__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_lb_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_lb")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_type_lb_ PMPI_TYPE_LB
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_type_lb_ pmpi_type_lb__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_type_lb_ pmpi_type_lb
#else
#define mpi_type_lb_ pmpi_type_lb_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Type_lb
#define MPI_Type_lb PMPI_Type_lb
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_type_lb_ MPI_TYPE_LB
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_type_lb_ mpi_type_lb__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_type_lb_ mpi_type_lb
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_type_lb_ ( MPI_Fint *v1, MPI_Fint * v2, MPI_Fint *ierr ){
    MPI_Aint l2;
    *ierr = MPI_Type_lb( (MPI_Datatype)(*v1), &l2 );
    if (*ierr == MPI_SUCCESS) *v2 = (MPI_Fint)(l2);
}
