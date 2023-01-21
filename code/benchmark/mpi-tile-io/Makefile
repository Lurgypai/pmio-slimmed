MPICH_PM_INSTALL_DIR=/global/homes/k/keeganih/mpich_tmpfs_log_ins

CC=${MPICH_PM_INSTALL_DIR}/bin/mpicc
CFLAGS=-Wall -g -DHAVE_GETOPT_LONG

all: mpi-tile-io

mpi-tile-io: mpi-tile-io.c
	$(CC) $(CFLAGS) mpi-tile-io.c -o $@

clean::
	rm -f mpi-tile-io *.o *~
