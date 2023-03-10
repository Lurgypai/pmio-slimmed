/* include/config.h.  Generated from config.h.in by configure.  */
/* include/config.h.in.  Generated from configure.ac by autoheader.  */

/* Define cache-line size. */
#define CACHELINE_SIZE 64

/* Defined the keyword for thread-local storage. */
#define COMPILER_TLS _Thread_local

/* Define to 1 if MPL enables MPL_aligned_alloc. */
#define DEFINE_ALIGNED_ALLOC 1

/* Define if force compiler to always inline functions with
   MPL_STATIC_INLINE_PREFIX|SUFFIX */
/* #undef ENABLE_ALWAYS_INLINE */

/* Define to 1 if you have the `aligned_alloc' function. */
#define HAVE_ALIGNED_ALLOC 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Defined if backtrace() could be fully identified. */
#define HAVE_BACKTRACE 1

/* Define to 1 if you have the `bindprocessor' function. */
/* #undef HAVE_BINDPROCESSOR */

/* define if valgrind is old and/or broken compared to what we are expecting
   */
/* #undef HAVE_BROKEN_VALGRIND */

/* Define to 1 if the compiler supports __builtin_expect. */
#define HAVE_BUILTIN_EXPECT 1

/* Define to 1 if we have support for C11 atomic intrinsics */
#define HAVE_C11_ATOMICS 1

/* Define if C11 _Static_assert is supported. */
#define HAVE_C11__STATIC_ASSERT 1

/* Define to 1 if you have the `clock_getres' function. */
#define HAVE_CLOCK_GETRES 1

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define if CPU_SET and CPU_ZERO defined */
#define HAVE_CPU_SET_MACROS 1

/* Define if cpu_set_t is defined in sched.h */
#define HAVE_CPU_SET_T 1

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* Define if CUDA is available */
/* #undef HAVE_CUDA */

/* Define to 1 if you have the declaration of `_SC_NPROCESSORS_ONLN', and to 0
   if you don't. */
#define HAVE_DECL__SC_NPROCESSORS_ONLN 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <drd.h> header file. */
/* #undef HAVE_DRD_H */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the `fdopen' function. */
#define HAVE_FDOPEN 1

/* Define if GNU __attribute__ is supported */
#define HAVE_GCC_ATTRIBUTE 1

/* Define to 1 if we have support for gcc __atomic intrinsics */
#define HAVE_GCC_INTRINSIC_ATOMIC 1

/* Define to 1 if we have support for gcc __sync intrinsics */
#define HAVE_GCC_INTRINSIC_SYNC 1

/* Define to 1 if you have the `gethrtime' function. */
/* #undef HAVE_GETHRTIME */

/* Define to 1 if you have the `getifaddrs' function. */
#define HAVE_GETIFADDRS 1

/* Define to 1 if you have the `getpid' function. */
#define HAVE_GETPID 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `get_nprocs' function. */
#define HAVE_GET_NPROCS 1

/* Define to 1 if you have the <helgrind.h> header file. */
/* #undef HAVE_HELGRIND_H */

/* Define if HIP is available */
/* #undef HAVE_HIP */

/* Define to 1 if you have the <ifaddrs.h> header file. */
#define HAVE_IFADDRS_H 1

/* Define to 1 if you have the `inet_ntop' function. */
#define HAVE_INET_NTOP 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `abt' library (-labt). */
/* #undef HAVE_LIBABT */

/* Define to 1 if you have the `amdhip64' library (-lamdhip64). */
/* #undef HAVE_LIBAMDHIP64 */

/* Define to 1 if you have the `cuda' library (-lcuda). */
/* #undef HAVE_LIBCUDA */

/* Define to 1 if you have the `cudart' library (-lcudart). */
/* #undef HAVE_LIBCUDART */

/* Define to 1 if you have the `uti' library (-luti). */
/* #undef HAVE_LIBUTI */

/* Define to 1 if you have the `ze_loader' library (-lze_loader). */
/* #undef HAVE_LIBZE_LOADER */

/* Define to 1 if you have the `mach_absolute_time' function. */
/* #undef HAVE_MACH_ABSOLUTE_TIME */

/* Define if C99-style variable argument list macro functionality */
#define HAVE_MACRO_VA_ARGS 1

/* Define to 1 if you have the <memcheck.h> header file. */
/* #undef HAVE_MEMCHECK_H */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if get_nprocs or _SC_NPROCESSORS_ONLN is Vilable. */
#define HAVE_MISC_GETNPROCS 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if you have the `munmap' function. */
#define HAVE_MUNMAP 1

/* Define to 1 if we have support for Windows NT atomic intrinsics */
/* #undef HAVE_NT_INTRINSICS */

/* Define to 1 if you have the `posix_memalign' function. */
#define HAVE_POSIX_MEMALIGN 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the `pthread_mutexattr_setpshared' function. */
#define HAVE_PTHREAD_MUTEXATTR_SETPSHARED 1

/* Define if pthread_setaffinity_np is available. */
#define HAVE_PTHREAD_SETAFFINITY_NP 1

/* Define to 1 if you have the `pthread_yield' function. */
#define HAVE_PTHREAD_YIELD 1

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the `sched_getaffinity' function. */
#define HAVE_SCHED_GETAFFINITY 1

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if you have the `sched_setaffinity' function. */
#define HAVE_SCHED_SETAFFINITY 1

/* Define to 1 if you have the `sched_yield' function. */
#define HAVE_SCHED_YIELD 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `shmat' function. */
/* #undef HAVE_SHMAT */

