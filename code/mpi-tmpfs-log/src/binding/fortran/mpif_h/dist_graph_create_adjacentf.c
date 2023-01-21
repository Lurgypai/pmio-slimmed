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
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE_ADJACENT( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_DIST_GRAPH_CREATE_ADJACENT = PMPI_DIST_GRAPH_CREATE_ADJACENT
#pragma weak mpi_dist_graph_create_adjacent__ = PMPI_DIST_GRAPH_CREATE_ADJACENT
#pragma weak mpi_dist_graph_create_adjacent_ = PMPI_DIST_GRAPH_CREATE_ADJACENT
#pragma weak mpi_dist_graph_create_adjacent = PMPI_DIST_GRAPH_CREATE_ADJACENT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_DIST_GRAPH_CREATE_ADJACENT = pmpi_dist_graph_create_adjacent__
#pragma weak mpi_dist_graph_create_adjacent__ = pmpi_dist_graph_create_adjacent__
#pragma weak mpi_dist_graph_create_adjacent_ = pmpi_dist_graph_create_adjacent__
#pragma weak mpi_dist_graph_create_adjacent = pmpi_dist_graph_create_adjacent__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_DIST_GRAPH_CREATE_ADJACENT = pmpi_dist_graph_create_adjacent_
#pragma weak mpi_dist_graph_create_adjacent__ = pmpi_dist_graph_create_adjacent_
#pragma weak mpi_dist_graph_create_adjacent_ = pmpi_dist_graph_create_adjacent_
#pragma weak mpi_dist_graph_create_adjacent = pmpi_dist_graph_create_adjacent_
#else
#pragma weak MPI_DIST_GRAPH_CREATE_ADJACENT = pmpi_dist_graph_create_adjacent
#pragma weak mpi_dist_graph_create_adjacent__ = pmpi_dist_graph_create_adjacent
#pragma weak mpi_dist_graph_create_adjacent_ = pmpi_dist_graph_create_adjacent
#pragma weak mpi_dist_graph_create_adjacent = pmpi_dist_graph_create_adjacent
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE_ADJACENT( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_DIST_GRAPH_CREATE_ADJACENT = PMPI_DIST_GRAPH_CREATE_ADJACENT
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_dist_graph_create_adjacent__ = pmpi_dist_graph_create_adjacent__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_dist_graph_create_adjacent = pmpi_dist_graph_create_adjacent
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_dist_graph_create_adjacent_ = pmpi_dist_graph_create_adjacent_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_DIST_GRAPH_CREATE_ADJACENT  MPI_DIST_GRAPH_CREATE_ADJACENT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_dist_graph_create_adjacent__  mpi_dist_graph_create_adjacent__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_dist_graph_create_adjacent  mpi_dist_graph_create_adjacent
#else
#pragma _HP_SECONDARY_DEF pmpi_dist_graph_create_adjacent_  mpi_dist_graph_create_adjacent_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_DIST_GRAPH_CREATE_ADJACENT as PMPI_DIST_GRAPH_CREATE_ADJACENT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_dist_graph_create_adjacent__ as pmpi_dist_graph_create_adjacent__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_dist_graph_create_adjacent as pmpi_dist_graph_create_adjacent
#else
#pragma _CRI duplicate mpi_dist_graph_create_adjacent_ as pmpi_dist_graph_create_adjacent_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE_ADJACENT( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_DIST_GRAPH_CREATE_ADJACENT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_DIST_GRAPH_CREATE_ADJACENT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_DIST_GRAPH_CREATE_ADJACENT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_DIST_GRAPH_CREATE_ADJACENT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE_ADJACENT( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE_ADJACENT( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE_ADJACENT( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE_ADJACENT( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_dist_graph_create_adjacent__ = MPI_DIST_GRAPH_CREATE_ADJACENT
#pragma weak mpi_dist_graph_create_adjacent_ = MPI_DIST_GRAPH_CREATE_ADJACENT
#pragma weak mpi_dist_graph_create_adjacent = MPI_DIST_GRAPH_CREATE_ADJACENT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_DIST_GRAPH_CREATE_ADJACENT = mpi_dist_graph_create_adjacent__
#pragma weak mpi_dist_graph_create_adjacent_ = mpi_dist_graph_create_adjacent__
#pragma weak mpi_dist_graph_create_adjacent = mpi_dist_graph_create_adjacent__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_DIST_GRAPH_CREATE_ADJACENT = mpi_dist_graph_create_adjacent_
#pragma weak mpi_dist_graph_create_adjacent__ = mpi_dist_graph_create_adjacent_
#pragma weak mpi_dist_graph_create_adjacent = mpi_dist_graph_create_adjacent_
#else
#pragma weak MPI_DIST_GRAPH_CREATE_ADJACENT = mpi_dist_graph_create_adjacent
#pragma weak mpi_dist_graph_create_adjacent__ = mpi_dist_graph_create_adjacent
#pragma weak mpi_dist_graph_create_adjacent_ = mpi_dist_graph_create_adjacent
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE_ADJACENT( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_DIST_GRAPH_CREATE_ADJACENT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_DIST_GRAPH_CREATE_ADJACENT")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_DIST_GRAPH_CREATE_ADJACENT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE_ADJACENT( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create_adjacent__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create_adjacent__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create_adjacent__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE_ADJACENT( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create_adjacent_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create_adjacent_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create_adjacent_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_DIST_GRAPH_CREATE_ADJACENT( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create_adjacent")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create_adjacent")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_dist_graph_create_adjacent")));
extern FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_DIST_GRAPH_CREATE_ADJACENT( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_adjacent__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_adjacent_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_adjacent( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_dist_graph_create_adjacent__ = PMPI_DIST_GRAPH_CREATE_ADJACENT
#pragma weak pmpi_dist_graph_create_adjacent_ = PMPI_DIST_GRAPH_CREATE_ADJACENT
#pragma weak pmpi_dist_graph_create_adjacent = PMPI_DIST_GRAPH_CREATE_ADJACENT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_DIST_GRAPH_CREATE_ADJACENT = pmpi_dist_graph_create_adjacent__
#pragma weak pmpi_dist_graph_create_adjacent_ = pmpi_dist_graph_create_adjacent__
#pragma weak pmpi_dist_graph_create_adjacent = pmpi_dist_graph_create_adjacent__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_DIST_GRAPH_CREATE_ADJACENT = pmpi_dist_graph_create_adjacent_
#pragma weak pmpi_dist_graph_create_adjacent__ = pmpi_dist_graph_create_adjacent_
#pragma weak pmpi_dist_graph_create_adjacent = pmpi_dist_graph_create_adjacent_
#else
#pragma weak PMPI_DIST_GRAPH_CREATE_ADJACENT = pmpi_dist_graph_create_adjacent
#pragma weak pmpi_dist_graph_create_adjacent__ = pmpi_dist_graph_create_adjacent
#pragma weak pmpi_dist_graph_create_adjacent_ = pmpi_dist_graph_create_adjacent
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_adjacent__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_DIST_GRAPH_CREATE_ADJACENT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_adjacent_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_DIST_GRAPH_CREATE_ADJACENT")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_adjacent( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_DIST_GRAPH_CREATE_ADJACENT")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_DIST_GRAPH_CREATE_ADJACENT( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_adjacent_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_adjacent( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_DIST_GRAPH_CREATE_ADJACENT( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_adjacent__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_adjacent( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_DIST_GRAPH_CREATE_ADJACENT( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_adjacent__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_dist_graph_create_adjacent_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_dist_graph_create_adjacent")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_dist_graph_create_adjacent_ PMPI_DIST_GRAPH_CREATE_ADJACENT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_dist_graph_create_adjacent_ pmpi_dist_graph_create_adjacent__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_dist_graph_create_adjacent_ pmpi_dist_graph_create_adjacent
#else
#define mpi_dist_graph_create_adjacent_ pmpi_dist_graph_create_adjacent_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Dist_graph_create_adjacent
#define MPI_Dist_graph_create_adjacent PMPI_Dist_graph_create_adjacent
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_dist_graph_create_adjacent_ MPI_DIST_GRAPH_CREATE_ADJACENT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_dist_graph_create_adjacent_ mpi_dist_graph_create_adjacent__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_dist_graph_create_adjacent_ mpi_dist_graph_create_adjacent
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_dist_graph_create_adjacent_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint v3[], MPI_Fint v4[], MPI_Fint *v5, MPI_Fint v6[], MPI_Fint v7[], MPI_Fint *v8, MPI_Fint *v9, MPI_Fint *v10, MPI_Fint *ierr ){
    int l9;

#ifndef HAVE_MPI_F_INIT_WORKS_WITH_C
    if (MPIR_F_NeedInit){ mpirinitf_(); MPIR_F_NeedInit = 0; }
#endif
    if      (v4 == MPIR_F_MPI_UNWEIGHTED) v4 = MPI_UNWEIGHTED;
    else if (v4 == MPIR_F_MPI_WEIGHTS_EMPTY) v4 = MPI_WEIGHTS_EMPTY;
    if      (v7 == MPIR_F_MPI_UNWEIGHTED) v7 = MPI_UNWEIGHTED;
    else if (v7 == MPIR_F_MPI_WEIGHTS_EMPTY) v7 = MPI_WEIGHTS_EMPTY;
    l9 = MPII_FROM_FLOG(*v9);
    *ierr = MPI_Dist_graph_create_adjacent( (MPI_Comm)(*v1), (int)*v2, v3, v4, (int)*v5, v6, v7, (MPI_Info)(*v8), l9, (MPI_Comm *)(v10) );
}
