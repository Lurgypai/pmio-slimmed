/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

#if !defined(MPL_TIMER_H_INCLUDED)
#define MPL_TIMER_H_INCLUDED

#include "mplconfig.h"

#if defined (MPL_HAVE_UNISTD_H)
#include <unistd.h>
#if defined (MPL_NEEDS_USLEEP_DECL)
int usleep(useconds_t usec);
#endif
#endif

/*
 * This include file provide the definitions that are necessary to use the
 * timer calls, including the definition of the time stamp type and
 * any inlined timer calls.
 *
 * The include file timerconf.h (created by autoheader from configure.ac)
 * is needed only to build the function versions of the timers.
 */
/* Include the appropriate files */
#define MPL_TIMER_KIND__GETHRTIME               1
#define MPL_TIMER_KIND__CLOCK_GETTIME           2
#define MPL_TIMER_KIND__GETTIMEOFDAY            3
#define MPL_TIMER_KIND__LINUX86_CYCLE           4
#define MPL_TIMER_KIND__GCC_IA64_CYCLE          5
#define MPL_TIMER_KIND__MACH_ABSOLUTE_TIME      6
#define MPL_TIMER_KIND__PPC64_CYCLE             7
#define MPL_TIMER_KIND MPL_TIMER_KIND__CLOCK_GETTIME

/* Define a time stamp */
/* *INDENT-OFF* */
typedef struct timespec MPL_time_t;
/* *INDENT-ON* */

#if MPL_TIMER_KIND == MPL_TIMER_KIND__GETHRTIME
#include "mpl_timer_gethrtime.h"
#elif MPL_TIMER_KIND == MPL_TIMER_KIND__CLOCK_GETTIME
#include "mpl_timer_clock_gettime.h"
#elif MPL_TIMER_KIND == MPL_TIMER_KIND__GETTIMEOFDAY
#include "mpl_timer_gettimeofday.h"
#elif MPL_TIMER_KIND == MPL_TIMER_KIND__LINUX86_CYCLE
#include "mpl_timer_linux86_cycle.h"
#elif MPL_TIMER_KIND == MPL_TIMER_KIND__GCC_IA64_CYCLE
#include "mpl_timer_gcc_ia64_cycle.h"
#elif MPL_TIMER_KIND == MPL_TIMER_KIND__MACH_ABSOLUTE_TIME
#include "mpl_timer_mach_absolute_time.h"
#elif MPL_TIMER_KIND == MPL_TIMER_KIND__PPC64_CYCLE
#include "mpl_timer_ppc64_cycle.h"
#endif

/*
 * Prototypes.  These are defined here so that inlined timer calls can
 * use them, as well as any profiling and timing code that is built into
 * MPL
 */

#if defined MPLI_WTIME_IS_A_FUNCTION

/*@
  MPL_wtime - Return a time stamp

  Output Parameter:
. timeval - A pointer to an 'MPL_wtime_t' variable.

  Notes:
  This routine returns an `opaque` time value.  This difference between two
  time values returned by 'MPL_wtime' can be converted into an elapsed time
  in seconds with the routine 'MPL_wtime_diff'.

  This routine is defined this way to simplify its implementation as a macro.
  For example, the for Intel x86 and gcc,
.vb
#define MPL_wtime(timeval) \
     __asm__ __volatile__("rdtsc" : "=A" (*timeval))
.ve

  For some purposes, it is important
  that the timer calls change the timing of the code as little as possible.
  This form of a timer routine provides for a very fast timer that has
  minimal impact on the rest of the code.

  From a semantic standpoint, this format emphasizes that any particular
  timer value has no meaning; only the difference between two values is
  meaningful.

  Module:
  Timer

  Question:
  MPI-2 allows 'MPI_Wtime' to be a macro.  We should make that easy; this
  version does not accomplish that.
  @*/
int MPL_wtime(MPL_time_t * timeval);
#endif /* MPLI_WTIME_IS_A_FUNCTION */

