#include "main.h"

/**
 * print_line - Draws a straight line.
 * @n: Number of times the line is printed.
*/

void print_line(int n)
{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		for (; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
