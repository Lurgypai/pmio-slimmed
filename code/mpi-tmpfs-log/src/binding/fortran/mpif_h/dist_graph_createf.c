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
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_DIST_GRAPH_CREATE = PMPI_DIST_GRAPH_CREATE
#pragma weak mpi_dist_graph_create__ = PMPI_DIST_GRAPH_CREATE
#pragma weak mpi_dist_graph_create_ = PMPI_DIST_GRAPH_CREATE
#pragma weak mpi_dist_graph_create = PMPI_DIST_GRAPH_CREATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_DIST_GRAPH_CREATE = pmpi_dist_graph_create__
#pragma weak mpi_dist_graph_create__ = pmpi_dist_graph_create__
#pragma weak mpi_dist_graph_create_ = pmpi_dist_graph_create__
#pragma weak mpi_dist_graph_create = pmpi_dist_graph_create__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_DIST_GRAPH_CREATE = pmpi_dist_graph_create_
#pragma weak mpi_dist_graph_create__ = pmpi_dist_graph_create_
#pragma weak mpi_dist_graph_create_ = pmpi_dist_graph_create_
#pragma weak mpi_dist_graph_create = pmpi_dist_graph_create_
#else
#pragma weak MPI_DIST_GRAPH_CREATE = pmpi_dist_graph_create
#pragma weak mpi_dist_graph_create__ = pmpi_dist_graph_create
#pragma weak mpi_dist_graph_create_ = pmpi_dist_graph_create
#pragma weak mpi_dist_graph_create = pmpi_dist_graph_create
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_DIST_GRAPH_CREATE = PMPI_DIST_GRAPH_CREATE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_dist_graph_create__ = pmpi_dist_graph_create__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_dist_graph_create = pmpi_dist_graph_create
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_dist_graph_create_ = pmpi_dist_graph_create_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_DIST_GRAPH_CREATE  MPI_DIST_GRAPH_CREATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_dist_graph_create__  mpi_dist_graph_create__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_dist_graph_create  mpi_dist_graph_create
#else
#pragma _HP_SECONDARY_DEF pmpi_dist_graph_create_  mpi_dist_graph_create_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_DIST_GRAPH_CREATE as PMPI_DIST_GRAPH_CREATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_dist_graph_create__ as pmpi_dist_graph_create__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_dist_graph_create as pmpi_dist_graph_create
#else
#pragma _CRI duplicate mpi_dist_graph_create_ as pmpi_dist_graph_create_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_DIST_GRAPH_CREATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_DIST_GRAPH_CREATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_DIST_GRAPH_CREATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_DIST_GRAPH_CREATE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_dist_graph_create__ = MPI_DIST_GRAPH_CREATE
#pragma weak mpi_dist_graph_create_ = MPI_DIST_GRAPH_CREATE
#pragma weak mpi_dist_graph_create = MPI_DIST_GRAPH_CREATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_DIST_GRAPH_CREATE = mpi_dist_graph_create__
#pragma weak mpi_dist_graph_create_ = mpi_dist_graph_create__
#pragma weak mpi_dist_graph_create = mpi_dist_graph_create__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_DIST_GRAPH_CREATE = mpi_dist_graph_create_
#pragma weak mpi_dist_graph_create__ = mpi_dist_graph_create_
#pragma weak mpi_dist_graph_create = mpi_dist_graph_create_
#else
#pragma weak MPI_DIST_GRAPH_CREATE = mpi_dist_graph_create
#pragma weak mpi_dist_graph_create__ = mpi_dist_graph_create
#pragma weak mpi_dist_graph_create_ = mpi_dist_graph_create
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_DIST_GRAPH_CREATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_DIST_GRAPH_CREATE")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_DIST_GRAPH_CREATE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_DIST_GRAPH_CREATE( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_dist_graph_create__ = PMPI_DIST_GRAPH_CREATE
#pragma weak pmpi_dist_graph_create_ = PMPI_DIST_GRAPH_CREATE
#pragma weak pmpi_dist_graph_create = PMPI_DIST_GRAPH_CREATE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_DIST_GRAPH_CREATE = pmpi_dist_graph_create__
#pragma weak pmpi_dist_graph_create_ = pmpi_dist_graph_create__
#pragma weak pmpi_dist_graph_create = pmpi_dist_graph_create__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_DIST_GRAPH_CREATE = pmpi_dist_graph_create_
#pragma weak pmpi_dist_graph_create__ = pmpi_dist_graph_create_
#pragma weak pmpi_dist_graph_create = pmpi_dist_graph_create_
#else
#pragma weak PMPI_DIST_GRAPH_CREATE = pmpi_dist_graph_create
#pragma weak pmpi_dist_graph_create__ = pmpi_dist_graph_create
#pragma weak pmpi_dist_graph_create_ = pmpi_dist_graph_create
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_DIST_GRAPH_CREATE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_DIST_GRAPH_CREATE")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_DIST_GRAPH_CREATE")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_DIST_GRAPH_CREATE( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_DIST_GRAPH_CREATE( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_DIST_GRAPH_CREATE( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_dist_graph_create_ PMPI_DIST_GRAPH_CREATE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_dist_graph_create_ pmpi_dist_graph_create__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_dist_graph_create_ pmpi_dist_graph_create
#else
#define mpi_dist_graph_create_ pmpi_dist_graph_create_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Dist_graph_create
#define MPI_Dist_graph_create PMPI_Dist_graph_create
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_dist_graph_create_ MPI_DIST_GRAPH_CREATE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_dist_graph_create_ mpi_dist_graph_create__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_dist_graph_create_ mpi_dist_graph_create
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint v3[], MPI_Fint v4[], MPI_Fint v5[], MPI_Fint v6[], MPI_Fint *v7, MPI_Fint *v8, MPI_Fint *v9, MPI_Fint *ierr ){
    int l8;

#ifndef HAVE_MPI_F_INIT_WORKS_WITH_C
    if (MPIR_F_NeedInit){ mpirinitf_(); MPIR_F_NeedInit = 0; }
#endif
    if      (v6 == MPIR_F_MPI_UNWEIGHTED) v6 = MPI_UNWEIGHTED;
    else if (v6 == MPIR_F_MPI_WEIGHTS_EMPTY) v6 = MPI_WEIGHTS_EMPTY;
    l8 = MPII_FROM_FLOG(*v8);
    *ierr = MPI_Dist_graph_create( (MPI_Comm)(*v1), (int)*v2, v3, v4, v5, v6, (MPI_Info)(*v7), l8, (MPI_Comm *)(v9) );
}