/* Define to 1 if you have the `shmctl' function. */
/* #undef HAVE_SHMCTL */

/* Define to 1 if you have the `shmdt' function. */
/* #undef HAVE_SHMDT */

/* Define to 1 if you have the `shmget' function. */
/* #undef HAVE_SHMGET */

/* Define to 1 if you have the `sleep' function. */
#define HAVE_SLEEP 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysinfo.h> header file. */
#define HAVE_SYS_SYSINFO_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <thread.h> header file. */
/* #undef HAVE_THREAD_H */

/* Define to 1 if you have the `thread_policy_set' function. */
/* #undef HAVE_THREAD_POLICY_SET */

/* Define to 1 if you have the `thr_yield' function. */
/* #undef HAVE_THR_YIELD */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the <valgrind/drd.h> header file. */
#define HAVE_VALGRIND_DRD_H 1

/* Define to 1 if you have the <valgrind.h> header file. */
/* #undef HAVE_VALGRIND_H */

/* Define to 1 if you have the <valgrind/helgrind.h> header file. */
#define HAVE_VALGRIND_HELGRIND_H 1

/* Define to 1 if you have the <valgrind/memcheck.h> header file. */
#define HAVE_VALGRIND_MEMCHECK_H 1

/* Define to 1 if you have the <valgrind/valgrind.h> header file. */
#define HAVE_VALGRIND_VALGRIND_H 1

/* Define to 1 if the system has the `aligned' variable attribute */
#define HAVE_VAR_ATTRIBUTE_ALIGNED 1

/* Define to 1 if the system has the `used' variable attribute */
#define HAVE_VAR_ATTRIBUTE_USED 1

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Define to 1 if you have the `yield' function. */
/* #undef HAVE_YIELD */

/* Define if ZE is available */
/* #undef HAVE_ZE */

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* defined if the C compiler supports __typeof(variable) */
#define HAVE___TYPEOF 1

/* Define which x86 cycle counter to use */
/* #undef LINUX86_CYCLE_CPUID_RDTSC32 */

/* Define which x86 cycle counter to use */
/* #undef LINUX86_CYCLE_CPUID_RDTSC64 */

/* Define which x86 cycle counter to use */
/* #undef LINUX86_CYCLE_RDTSC */

/* Define which x86 cycle counter to use */
/* #undef LINUX86_CYCLE_RDTSCP */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define if aligned_alloc needs a declaration */
/* #undef NEEDS_ALIGNED_ALLOC_DECL */

/* Define if fdopen needs a declaration */
/* #undef NEEDS_FDOPEN_DECL */

/* Define if mkstemp needs a declaration */
/* #undef NEEDS_MKSTEMP_DECL */

/* Define if pthread_mutexattr_settype needs a declaration */
/* #undef NEEDS_PTHREAD_MUTEXATTR_SETTYPE_DECL */

/* Define if putenv needs a declaration */
/* #undef NEEDS_PUTENV_DECL */

/* Define if snprintf needs a declaration */
/* #undef NEEDS_SNPRINTF_DECL */

/* Define if strdup needs a declaration */
/* #undef NEEDS_STRDUP_DECL */

/* Define if strerror needs a declaration */
/* #undef NEEDS_STRERROR_DECL */

/* Define if sys/time.h is required to get timer definitions */
/* #undef NEEDS_SYS_TIME_H */

/* Define if usleep needs a declaration */
/* #undef NEEDS_USLEEP_DECL */

/* Name of package */
#define PACKAGE "mpl"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "MPL"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "MPL 0.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "mpl"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.1"

/* set to the choice of the posix mutex */
#define POSIX_MUTEX_NAME MPL_POSIX_MUTEX_NATIVE

/* set to the name of the interprocess mutex package */
#define PROC_MUTEX_PACKAGE_NAME MPL_PROC_MUTEX_PACKAGE_POSIX

/* Define to an expression that will result in an error checking mutex type.
   */
/* #undef PTHREAD_MUTEX_ERRORCHECK_VALUE */

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* set to the name of the thread package */
#define THREAD_PACKAGE_NAME MPL_THREAD_PACKAGE_POSIX

/* Define if performing coverage tests */
/* #undef USE_COVERAGE */

/* Define to enable logging macros */
/* #undef USE_DBG_LOGGING */

/* Define to 1 if mutex-based synchronization is used */
/* #undef USE_LOCK_BASED_PRIMITIVES */

/* Define to enable memory tracing */
/* #undef USE_MEMORY_TRACING */

/* Define if we have sysv shared memory */
#define USE_MMAP_SHM 1

/* Define to use nothing to yield processor */
#define USE_NOTHING_FOR_YIELD 1

/* Define to 1 if no atomic primitives are used */
/* #undef USE_NO_ATOMIC_PRIMITIVES */

/* Define if use Windows shared memory */
/* #undef USE_NT_SHM */

/* Define to use sched_yield to yield processor */
/* #undef USE_SCHED_YIELD_FOR_YIELD */

/* Define to use select to yield processor */
/* #undef USE_SELECT_FOR_YIELD */

/* Define to use sleep to yield processor */
/* #undef USE_SLEEP_FOR_YIELD */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define if we have sysv shared memory */
/* #undef USE_SYSV_SHM */

/* Define to use usleep to yield processor */
/* #undef USE_USLEEP_FOR_YIELD */

/* Define to use yield to yield processor */
/* #undef USE_YIELD_FOR_YIELD */

/* Version number of package */
#define VERSION "0.1"

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Defined to return type of backtrace(). */
#define backtrace_size_t int

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif
