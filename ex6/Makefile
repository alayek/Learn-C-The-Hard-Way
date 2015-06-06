CFLAGS=-Wall -g

build:
	gcc ex6.c -o ex6.out

debug:
	valgrind --track-origins=yes ./ex6.out -v

clean:
	rm -f ex6.out