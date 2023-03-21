#include "main.h"

/**
 * print_to_98 - Prints all natural numbers up to 98.
 * @n: The argument number.
 * 
 * Return: Always 0 (Success).
*/

void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
_putchar('0' + n);
_putchar(',');
_putchar(' ');
if (n == 98)
{
_putchar('0' + n);
_putchar('\n');
break;
}
}
}
else
{
for (; n >= 98; n++)
{
_putchar('0' + n);
_putchar(',');
_putchar(' ');
if (n == 98)
{
_putchar('0' + n);
_putchar('\n');
break;
}
}
}
}
