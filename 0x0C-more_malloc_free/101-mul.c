#include <stdio.h>
#include <stdlib.h>

int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int _atoi(const char *s)
{
    int n = 0;
    int sign = 1;

    while (*s)
    {
        if (*s == '-')
            sign = -sign;
        else if (_isdigit(*s))
            n = n * 10 + (*s - '0');
        else
            return 0;
        s++;
    }
    return sign * n;
}

int multiply(int a, int b)
{
    return a * b;
}

/**
 * main - Multiplies two positive numbers.
 * @argc: Argument.
 * @argv: Count.
 *
 * Return: Always 0 (Success).
*/

int main(int argc, char **argv)
{
    int num1, num2;

    if (argc != 3)
    {
        return 98;
    }
    if (!_isdigit(*argv[1]) || !_isdigit(*argv[2]))
    {
        return 98;
    }
    num1 = _atoi(argv[1]);
    num2 = _atoi(argv[2]);
    printf("%d\n", multiply(num1, num2));
    return 0;
}
