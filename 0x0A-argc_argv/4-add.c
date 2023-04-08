#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Add positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: Array of pointers to the argument strings.
 *
 * Return: 0 (Success), 1 (Error).
*/

int main(int argc, char *argv[])
{
    int i, num, sum;

    sum = 0;
    for (i = 1; i < argc; i++)
    {
        num = is_positive(argv[i]);
        if (num == -1)
            printf("Error\n");
            return (1);
        sum += num;
    }
    printf("%d\n", sum);

    return (0);
}

/**
 * is_positive - Checks validity of the string.
 * @str: sThe string checked.
 *
 * Return: Int val, or -1 if !num.
*/

int is_positive(char *str)
{
    int i, num, len;

    i = 0;
    num = 0;
    len = strlen(str);
    while (i < len)
    {
        if (str[i] < '0' || str[i] > '9')
            return (-1);
        num = num * 10 + (str[i] - '0');
        i++;
    }

    return (num);
}
