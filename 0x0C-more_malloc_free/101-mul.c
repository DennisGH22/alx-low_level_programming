#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers.
 * @argc: Argument.
 * @argv: Count.
 *
 * Return: Always 0 (Success).
*/

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		return (98);
	}

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
