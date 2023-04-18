#include <stdio.h>
#include <stdlib.h>

/**
 * is_all_digits - Checks if a string consists of only digits.
 * @str: Pointer to the string to check.
 *
 * Return: 1 if the string contains non-digit characters, 0 otherwise.
*/

int is_all_digits(char *str)
{
	int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return (1);
        }
    }

    return (0);
}

/**
 * _atoi - Converts a string of ASCII digits to an integer.
 * @str: Pointer to the string to convert.
 *
 * Return: The integer value of the string.
*/

int _atoi(char *str)
{
    int i, result = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        result *= 10;
        result += str[i] - '0';
    }

    return (result);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 98 on failure.
*/

int main(int argc, char *argv[])
{
	int i;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    for (i = 1; i < argc; i++)
    {
        if (is_all_digits(argv[i]))
        {
            printf("Error\n");
            return (98);
        }
    }

    return (0);
}
