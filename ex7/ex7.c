#include "stdio.h"

int main(int argc, char const *argv[])
{
	int bugs = 100;
	double bug_rate = 1.3;

	printf("You have %d bugs at the imaginary rate of %.2f\n", bugs, bug_rate);

	long universe_of_defects = 1L * 1024L * 1024L * 1024L;

	printf("The entire universe has %ld bugs\n", universe_of_defects);

	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %.2f bugs\n", expected_bugs);

	double part_of_universe = expected_bugs / universe_of_defects;
	printf("There is only a %e portion of the universe\n", part_of_universe);

	/*
	* A demo of something weird
	*/
	char null_byte = '\0';
	int care_percentage = bugs * null_byte;
	printf("Which means you should care %d%%\n", care_percentage);

	// break with valgrind
	printf("%s\n", null_byte);
	printf("%c\n", null_byte);
	return 0;
}