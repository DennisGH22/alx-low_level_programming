#include <stdio.h>

/**
 * first - Prints the provided string before the main function.
*/

void __attribute__((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
