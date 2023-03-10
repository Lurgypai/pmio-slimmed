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
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_HINDEXED_BLOCK( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block__( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block_( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_TYPE_CREATE_HINDEXED_BLOCK = PMPI_TYPE_CREATE_HINDEXED_BLOCK
#pragma weak mpi_type_create_hindexed_block__ = PMPI_TYPE_CREATE_HINDEXED_BLOCK
#pragma weak mpi_type_create_hindexed_block_ = PMPI_TYPE_CREATE_HINDEXED_BLOCK
#pragma weak mpi_type_create_hindexed_block = PMPI_TYPE_CREATE_HINDEXED_BLOCK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TYPE_CREATE_HINDEXED_BLOCK = pmpi_type_create_hindexed_block__
#pragma weak mpi_type_create_hindexed_block__ = pmpi_type_create_hindexed_block__
#pragma weak mpi_type_create_hindexed_block_ = pmpi_type_create_hindexed_block__
#pragma weak mpi_type_create_hindexed_block = pmpi_type_create_hindexed_block__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TYPE_CREATE_HINDEXED_BLOCK = pmpi_type_create_hindexed_block_
#pragma weak mpi_type_create_hindexed_block__ = pmpi_type_create_hindexed_block_
#pragma weak mpi_type_create_hindexed_block_ = pmpi_type_create_hindexed_block_
#pragma weak mpi_type_create_hindexed_block = pmpi_type_create_hindexed_block_
#else
#pragma weak MPI_TYPE_CREATE_HINDEXED_BLOCK = pmpi_type_create_hindexed_block
#pragma weak mpi_type_create_hindexed_block__ = pmpi_type_create_hindexed_block
#pragma weak mpi_type_create_hindexed_block_ = pmpi_type_create_hindexed_block
#pragma weak mpi_type_create_hindexed_block = pmpi_type_create_hindexed_block
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_HINDEXED_BLOCK( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_TYPE_CREATE_HINDEXED_BLOCK = PMPI_TYPE_CREATE_HINDEXED_BLOCK
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block__( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_type_create_hindexed_block__ = pmpi_type_create_hindexed_block__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_type_create_hindexed_block = pmpi_type_create_hindexed_block
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block_( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_type_create_hindexed_block_ = pmpi_type_create_hindexed_block_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_TYPE_CREATE_HINDEXED_BLOCK  MPI_TYPE_CREATE_HINDEXED_BLOCK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_type_create_hindexed_block__  mpi_type_create_hindexed_block__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_type_create_hindexed_block  mpi_type_create_hindexed_block
#else
#pragma _HP_SECONDARY_DEF pmpi_type_create_hindexed_block_  mpi_type_create_hindexed_block_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_TYPE_CREATE_HINDEXED_BLOCK as PMPI_TYPE_CREATE_HINDEXED_BLOCK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_type_create_hindexed_block__ as pmpi_type_create_hindexed_block__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_type_create_hindexed_block as pmpi_type_create_hindexed_block
#else
#pragma _CRI duplicate mpi_type_create_hindexed_block_ as pmpi_type_create_hindexed_block_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_HINDEXED_BLOCK( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_CREATE_HINDEXED_BLOCK")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block__( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_CREATE_HINDEXED_BLOCK")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block_( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_CREATE_HINDEXED_BLOCK")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_CREATE_HINDEXED_BLOCK")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_HINDEXED_BLOCK( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block__( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block_( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_HINDEXED_BLOCK( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block__( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block_( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_HINDEXED_BLOCK( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block__( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block_( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_HINDEXED_BLOCK( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block__( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block_( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_type_create_hindexed_block__ = MPI_TYPE_CREATE_HINDEXED_BLOCK
#pragma weak mpi_type_create_hindexed_block_ = MPI_TYPE_CREATE_HINDEXED_BLOCK
#pragma weak mpi_type_create_hindexed_block = MPI_TYPE_CREATE_HINDEXED_BLOCK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_TYPE_CREATE_HINDEXED_BLOCK = mpi_type_create_hindexed_block__
#pragma weak mpi_type_create_hindexed_block_ = mpi_type_create_hindexed_block__
#pragma weak mpi_type_create_hindexed_block = mpi_type_create_hindexed_block__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_TYPE_CREATE_HINDEXED_BLOCK = mpi_type_create_hindexed_block_
#pragma weak mpi_type_create_hindexed_block__ = mpi_type_create_hindexed_block_
#pragma weak mpi_type_create_hindexed_block = mpi_type_create_hindexed_block_
#else
#pragma weak MPI_TYPE_CREATE_HINDEXED_BLOCK = mpi_type_create_hindexed_block
#pragma weak mpi_type_create_hindexed_block__ = mpi_type_create_hindexed_block
#pragma weak mpi_type_create_hindexed_block_ = mpi_type_create_hindexed_block
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_HINDEXED_BLOCK( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block__( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_CREATE_HINDEXED_BLOCK")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block_( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_CREATE_HINDEXED_BLOCK")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_TYPE_CREATE_HINDEXED_BLOCK")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_HINDEXED_BLOCK( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_hindexed_block__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block__( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block_( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_hindexed_block__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_hindexed_block__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_HINDEXED_BLOCK( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_hindexed_block_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block__( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_hindexed_block_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block_( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_hindexed_block_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_TYPE_CREATE_HINDEXED_BLOCK( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_hindexed_block")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block__( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_hindexed_block")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block_( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_type_create_hindexed_block")));
extern FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_CREATE_HINDEXED_BLOCK( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_hindexed_block__( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_hindexed_block_( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_hindexed_block( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_type_create_hindexed_block__ = PMPI_TYPE_CREATE_HINDEXED_BLOCK
#pragma weak pmpi_type_create_hindexed_block_ = PMPI_TYPE_CREATE_HINDEXED_BLOCK
#pragma weak pmpi_type_create_hindexed_block = PMPI_TYPE_CREATE_HINDEXED_BLOCK
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_TYPE_CREATE_HINDEXED_BLOCK = pmpi_type_create_hindexed_block__
#pragma weak pmpi_type_create_hindexed_block_ = pmpi_type_create_hindexed_block__
#pragma weak pmpi_type_create_hindexed_block = pmpi_type_create_hindexed_block__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_TYPE_CREATE_HINDEXED_BLOCK = pmpi_type_create_hindexed_block_
#pragma weak pmpi_type_create_hindexed_block__ = pmpi_type_create_hindexed_block_
#pragma weak pmpi_type_create_hindexed_block = pmpi_type_create_hindexed_block_
#else
#pragma weak PMPI_TYPE_CREATE_HINDEXED_BLOCK = pmpi_type_create_hindexed_block
#pragma weak pmpi_type_create_hindexed_block__ = pmpi_type_create_hindexed_block
#pragma weak pmpi_type_create_hindexed_block_ = pmpi_type_create_hindexed_block
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_hindexed_block__( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_CREATE_HINDEXED_BLOCK")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_hindexed_block_( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_CREATE_HINDEXED_BLOCK")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_hindexed_block( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_TYPE_CREATE_HINDEXED_BLOCK")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_CREATE_HINDEXED_BLOCK( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_hindexed_block_( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_hindexed_block( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_CREATE_HINDEXED_BLOCK( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_hindexed_block__( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_hindexed_block( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_TYPE_CREATE_HINDEXED_BLOCK( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_hindexed_block__( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_type_create_hindexed_block_( MPI_Fint *, MPI_Fint *, MPI_Aint [], MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_type_create_hindexed_block")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_type_create_hindexed_block_ PMPI_TYPE_CREATE_HINDEXED_BLOCK
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_type_create_hindexed_block_ pmpi_type_create_hindexed_block__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_type_create_hindexed_block_ pmpi_type_create_hindexed_block
#else
#define mpi_type_create_hindexed_block_ pmpi_type_create_hindexed_block_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Type_create_hindexed_block
#define MPI_Type_create_hindexed_block PMPI_Type_create_hindexed_block
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_type_create_hindexed_block_ MPI_TYPE_CREATE_HINDEXED_BLOCK
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_type_create_hindexed_block_ mpi_type_create_hindexed_block__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_type_create_hindexed_block_ mpi_type_create_hindexed_block
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_type_create_hindexed_block_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Aint v3[], MPI_Fint *v4, MPI_Fint *v5, MPI_Fint *ierr ){
    *ierr = MPI_Type_create_hindexed_block( (int)*v1, (int)*v2, v3, (MPI_Datatype)(*v4), (MPI_Datatype *)(v5) );
}
