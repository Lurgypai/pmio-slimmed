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
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_CART_MAP = PMPI_CART_MAP
#pragma weak mpi_cart_map__ = PMPI_CART_MAP
#pragma weak mpi_cart_map_ = PMPI_CART_MAP
#pragma weak mpi_cart_map = PMPI_CART_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_CART_MAP = pmpi_cart_map__
#pragma weak mpi_cart_map__ = pmpi_cart_map__
#pragma weak mpi_cart_map_ = pmpi_cart_map__
#pragma weak mpi_cart_map = pmpi_cart_map__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_CART_MAP = pmpi_cart_map_
#pragma weak mpi_cart_map__ = pmpi_cart_map_
#pragma weak mpi_cart_map_ = pmpi_cart_map_
#pragma weak mpi_cart_map = pmpi_cart_map_
#else
#pragma weak MPI_CART_MAP = pmpi_cart_map
#pragma weak mpi_cart_map__ = pmpi_cart_map
#pragma weak mpi_cart_map_ = pmpi_cart_map
#pragma weak mpi_cart_map = pmpi_cart_map
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );

#pragma weak MPI_CART_MAP = PMPI_CART_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );

#pragma weak mpi_cart_map__ = pmpi_cart_map__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );

#pragma weak mpi_cart_map = pmpi_cart_map
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );

#pragma weak mpi_cart_map_ = pmpi_cart_map_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_CART_MAP  MPI_CART_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_cart_map__  mpi_cart_map__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_cart_map  mpi_cart_map
#else
#pragma _HP_SECONDARY_DEF pmpi_cart_map_  mpi_cart_map_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_CART_MAP as PMPI_CART_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_cart_map__ as pmpi_cart_map__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_cart_map as pmpi_cart_map
#else
#pragma _CRI duplicate mpi_cart_map_ as pmpi_cart_map_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_CART_MAP")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_CART_MAP")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_CART_MAP")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_CART_MAP")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_cart_map__ = MPI_CART_MAP
#pragma weak mpi_cart_map_ = MPI_CART_MAP
#pragma weak mpi_cart_map = MPI_CART_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_CART_MAP = mpi_cart_map__
#pragma weak mpi_cart_map_ = mpi_cart_map__
#pragma weak mpi_cart_map = mpi_cart_map__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_CART_MAP = mpi_cart_map_
#pragma weak mpi_cart_map__ = mpi_cart_map_
#pragma weak mpi_cart_map = mpi_cart_map_
#else
#pragma weak MPI_CART_MAP = mpi_cart_map
#pragma weak mpi_cart_map__ = mpi_cart_map
#pragma weak mpi_cart_map_ = mpi_cart_map
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_CART_MAP")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_CART_MAP")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_CART_MAP")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_cart_map__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_cart_map__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_cart_map__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_cart_map_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_cart_map_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_cart_map_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_cart_map")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_cart_map")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_cart_map")));
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_map( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_CART_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_map__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_map_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_map( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_cart_map__ = PMPI_CART_MAP
#pragma weak pmpi_cart_map_ = PMPI_CART_MAP
#pragma weak pmpi_cart_map = PMPI_CART_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_CART_MAP = pmpi_cart_map__
#pragma weak pmpi_cart_map_ = pmpi_cart_map__
#pragma weak pmpi_cart_map = pmpi_cart_map__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_CART_MAP = pmpi_cart_map_
#pragma weak pmpi_cart_map__ = pmpi_cart_map_
#pragma weak pmpi_cart_map = pmpi_cart_map_
#else
#pragma weak PMPI_CART_MAP = pmpi_cart_map
#pragma weak pmpi_cart_map__ = pmpi_cart_map
#pragma weak pmpi_cart_map_ = pmpi_cart_map
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_map__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_CART_MAP")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_map_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_CART_MAP")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_map( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_CART_MAP")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_CART_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_map_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_map( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_CART_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_map__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_map( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_CART_MAP( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_map__( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_map_( MPI_Fint *, MPI_Fint *, MPI_Fint [], MPI_Fint [], MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_cart_map")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_cart_map_ PMPI_CART_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_cart_map_ pmpi_cart_map__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_cart_map_ pmpi_cart_map
#else
#define mpi_cart_map_ pmpi_cart_map_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Cart_map
#define MPI_Cart_map PMPI_Cart_map
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_cart_map_ MPI_CART_MAP
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_cart_map_ mpi_cart_map__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_cart_map_ mpi_cart_map
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_cart_map_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint v3[], MPI_Fint v4[], MPI_Fint *v5, MPI_Fint *ierr ){
    int *l4=0;

    if (*v2) {int li;
     l4 = (int *)malloc(*v2 * sizeof(int));
     for (li=0; li<*v2; li++) {
        l4[li] = MPII_FROM_FLOG(v4[li]);
     }
    }
    *ierr = MPI_Cart_map( (MPI_Comm)(*v1), (int)*v2, v3, l4, v5 );
    free( l4 );
}