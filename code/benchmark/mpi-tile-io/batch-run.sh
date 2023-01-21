#!/bin/bash


numprocs=64
file=/home/xuechen/collective_io/mpi-io-test.dat
wfile=/home/xuechen/collective_io/mpi-io-test-write.dat
PM_BUF_DIR=/mnt/pmem/coll_io_buf_files
MPICH_REG_INSTALL_DIR=/home/xuechen/collective_io/install_reg
MPIEXEC=${MPICH_REG_INSTALL_DIR}/bin/mpiexec

sudo ./clean-cache.sh
sudo ./clean-cache.sh
#$MPIEXEC -n $numprocs ./mpi-tile-io --nr_tiles_x 8 --nr_tiles_y 16 \
#	--overlap_x 10	--overlap_y 10 \
#	--sz_tile_x 1024 --sz_tile_y 1024 --sz_element 32 \
#	--sz_coll_buf 2048 --write_file 1 --collective 1 \
#	--filename $wfile --buf_filename ${PM_BUF_DIR}/buf_file

$MPIEXEC -n $numprocs ./mpi-tile-io --nr_tiles_x 8 --nr_tiles_y 8 \
        --overlap_x 10  --overlap_y 10 \
        --sz_tile_x 1024 --sz_tile_y 1024 --sz_element 64 \
	--sz_coll_buf 8192 --collective 1 \
        --filename $file --buf_filename ${PM_BUF_DIR}/buf_file

rm ${PM_BUF_DIR}/buf_file*
