CC=gcc
CFLAGS = -g -Wall -std=gnu99
LIBS = -lpthread

make: log-display merge-cn merge-ion

merge-cn: merge-cn.o parse_cmdline.o
	$(CC) -o $@ $(CFLAGS) $^ $(LIBS)

merge-ion: merge-ion.o parse_cmdline.o
	$(CC) -o $@ $(CFLAGS) $^ $(LIBS)

log-display: log-display.o parse_cmdline.o
	$(CC) -o $@ $(CFLAGS) $^ $(LIBS)

log-display-ion: log-display-ion.o parse_cmdline.o
	$(CC) -o $@ $(CFLAGS) $^ $(LIBS)

parse_cmdline.o: parse_cmdline.c
	$(CC) -c $(CFLAGS) $^ $(LIBS)

clean:
	rm -f *.o
