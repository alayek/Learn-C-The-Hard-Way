CFLAGS=-Wall -g

build:
	gcc ex7.c -o ex7.out

debug:
	valgrind --track-origins=yes ./ex7.out -v

clean:
	rm -f ex7.out