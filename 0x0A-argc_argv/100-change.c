#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change.
 * @argc: The number of command-line arguments.
 * @argv: Array of pointers to the argument strings.
 *
 * Return: 0 if arg is -, 1 if arg is !1.
*/

int main(int argc, char *argv[])
{
	int i, amount, coins = 0;

	int denominations[] = {25, 10, 5, 2, 1};
	int num_denominations = sizeof(denominations) / sizeof(denominations[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	for (i = 0; i < num_denominations; i++)
	{
		coins += amount / denominations[i];
		amount = amount % denominations[i];
	}

	printf("%d\n", coins);

	return (0);
}
