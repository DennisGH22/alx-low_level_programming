#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer printed.
 *
 * Return: Always 0 (Success).
*/

void print_number(int n)
{
	if (n > 0)
	{
		if (n >= 10)
		{
			print_number(n / 10);
		}
		_putchar('0' + n % 10);
	}
	else
	{
		_putchar('-');
		if (n <= -10)
		{
			print_number(n / -10);
		}
		_putchar('0' - n % 10);
	}

	return (0);
}
