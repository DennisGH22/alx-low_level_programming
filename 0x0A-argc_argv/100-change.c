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
	int amount, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	coins = 0;

	while (amount > 0)
	{
		if (amount >= 25)
			amount -= 25, coins++;
		else if (amount >= 10)
			amount -= 10, coins++;
		else if (amount >= 5)
			amount -= 5, coins++;
		else if (amount >= 2)
			amount -= 2, coins++;
		else if (amount == 1)
			amount -= 1, coins++;
	}

	printf("%d\n", coins);

	return (0);
}
