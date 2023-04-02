#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer printed.
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n <= -10)
		{
			print_number(n / -10);
		}
		n = -n;
	}

	if (n >= 10)
	{
		print_number(n / 10);
	}

	_putchar('0' + n % 10);
}
