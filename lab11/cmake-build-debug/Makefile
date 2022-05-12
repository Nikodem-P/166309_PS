CC = gcc
CFLAGS = -std=c11 -pedantic -Wall -Werror
LDFLAGS = -lm

SOURCES = point.c namedpoint.c main.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = main

main: ${OBJECTS}

namedpoint.o: namedpoint.c namedpoint.h point.h

point.o: point.c point.h

main.o: ../../../../../Desktop/punkt-struktury/main.c namedpoint.h point.h

.PHONY:	clean

clean:
	rm -f ${TARGET} ${OBJECTS}
