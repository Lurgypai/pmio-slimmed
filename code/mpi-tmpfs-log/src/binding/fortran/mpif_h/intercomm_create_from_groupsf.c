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
extern FORT_DLL_SPEC void FORT_CALL MPI_INTERCOMM_CREATE_FROM_GROUPS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_INTERCOMM_CREATE_FROM_GROUPS = PMPI_INTERCOMM_CREATE_FROM_GROUPS
#pragma weak mpi_intercomm_create_from_groups__ = PMPI_INTERCOMM_CREATE_FROM_GROUPS
#pragma weak mpi_intercomm_create_from_groups_ = PMPI_INTERCOMM_CREATE_FROM_GROUPS
#pragma weak mpi_intercomm_create_from_groups = PMPI_INTERCOMM_CREATE_FROM_GROUPS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INTERCOMM_CREATE_FROM_GROUPS = pmpi_intercomm_create_from_groups__
#pragma weak mpi_intercomm_create_from_groups__ = pmpi_intercomm_create_from_groups__
#pragma weak mpi_intercomm_create_from_groups_ = pmpi_intercomm_create_from_groups__
#pragma weak mpi_intercomm_create_from_groups = pmpi_intercomm_create_from_groups__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INTERCOMM_CREATE_FROM_GROUPS = pmpi_intercomm_create_from_groups_
#pragma weak mpi_intercomm_create_from_groups__ = pmpi_intercomm_create_from_groups_
#pragma weak mpi_intercomm_create_from_groups_ = pmpi_intercomm_create_from_groups_
#pragma weak mpi_intercomm_create_from_groups = pmpi_intercomm_create_from_groups_
#else
#pragma weak MPI_INTERCOMM_CREATE_FROM_GROUPS = pmpi_intercomm_create_from_groups
#pragma weak mpi_intercomm_create_from_groups__ = pmpi_intercomm_create_from_groups
#pragma weak mpi_intercomm_create_from_groups_ = pmpi_intercomm_create_from_groups
#pragma weak mpi_intercomm_create_from_groups = pmpi_intercomm_create_from_groups
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INTERCOMM_CREATE_FROM_GROUPS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak MPI_INTERCOMM_CREATE_FROM_GROUPS = PMPI_INTERCOMM_CREATE_FROM_GROUPS
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_intercomm_create_from_groups__ = pmpi_intercomm_create_from_groups__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_intercomm_create_from_groups = pmpi_intercomm_create_from_groups
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#pragma weak mpi_intercomm_create_from_groups_ = pmpi_intercomm_create_from_groups_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_INTERCOMM_CREATE_FROM_GROUPS  MPI_INTERCOMM_CREATE_FROM_GROUPS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_intercomm_create_from_groups__  mpi_intercomm_create_from_groups__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_intercomm_create_from_groups  mpi_intercomm_create_from_groups
#else
#pragma _HP_SECONDARY_DEF pmpi_intercomm_create_from_groups_  mpi_intercomm_create_from_groups_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_INTERCOMM_CREATE_FROM_GROUPS as PMPI_INTERCOMM_CREATE_FROM_GROUPS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_intercomm_create_from_groups__ as pmpi_intercomm_create_from_groups__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_intercomm_create_from_groups as pmpi_intercomm_create_from_groups
#else
#pragma _CRI duplicate mpi_intercomm_create_from_groups_ as pmpi_intercomm_create_from_groups_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INTERCOMM_CREATE_FROM_GROUPS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INTERCOMM_CREATE_FROM_GROUPS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INTERCOMM_CREATE_FROM_GROUPS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INTERCOMM_CREATE_FROM_GROUPS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INTERCOMM_CREATE_FROM_GROUPS")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INTERCOMM_CREATE_FROM_GROUPS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INTERCOMM_CREATE_FROM_GROUPS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_INTERCOMM_CREATE_FROM_GROUPS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_INTERCOMM_CREATE_FROM_GROUPS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_intercomm_create_from_groups__ = MPI_INTERCOMM_CREATE_FROM_GROUPS
#pragma weak mpi_intercomm_create_from_groups_ = MPI_INTERCOMM_CREATE_FROM_GROUPS
#pragma weak mpi_intercomm_create_from_groups = MPI_INTERCOMM_CREATE_FROM_GROUPS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_INTERCOMM_CREATE_FROM_GROUPS = mpi_intercomm_create_from_groups__
#pragma weak mpi_intercomm_create_from_groups_ = mpi_intercomm_create_from_groups__
#pragma weak mpi_intercomm_create_from_groups = mpi_intercomm_create_from_groups__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_INTERCOMM_CREATE_FROM_GROUPS = mpi_intercomm_create_from_groups_
#pragma weak mpi_intercomm_create_from_groups__ = mpi_intercomm_create_from_groups_
#pragma weak mpi_intercomm_create_from_groups = mpi_intercomm_create_from_groups_
#else
#pragma weak MPI_INTERCOMM_CREATE_FROM_GROUPS = mpi_intercomm_create_from_groups
#pragma weak mpi_intercomm_create_from_groups__ = mpi_intercomm_create_from_groups
#pragma weak mpi_intercomm_create_from_groups_ = mpi_intercomm_create_from_groups
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_INTERCOMM_CREATE_FROM_GROUPS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_INTERCOMM_CREATE_FROM_GROUPS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_INTERCOMM_CREATE_FROM_GROUPS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("MPI_INTERCOMM_CREATE_FROM_GROUPS")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INTERCOMM_CREATE_FROM_GROUPS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_intercomm_create_from_groups__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_intercomm_create_from_groups__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_intercomm_create_from_groups__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_INTERCOMM_CREATE_FROM_GROUPS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_intercomm_create_from_groups_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_intercomm_create_from_groups_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_intercomm_create_from_groups_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_INTERCOMM_CREATE_FROM_GROUPS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_intercomm_create_from_groups")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_intercomm_create_from_groups")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("mpi_intercomm_create_from_groups")));
extern FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_INTERCOMM_CREATE_FROM_GROUPS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_intercomm_create_from_groups__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_intercomm_create_from_groups_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_intercomm_create_from_groups( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_intercomm_create_from_groups__ = PMPI_INTERCOMM_CREATE_FROM_GROUPS
#pragma weak pmpi_intercomm_create_from_groups_ = PMPI_INTERCOMM_CREATE_FROM_GROUPS
#pragma weak pmpi_intercomm_create_from_groups = PMPI_INTERCOMM_CREATE_FROM_GROUPS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_INTERCOMM_CREATE_FROM_GROUPS = pmpi_intercomm_create_from_groups__
#pragma weak pmpi_intercomm_create_from_groups_ = pmpi_intercomm_create_from_groups__
#pragma weak pmpi_intercomm_create_from_groups = pmpi_intercomm_create_from_groups__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_INTERCOMM_CREATE_FROM_GROUPS = pmpi_intercomm_create_from_groups_
#pragma weak pmpi_intercomm_create_from_groups__ = pmpi_intercomm_create_from_groups_
#pragma weak pmpi_intercomm_create_from_groups = pmpi_intercomm_create_from_groups_
#else
#pragma weak PMPI_INTERCOMM_CREATE_FROM_GROUPS = pmpi_intercomm_create_from_groups
#pragma weak pmpi_intercomm_create_from_groups__ = pmpi_intercomm_create_from_groups
#pragma weak pmpi_intercomm_create_from_groups_ = pmpi_intercomm_create_from_groups
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_intercomm_create_from_groups__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INTERCOMM_CREATE_FROM_GROUPS")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_intercomm_create_from_groups_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INTERCOMM_CREATE_FROM_GROUPS")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_intercomm_create_from_groups( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("PMPI_INTERCOMM_CREATE_FROM_GROUPS")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_INTERCOMM_CREATE_FROM_GROUPS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_intercomm_create_from_groups_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_intercomm_create_from_groups( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_INTERCOMM_CREATE_FROM_GROUPS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_intercomm_create_from_groups__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_intercomm_create_from_groups( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_INTERCOMM_CREATE_FROM_GROUPS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_intercomm_create_from_groups__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_intercomm_create_from_groups_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, char * FORT_MIXED_LEN_DECL, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * FORT_END_LEN_DECL ) __attribute__((weak,alias("pmpi_intercomm_create_from_groups")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_intercomm_create_from_groups_ PMPI_INTERCOMM_CREATE_FROM_GROUPS
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_intercomm_create_from_groups_ pmpi_intercomm_create_from_groups__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_intercomm_create_from_groups_ pmpi_intercomm_create_from_groups
#else
#define mpi_intercomm_create_from_groups_ pmpi_intercomm_create_from_groups_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Intercomm_create_from_groups
#define MPI_Intercomm_create_from_groups PMPI_Intercomm_create_from_groups
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_intercomm_create_from_groups_ MPI_INTERCOMM_CREATE_FROM_GROUPS
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_intercomm_create_from_groups_ mpi_intercomm_create_from_groups__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_intercomm_create_from_groups_ mpi_intercomm_create_from_groups
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_intercomm_create_from_groups_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *v4, char *v5 FORT_MIXED_LEN(d5), MPI_Fint *v6, MPI_Fint *v7, MPI_Fint *v8, MPI_Fint *ierr FORT_END_LEN(d5) ){
    *ierr = MPI_Intercomm_create_from_groups( (MPI_Group)*v1, (int)*v2, (MPI_Group)*v3, (int)*v4, v5, (MPI_Info)(*v6), (MPI_Errhandler)*v7, (MPI_Comm *)(v8) );
}