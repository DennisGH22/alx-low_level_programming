#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number checked.
 * 
 * Return - 1 if > 0, 0 if == 0, and -1 if < 0.
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
}
