#include "main.h"

/**
 * print_line - Draws a straight line.
*/

void print_line(int n)
{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
