#include <stdio.h>

/*
* This program is wrong on purpose
* to test valgrind debugger
*/

int main(int argc, char* argv[]){

	int age = 10;
	int height = 72;
	
	printf("I'm %d years old.\n", age); // error
	printf("I'm %d inches in height.\n", height); // error

	return 0;
}
