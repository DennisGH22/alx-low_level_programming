#include <stdio.h>
#include <stdlib.h>

/**
 * num_checker - Check if a string is a positive integer.
 * @str: string to check
 *
 * Return: Int val, or -1 if !+int
 */
int _is_positive(char *str)
{
	int num = 0;

	for (; *str; str++)
	{
		if (*str < '0' || *str > '9')
			return (-1);
		num = num * 10 + (*str - '0');
	}

	return (num);
}

/**
 * main - Multiplies two numbers.
 * @argc: The number of command-line arguments.
 * @argv: Array of pointers to the argument strings.
 *
 * Return: Res, or 1.
*/

int main(int argc, char *argv[])
{
	int sum = 0, num;

	for (int i = 1; i < argc; i++) {
		num = num_checker(argv[i]);
		if (num < 0) {
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
