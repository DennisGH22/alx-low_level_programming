#include "main.h"

/**
 * print_to_98 - Prints all natural numbers up to 98.
 * @n: The argument number.
 * 
 * Return: Always 0 (Success).
*/

void print_to_98(int n)
{
for (n = 0; n <= 98; n++)
{
    _putchar('0' + n);
    _putchar(',');
    _putchar(' ');
}
}
