#include <stdio.h>
#include <stdlib.h>

// This is the main function which is called upon the program's startup.
// Use the void argument to indicate there is no argument to be passed
// And use int for the value type
int main(void) {
	// puts is the print-to-console method
	puts("Hello World!\n");

	// printf is used for formatted strings
	// %s is used to signify a string will be formatted into the output.
	printf("%s\n", "This is a formatted string");

	// EXIT_SUCCESS is basically 0
	return EXIT_SUCCESS;
}
