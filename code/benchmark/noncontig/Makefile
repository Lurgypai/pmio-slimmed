CC=~/mpich_tmpfs_log_ins/bin/mpicc
CFLAGS=-g -Wall

noncontig: noncontig.o parse_cmdline.o
	$(CC) $(CFLAGS) -o $@ $^

parse_cmdline.o: parse_cmdline.c
	$(CC) -c $(CFLAGS) $^

noncontig.o: noncontig.c
	$(CC) -c $(CFLAGS) $^


clean:
	rm -f *.o
