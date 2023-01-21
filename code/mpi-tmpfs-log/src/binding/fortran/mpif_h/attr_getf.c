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
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_GET( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_ATTR_GET = PMPI_ATTR_GET
#pragma weak mpi_attr_get__ = PMPI_ATTR_GET
#pragma weak mpi_attr_get_ = PMPI_ATTR_GET
#pragma weak mpi_attr_get = PMPI_ATTR_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ATTR_GET = pmpi_attr_get__
#pragma weak mpi_attr_get__ = pmpi_attr_get__
#pragma weak mpi_attr_get_ = pmpi_attr_get__
#pragma weak mpi_attr_get = pmpi_attr_get__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ATTR_GET = pmpi_attr_get_
#pragma weak mpi_attr_get__ = pmpi_attr_get_
#pragma weak mpi_attr_get_ = pmpi_attr_get_
#pragma weak mpi_attr_get = pmpi_attr_get_
#else
#pragma weak MPI_ATTR_GET = pmpi_attr_get
#pragma weak mpi_attr_get__ = pmpi_attr_get
#pragma weak mpi_attr_get_ = pmpi_attr_get
#pragma weak mpi_attr_get = pmpi_attr_get
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_GET( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_ATTR_GET = PMPI_ATTR_GET
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_attr_get__ = pmpi_attr_get__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_attr_get = pmpi_attr_get
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_attr_get_ = pmpi_attr_get_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_ATTR_GET  MPI_ATTR_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_attr_get__  mpi_attr_get__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_attr_get  mpi_attr_get
#else
#pragma _HP_SECONDARY_DEF pmpi_attr_get_  mpi_attr_get_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_ATTR_GET as PMPI_ATTR_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_attr_get__ as pmpi_attr_get__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_attr_get as pmpi_attr_get
#else
#pragma _CRI duplicate mpi_attr_get_ as pmpi_attr_get_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_GET( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ATTR_GET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ATTR_GET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ATTR_GET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ATTR_GET")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_GET( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_GET( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_GET( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_GET( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_attr_get__ = MPI_ATTR_GET
#pragma weak mpi_attr_get_ = MPI_ATTR_GET
#pragma weak mpi_attr_get = MPI_ATTR_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_ATTR_GET = mpi_attr_get__
#pragma weak mpi_attr_get_ = mpi_attr_get__
#pragma weak mpi_attr_get = mpi_attr_get__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_ATTR_GET = mpi_attr_get_
#pragma weak mpi_attr_get__ = mpi_attr_get_
#pragma weak mpi_attr_get = mpi_attr_get_
#else
#pragma weak MPI_ATTR_GET = mpi_attr_get
#pragma weak mpi_attr_get__ = mpi_attr_get
#pragma weak mpi_attr_get_ = mpi_attr_get
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_GET( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ATTR_GET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ATTR_GET")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_ATTR_GET")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_GET( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_get__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_get__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_get__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_GET( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_get_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_get_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_get_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_ATTR_GET( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_attr_get")));
extern FORT_DLL_SPEC void FORT_CALL mpi_attr_get( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_ATTR_GET( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_get__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_get_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_get( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_attr_get__ = PMPI_ATTR_GET
#pragma weak pmpi_attr_get_ = PMPI_ATTR_GET
#pragma weak pmpi_attr_get = PMPI_ATTR_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_ATTR_GET = pmpi_attr_get__
#pragma weak pmpi_attr_get_ = pmpi_attr_get__
#pragma weak pmpi_attr_get = pmpi_attr_get__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_ATTR_GET = pmpi_attr_get_
#pragma weak pmpi_attr_get__ = pmpi_attr_get_
#pragma weak pmpi_attr_get = pmpi_attr_get_
#else
#pragma weak PMPI_ATTR_GET = pmpi_attr_get
#pragma weak pmpi_attr_get__ = pmpi_attr_get
#pragma weak pmpi_attr_get_ = pmpi_attr_get
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_get__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ATTR_GET")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_get_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ATTR_GET")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_get( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_ATTR_GET")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ATTR_GET( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_get_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_get( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_ATTR_GET( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_get__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_get( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_ATTR_GET( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_get__( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_attr_get_( MPI_Fint *, MPI_Fint *, void*, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_attr_get")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_attr_get_ PMPI_ATTR_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_attr_get_ pmpi_attr_get__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_attr_get_ pmpi_attr_get
#else
#define mpi_attr_get_ pmpi_attr_get_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Attr_get
#define MPI_Attr_get PMPI_Attr_get
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_attr_get_ MPI_ATTR_GET
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_attr_get_ mpi_attr_get__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_attr_get_ mpi_attr_get
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_attr_get_ ( MPI_Fint *v1, MPI_Fint *v2, void*v3, MPI_Fint *v4, MPI_Fint *ierr ){
    void *attrv3;
    int l4;
    if (v3 == MPIR_F_MPI_BOTTOM) v3 = MPI_BOTTOM;
   *ierr = MPII_Comm_get_attr( (MPI_Comm)(*v1), (int)*v2, &attrv3, &l4, MPIR_ATTR_INT );

    if ((int)*ierr || !l4) {
        *(MPI_Fint*)v3 = 0;
    }
    else {
        *(MPI_Fint*)v3 = (MPI_Fint)(intptr_t)attrv3;
    }
    if (*ierr == MPI_SUCCESS) *v4 = MPII_TO_FLOG(l4);
}
