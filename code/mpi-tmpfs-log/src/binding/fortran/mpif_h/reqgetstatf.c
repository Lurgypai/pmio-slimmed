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
extern FORT_DLL_SPEC void FORT_CALL MPI_REQUEST_GET_STATUS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_REQUEST_GET_STATUS = PMPI_REQUEST_GET_STATUS
#pragma weak mpi_request_get_status__ = PMPI_REQUEST_GET_STATUS
#pragma weak mpi_request_get_status_ = PMPI_REQUEST_GET_STATUS
#pragma weak mpi_request_get_status = PMPI_REQUEST_GET_STATUS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_REQUEST_GET_STATUS = pmpi_request_get_status__
#pragma weak mpi_request_get_status__ = pmpi_request_get_status__
#pragma weak mpi_request_get_status_ = pmpi_request_get_status__
#pragma weak mpi_request_get_status = pmpi_request_get_status__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_REQUEST_GET_STATUS = pmpi_request_get_status_
#pragma weak mpi_request_get_status__ = pmpi_request_get_status_
#pragma weak mpi_request_get_status_ = pmpi_request_get_status_
#pragma weak mpi_request_get_status = pmpi_request_get_status_
#else
#pragma weak MPI_REQUEST_GET_STATUS = pmpi_request_get_status
#pragma weak mpi_request_get_status__ = pmpi_request_get_status
#pragma weak mpi_request_get_status_ = pmpi_request_get_status
#pragma weak mpi_request_get_status = pmpi_request_get_status
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_REQUEST_GET_STATUS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_REQUEST_GET_STATUS = PMPI_REQUEST_GET_STATUS
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_request_get_status__ = pmpi_request_get_status__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_request_get_status = pmpi_request_get_status
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_request_get_status_ = pmpi_request_get_status_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_REQUEST_GET_STATUS  MPI_REQUEST_GET_STATUS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_request_get_status__  mpi_request_get_status__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_request_get_status  mpi_request_get_status
#else
#pragma _HP_SECONDARY_DEF pmpi_request_get_status_  mpi_request_get_status_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_REQUEST_GET_STATUS as PMPI_REQUEST_GET_STATUS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_request_get_status__ as pmpi_request_get_status__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_request_get_status as pmpi_request_get_status
#else
#pragma _CRI duplicate mpi_request_get_status_ as pmpi_request_get_status_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_REQUEST_GET_STATUS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_REQUEST_GET_STATUS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_REQUEST_GET_STATUS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_REQUEST_GET_STATUS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_REQUEST_GET_STATUS")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_REQUEST_GET_STATUS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_REQUEST_GET_STATUS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_REQUEST_GET_STATUS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_REQUEST_GET_STATUS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_request_get_status__ = MPI_REQUEST_GET_STATUS
#pragma weak mpi_request_get_status_ = MPI_REQUEST_GET_STATUS
#pragma weak mpi_request_get_status = MPI_REQUEST_GET_STATUS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_REQUEST_GET_STATUS = mpi_request_get_status__
#pragma weak mpi_request_get_status_ = mpi_request_get_status__
#pragma weak mpi_request_get_status = mpi_request_get_status__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_REQUEST_GET_STATUS = mpi_request_get_status_
#pragma weak mpi_request_get_status__ = mpi_request_get_status_
#pragma weak mpi_request_get_status = mpi_request_get_status_
#else
#pragma weak MPI_REQUEST_GET_STATUS = mpi_request_get_status
#pragma weak mpi_request_get_status__ = mpi_request_get_status
#pragma weak mpi_request_get_status_ = mpi_request_get_status
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_REQUEST_GET_STATUS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_REQUEST_GET_STATUS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_REQUEST_GET_STATUS")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPI_REQUEST_GET_STATUS")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_REQUEST_GET_STATUS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_request_get_status__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_request_get_status__")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_request_get_status__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPI_REQUEST_GET_STATUS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_request_get_status_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_request_get_status_")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_request_get_status_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPI_REQUEST_GET_STATUS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_request_get_status")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_request_get_status")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpi_request_get_status")));
extern FORT_DLL_SPEC void FORT_CALL mpi_request_get_status( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_REQUEST_GET_STATUS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_request_get_status__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_request_get_status_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_request_get_status( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_request_get_status__ = PMPI_REQUEST_GET_STATUS
#pragma weak pmpi_request_get_status_ = PMPI_REQUEST_GET_STATUS
#pragma weak pmpi_request_get_status = PMPI_REQUEST_GET_STATUS
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_REQUEST_GET_STATUS = pmpi_request_get_status__
#pragma weak pmpi_request_get_status_ = pmpi_request_get_status__
#pragma weak pmpi_request_get_status = pmpi_request_get_status__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_REQUEST_GET_STATUS = pmpi_request_get_status_
#pragma weak pmpi_request_get_status__ = pmpi_request_get_status_
#pragma weak pmpi_request_get_status = pmpi_request_get_status_
#else
#pragma weak PMPI_REQUEST_GET_STATUS = pmpi_request_get_status
#pragma weak pmpi_request_get_status__ = pmpi_request_get_status
#pragma weak pmpi_request_get_status_ = pmpi_request_get_status
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpi_request_get_status__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_REQUEST_GET_STATUS")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_request_get_status_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_REQUEST_GET_STATUS")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_request_get_status( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPI_REQUEST_GET_STATUS")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_REQUEST_GET_STATUS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_request_get_status_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status__")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_request_get_status( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPI_REQUEST_GET_STATUS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_request_get_status__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status_")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_request_get_status( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPI_REQUEST_GET_STATUS( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_request_get_status__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status")));
extern FORT_DLL_SPEC void FORT_CALL pmpi_request_get_status_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpi_request_get_status")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpi_request_get_status_ PMPI_REQUEST_GET_STATUS
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_request_get_status_ pmpi_request_get_status__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_request_get_status_ pmpi_request_get_status
#else
#define mpi_request_get_status_ pmpi_request_get_status_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPI_Request_get_status
#define MPI_Request_get_status PMPI_Request_get_status
#endif

#else

#ifdef F77_NAME_UPPER
#define mpi_request_get_status_ MPI_REQUEST_GET_STATUS
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_request_get_status_ mpi_request_get_status__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_request_get_status_ mpi_request_get_status
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_request_get_status_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *ierr ){
    int l2;

#ifndef HAVE_MPI_F_INIT_WORKS_WITH_C
    if (MPIR_F_NeedInit){ mpirinitf_(); MPIR_F_NeedInit = 0; }
#endif

    if (v3 == MPI_F_STATUS_IGNORE) { v3 = (MPI_Fint*)MPI_STATUS_IGNORE; }
    *ierr = MPI_Request_get_status( (MPI_Request)*v1, &l2, (MPI_Status *)v3 );
    if (*ierr == MPI_SUCCESS) *v2 = MPII_TO_FLOG(l2);
}
