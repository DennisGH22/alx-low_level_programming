#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Performs the operations.
 * @argc: The number of arguments.
 * @argv: An array of arguments passed.
 *
 * Return: Always 0 (Success).
*/

int main(int argc, char **argv)
{
	int num1, num2, op_func;
	char calc = argv[2][0];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (calc != '+' && calc != '-' && calc != '/' && calc != '%'
		&& calc != '*')
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("num1 = %d, num2 = %d\n", num1, num2);

	op_func = get_op_func(argv[2])(num1, num2);

	printf("%d\n", op_func);

	return (0);
}
