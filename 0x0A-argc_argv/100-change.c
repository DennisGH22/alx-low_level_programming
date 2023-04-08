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
    int amount, coins, i;
    int coin_values[] = {25, 10, 5, 2, 1};

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    amount = atoi(argv[1]);
    coins = 0;

    for (i = 0; i < 5; i++)
    {
        coins += amount / coin_values[i];
        amount %= coin_values[i];
    }

    printf("%d\n", coins);
    return (0);
}
