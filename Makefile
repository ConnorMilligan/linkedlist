SHELL = /bin/sh

CC=gcc
CFLAGS=-Wall
DEPS = list.h employee.h
OBJ = main.o list.o employee.o
LIBS = -lncurses

%.o: %.c ${DEPS}
	${CC} -c -o $@ $< ${CFLAGS}

main: ${OBJ}
	${CC} -o $@ $^ ${CFLAGS} ${LIBS}

clean:
	-rm -f *.o main