CFLAGS=-Wall -g

build:
	gcc ex4.c -o ex4.out

clean:
	rm -f ex4.out

debug:
	valgrind --track-origins=yes ./ex4.out -v
