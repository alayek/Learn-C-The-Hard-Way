#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* code */

    int distance = 200;
    float power = 2.323f;
    double super_power = 56789.4532543;
    char initial = 'A';
    char first_name[] = "Arijit";
    char last_name[] = "Layek";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n",first_name, initial, last_name);

	return 0;
}