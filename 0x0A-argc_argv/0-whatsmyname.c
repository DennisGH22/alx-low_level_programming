#include <stdio.h>

/**
 * main - Prints its name.
 * @argc: The count of command line arguments.
 * @argv: Array of pointers to the argument strings.
 *
 * Return: Always 0 (Success).
*/

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
