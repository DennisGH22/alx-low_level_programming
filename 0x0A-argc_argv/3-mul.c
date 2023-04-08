#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: Array of pointers to the argument strings.
 *
 * Return: Always 0 (Success).
*/

int main(int argc, char *argv[])
{
    int result = 1;

    if (argc < 3)
    {
        printf("Error\n");
        return (1);
    }

    for (int i = 1; i < argc; i++)
    {
        char *arg = argv[i];

        while (*arg)
        {
            if (!isdigit(*arg) && *arg != '-')
            {
                printf("Error\n");
                return (1);
            }
            arg++;
        }

        int num = atoi(argv[i]);
        result *= num;
    }

    printf("%d\n", result);
    return (0);
}
