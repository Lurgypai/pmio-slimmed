#!/bin/bash

# usage: ./simple_run.sh <nodes> <processes> <processes per node>

dir=${PSCRATCH}/noncontig
file=$dir/noncontig-data
executable=noncontig_tmpfs_log
MPICH_NAIVE_INSTALL_DIR=/global/homes/k/keeganih/mpich_tmpfs_naive_ins
MPICH_LOG_INSTALL_DIR=/global/homes/k/keeganih/mpich_tmpfs_log_ins
MPICH_DEFAULT_INSTALL_DIR=/global/homes/k/keeganih/mpich_ins
MPIEXEC=$MPICH_LOG_INSTALL_DIR/bin/mpiexec
# SIZE=700000
SIZE=1048576
# SIZE=16384

rm -rf $dir
mkdir $dir

$MPIEXEC -n $1 -ppn 1 rm -rf /tmp/log_buffers
$MPIEXEC -n $1 -ppn 1 rm -rf /tmp/data_buffers

$MPIEXEC -n $1 -ppn 1 mkdir /tmp/log_buffers
$MPIEXEC -n $1 -ppn 1 mkdir /tmp/data_buffers

lfs setstripe \
    -S K \
    -c 1024 \
    $dir

# rm -rf data-buffers
# rm -rf log-buffers

# mkdir data-buffers
# mkdir log-buffers

echo "Using ${MPIEXEC}."

# 1024 * 1024 * 4 * 5120 = 20GiB
# 4 is the size of each element

time $MPIEXEC -n $2 -ppn $3 ./${executable} \
    -fname $file \
    -cmem_ncfile \
    -coll -timing \
    -veclen 1024 \
    -veccount 1024 \
    -elmtcount 4096 \
    -bufsize 524288 \
    -cbsize $SIZE \
    -loops 1

echo "Tests completed, copying buffers/output..."

mv $file .

rm -r data_buffers
rm -r log_buffers

mkdir data_buffers
mkdir log_buffers

$MPIEXEC -n $1 -ppn 1 rsync -r /tmp/log_buffers/ log_buffers/

# these take a ton of space, skip for now
# $MPIEXEC -n $1 -ppn 1 rsync -r /tmp/data_buffers/ data_buffers/
 
echo "Tests complete, clearing tmp files"

$MPIEXEC -n $1 -ppn 1 rm -rf /tmp/data_buffers
$MPIEXEC -n $1 -ppn 1 rm -rf /tmp/log_buffers
