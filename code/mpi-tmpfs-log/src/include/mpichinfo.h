/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* This file creates strings for the most important configuration options.
   These are then used in the file src/mpi/init/initthread.c to initialize
   global variables that will then be included in both the library and
   executables, providing a way to determine what version and features of
   MPICH were used with a particular library or executable.
*/
#ifndef MPICHINFO_H_INCLUDED
#define MPICHINFO_H_INCLUDED

#define MPICH_CONFIGURE_ARGS_CLEAN "--enable-cxx --disable-fortran --with-device=ch4:ofi --with-pm=hydra --with-hwloc=embedded -prefix=/global/homes/k/keeganih/mpich_tmpfs_log_ins --no-create --no-recursion"
#define MPICH_VERSION_DATE "unreleased development copy"
#define MPICH_DEVICE "ch4:ofi"
#define MPICH_COMPILER_CC "gcc    -O2"
#define MPICH_COMPILER_CXX "g++   -O2"
#define MPICH_COMPILER_F77 "gfortran  "
#define MPICH_COMPILER_FC "gfortran  "
#define MPICH_CUSTOM_STRING ""
#define MPICH_ABIVERSION "0:0:0"

#endif
