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
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLTOALLW_INIT( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_ALLTOALLW_INIT = PMPI_ALLTOALLW_INIT
#pragma weak mpi_alltoallw_init__ = PMPI_ALLTOALLW_INIT
#pragma weak mpi_alltoallw_init_ = PMPI_ALLTOALLW_INIT
#pragma weak mpi_alltoallw_init = PMPI_ALLTOALLW_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ALLTOALLW_INIT = pmpi_alltoallw_init__
#pragma weak mpi_alltoallw_init__ = pmpi_alltoallw_init__
#pragma weak mpi_alltoallw_init_ = pmpi_alltoallw_init__
#pragma weak mpi_alltoallw_init = pmpi_alltoallw_init__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ALLTOALLW_INIT = pmpi_alltoallw_init_
#pragma weak mpi_alltoallw_init__ = pmpi_alltoallw_init_
#pragma weak mpi_alltoallw_init_ = pmpi_alltoallw_init_
#pragma weak mpi_alltoallw_init = pmpi_alltoallw_init_
#else
#pragma weak MPI_ALLTOALLW_INIT = pmpi_alltoallw_init
#pragma weak mpi_alltoallw_init__ = pmpi_alltoallw_init
#pragma weak mpi_alltoallw_init_ = pmpi_alltoallw_init
#pragma weak mpi_alltoallw_init = pmpi_alltoallw_init
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLTOALLW_INIT( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_ALLTOALLW_INIT = PMPI_ALLTOALLW_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_alltoallw_init__ = pmpi_alltoallw_init__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_alltoallw_init = pmpi_alltoallw_init
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_alltoallw_init_ = pmpi_alltoallw_init_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_ALLTOALLW_INIT  MPI_ALLTOALLW_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_alltoallw_init__  mpi_alltoallw_init__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_alltoallw_init  mpi_alltoallw_init
#else
#pragma _HP_SECONDARY_DEF pmpi_alltoallw_init_  mpi_alltoallw_init_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_ALLTOALLW_INIT as PMPI_ALLTOALLW_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_alltoallw_init__ as pmpi_alltoallw_init__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_alltoallw_init as pmpi_alltoallw_init
#else
#pragma _CRI duplicate mpi_alltoallw_init_ as pmpi_alltoallw_init_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLTOALLW_INIT( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ALLTOALLW_INIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ALLTOALLW_INIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ALLTOALLW_INIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ALLTOALLW_INIT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLTOALLW_INIT( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLTOALLW_INIT( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLTOALLW_INIT( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLTOALLW_INIT( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_alltoallw_init__ = MPI_ALLTOALLW_INIT
#pragma weak mpi_alltoallw_init_ = MPI_ALLTOALLW_INIT
#pragma weak mpi_alltoallw_init = MPI_ALLTOALLW_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ALLTOALLW_INIT = mpi_alltoallw_init__
#pragma weak mpi_alltoallw_init_ = mpi_alltoallw_init__
#pragma weak mpi_alltoallw_init = mpi_alltoallw_init__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ALLTOALLW_INIT = mpi_alltoallw_init_
#pragma weak mpi_alltoallw_init__ = mpi_alltoallw_init_
#pragma weak mpi_alltoallw_init = mpi_alltoallw_init_
#else
#pragma weak MPI_ALLTOALLW_INIT = mpi_alltoallw_init
#pragma weak mpi_alltoallw_init__ = mpi_alltoallw_init
#pragma weak mpi_alltoallw_init_ = mpi_alltoallw_init
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLTOALLW_INIT( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ALLTOALLW_INIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ALLTOALLW_INIT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ALLTOALLW_INIT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLTOALLW_INIT( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_alltoallw_init__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_alltoallw_init__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_alltoallw_init__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLTOALLW_INIT( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_alltoallw_init_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_alltoallw_init_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_alltoallw_init_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ALLTOALLW_INIT( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_alltoallw_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_alltoallw_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_alltoallw_init")));
extern FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_ALLTOALLW_INIT( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_alltoallw_init__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_alltoallw_init_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_alltoallw_init( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_alltoallw_init__ = PMPI_ALLTOALLW_INIT
#pragma weak pmpi_alltoallw_init_ = PMPI_ALLTOALLW_INIT
#pragma weak pmpi_alltoallw_init = PMPI_ALLTOALLW_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_ALLTOALLW_INIT = pmpi_alltoallw_init__
#pragma weak pmpi_alltoallw_init_ = pmpi_alltoallw_init__
#pragma weak pmpi_alltoallw_init = pmpi_alltoallw_init__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_ALLTOALLW_INIT = pmpi_alltoallw_init_
#pragma weak pmpi_alltoallw_init__ = pmpi_alltoallw_init_
#pragma weak pmpi_alltoallw_init = pmpi_alltoallw_init_
#else
#pragma weak PMPI_ALLTOALLW_INIT = pmpi_alltoallw_init
#pragma weak pmpi_alltoallw_init__ = pmpi_alltoallw_init
#pragma weak pmpi_alltoallw_init_ = pmpi_alltoallw_init
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_alltoallw_init__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ALLTOALLW_INIT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_alltoallw_init_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ALLTOALLW_INIT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_alltoallw_init( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ALLTOALLW_INIT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ALLTOALLW_INIT( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_alltoallw_init_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_alltoallw_init( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ALLTOALLW_INIT( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_alltoallw_init__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_alltoallw_init( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_ALLTOALLW_INIT( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_alltoallw_init__( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_alltoallw_init_( void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], void*, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_alltoallw_init")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_alltoallw_init_ PMPI_ALLTOALLW_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_alltoallw_init_ pmpi_alltoallw_init__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_alltoallw_init_ pmpi_alltoallw_init
#else
#define mpi_alltoallw_init_ pmpi_alltoallw_init_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Alltoallw_init
#define MPI_Alltoallw_init PMPI_Alltoallw_init
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_alltoallw_init_ MPI_ALLTOALLW_INIT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_alltoallw_init_ mpi_alltoallw_init__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_alltoallw_init_ mpi_alltoallw_init
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_alltoallw_init_ ( void*v1, MPI_Fint v2[], MPI_Fint v3[], MPI_Fint v4[], void*v5, MPI_Fint v6[], MPI_Fint v7[], MPI_Fint v8[], MPI_Fint *v9, MPI_Fint *v10, MPI_Fint *v11, MPI_Fint *ierr ){
    if (v1 == MPIR_F_MPI_BOTTOM) v1 = MPI_BOTTOM;
    if (v5 == MPIR_F_MPI_BOTTOM) v5 = MPI_BOTTOM;
    *ierr = MPI_Alltoallw_init( v1, v2, v3, v4, v5, v6, v7, v8, (MPI_Comm)(*v9), (MPI_Info)(*v10), (MPI_Request *)(v11) );
}
