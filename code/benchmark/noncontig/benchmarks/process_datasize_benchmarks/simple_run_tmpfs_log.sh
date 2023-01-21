#!/bin/bash

# usage: ./simple_run.sh <nodes> <processes> <processes per node>

dir=${PSCRATCH}/noncontig
file=$dir/noncontig-data
executable=noncontig_tmpfs_log
MPICH_NAIVE_INSTALL_DIR=/global/homes/k/keeganih/mpich_tmpfs_naive_ins
MPICH_LOG_INSTALL_DIR=/global/homes/k/keeganih/mpich_tmpfs_log_ins
MPICH_DEFAULT_INSTALL_DIR=/global/homes/k/keeganih/mpich_ins
MPIEXEC=$MPICH_LOG_INSTALL_DIR/bin/mpiexec
SIZE=1572864

rm -rf $dir
mkdir $dir
lfs setstripe \
    -S 64K \
    -c 4 \
    $dir

# rm -rf data-buffers
# rm -rf log-buffers

# mkdir data-buffers
# mkdir log-buffers

# min veccount 2048
# max veccount 32678

echo "Using ${MPIEXEC}."

time $MPIEXEC -n $2 -ppn $3 ./${executable} \
    -fname $file \
    -cmem_ncfile \
    -coll -timing \
    -veclen 1024 \
    -veccount $4 \
    -elmtcount 1024 \
    -bufsize 524288 \
    -cbsize $SIZE \
    -loops 1

# echo "Tests completed, copying buffers/output..."

# mkdir data-buffers/$SIZE
# mkdir log-buffers/$SIZE

# chmod +rw /tmp/data_buffer*
# chmod +rw /tmp/log_buffer*

# mv /tmp/data_buffer* data-buffers/$SIZE/
# mv /tmp/log_buffer* log-buffers/$SIZE/

echo "Tests complete, clearing tmp files"

$MPIEXEC -n $1 -ppn 1 rm -f /tmp/data_buffer*
$MPIEXEC -n $1 -ppn 1 rm -f /tmp/log_buffer*