/*@
  MPL_wtime_diff - Compute the difference between two time stamps

  Input Parameters:
. t1, t2 - Two time values set by 'MPL_wtime' on this process.


  Output Parameter:
. diff - The different in time between t2 and t1, measured in seconds.

  Note:
  If 't1' is null, then 't2' is assumed to be differences accumulated with
  'MPL_wtime_acc', and the output value gives the number of seconds that
  were accumulated.

  Question:
  Instead of handling a null value of 't1', should we have a separate
  routine 'MPL_wtime_todouble' that converts a single timestamp to a
  double value?

  Module:
  Timer
  @*/
int MPL_wtime_diff(MPL_time_t * t1, MPL_time_t * t2, double *diff);

/*@
  MPL_wtime_acc - Accumulate time values

  Input Parameters:
. t1,t2,t3 - Three time values.  't3' is updated with the difference between
             't2' and 't1': '*t3 += (t2 - t1)'.

  Notes:
  This routine is used to accumulate the time spent with a block of code
  without first converting the time stamps into a particular arithmetic
  type such as a 'double'.  For example, if the 'MPL_wtime' routine accesses
  a cycle counter, this routine (or macro) can perform the accumulation using
  integer arithmetic.

  To convert a time value accumulated with this routine, use 'MPL_wtime_diff'
  with a 't1' of zero.

  Module:
  Timer
  @*/
int MPL_wtime_acc(MPL_time_t * t1, MPL_time_t * t2, MPL_time_t * t3);

/*@
  MPL_wtime_touint - Converts a timestamp to an unsigned int.
  Input Parameter:
. timeval - 'MPL_time_t' time stamp

  Output Parameter:
. val - unsigned int generated from the timestamp.

  Notes:
  This routine may be used for initializing random seeds. The value is not
  necessary a timestamp if 64-bit to 32-bit conversion happened.


  @*/
int MPL_wtime_touint(MPL_time_t * timeval, unsigned int *val);

/*@
  MPL_wtime_to_ticks - Converts a timestamp to raw clock ticks.
  Input Parameter:
. timeval - 'MPL_time_t' time stamp

  Output Parameter:
. val - long long int generated from the timestamp.

  Notes:
  This routine is intended to be used as an integer timestamp.


  @*/
int MPL_wtime_to_ticks(MPL_time_t * timeval, long long int *val);

/*@
  MPL_wtime_todouble - Converts a timestamp to a double

  Input Parameter:
. timeval - 'MPL_time_t' time stamp

  Output Parameter:
. seconds - Time in seconds from an arbitrary (but fixed) time in the past

  Notes:
  This routine may be used to change a timestamp into a number of seconds,
  suitable for 'MPI_Wtime'.

  @*/
int MPL_wtime_todouble(MPL_time_t * timeval, double *seconds);

/*@
  MPL_wtick - Provide the resolution of the 'MPL_wtime' timer

  Return value:
  Resolution of the timer in seconds.  In many cases, this is the
  time between ticks of the clock that 'MPL_wtime' returns.  In other
  words, the minimum significant difference that can be computed by
  'MPL_wtime_diff'.

  Note that in some cases, the resolution may be estimated.  No application
  should expect either the same estimate in different runs or the same
  value on different processes.

  Module:
  Timer
  @*/
int MPL_wtick(double *);

/*@
  MPL_ticks_per_second - Provide the number of raw ticks per second

  Return value:
  Number of raw ticks representing a second of wall time.

  Note that in some cases, the value may be estimated.  No application
  should expect either the same estimate in different runs or the same
  value on different processes.

  Module:
  Timer
  @*/
int MPL_ticks_per_second(long long int *ticks_per_second);

/*@
  MPL_wtime_init - Initialize the timer

  Note:
  This routine should perform any steps needed to initialize the timer.
  In addition, it should set the value of the attribute 'MPI_WTIME_IS_GLOBAL'
  if the timer is known to be the same for all processes in 'MPI_COMM_WORLD'
  (the value is zero by default).

  Module:
  Timer

  @*/
int MPL_wtime_init(void);

#endif /* !defined(MPL_TIMER_H_INCLUDED) */
