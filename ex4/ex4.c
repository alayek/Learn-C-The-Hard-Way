#include <stdio.h>

/*
* This program is wrong on purpose
* to test valgrind debugger
*/

int main(){

	int age = 10;
	int height;
	
	printf("I'm %d years old.\n"); // error
	printf("I'm %d inches in height.\n", height); // error

	return 0;
}
