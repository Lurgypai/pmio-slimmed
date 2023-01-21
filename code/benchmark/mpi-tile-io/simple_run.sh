#!/bin/bash

dir=${PSCRATCH}/mpi-tile-io
file=${dir}/mpi-tile-io-data
wfile=${dir}/mpi-tile-io-data-write
MPICH_LOG_INSTALL_DIR=/global/homes/k/keeganih/mpich_tmpfs_log_ins
MPIEXEC=${MPICH_LOG_INSTALL_DIR}/bin/mpiexec

$MPIEXEC -n 128 -ppn 32 ./mpi-tile-io --nr_tiles_x 8 --nr_tiles_y 16 \
        --overlap_x 10  --overlap_y 10 \
        --sz_tile_x 1024 --sz_tile_y 1024 --sz_element 32 \
        --sz_coll_buf 1572864  --write_file 1 --collective 1 \
        --filename $wfile

echo "Tests completed, copying buffers/output..."

rm -r data-buffers/128-processes
rm -r log-buffers/128-processes

mkdir -p data-buffers/128-processes
mkdir -p log-buffers/128-processes

chmod +rw /tmp/data_buffer*
chmod +rw /tmp/log_buffer*

mv /tmp/data_buffer* data-buffers/128-processes/
mv /tmp/log_buffer* log-buffers/128-processes/

echo "Tests complete, clearing tmp files"

$MPIEXEC -n 4 -ppn 1 rm -f /tmp/data_buffer*
$MPIEXEC -n 4 -ppn 1 rm -f /tmp/log_buffer*
