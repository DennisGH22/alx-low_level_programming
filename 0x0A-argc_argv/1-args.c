#include <stdio.h>

/**
 * main - Prints the number of arguments passed.
 * @argc: The number of command-line arguments.
 * @argv: Array of pointers to the argument strings.
 *
 * Return: Always 0 (Success).
*/

int main(int argc, char *argv[])
{
	int i, count;

	for (i = 0; i < argc; i++)
		count++;

	printf("%d\n", count);

	return (0);
}
