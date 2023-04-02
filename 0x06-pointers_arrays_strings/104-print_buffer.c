#include "main.h"

/**
 * print_buffer - Prints a buffer.
 * @b: The buffer to be printed.
 * @size: The size the buffer.
 */

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		_putchar('0' + i);

		for (j = 0; j < 10; j++)
		{
			if ((j + i) >= size)
			{
				_putchar('  ');
			}
			else
			{
				_putchar('0' + *(b + j + i))
			}

			if ((j % 2) != 0 && j != 0)
			{
				_putchar(' ');
			}
		}

		for (j = 0; j < 10; j++)
		{
			if ((j + i) >= size)
			{
				break;
			}
			else if (*(b + j + i) >= 31 && *(b + j + i) <= 126)
			{
				_putchar('0' + *(b + j + i));
			}
			else
			{
				_putchar('.');
			}
		}

		if (i >= size)
		{
			continue;
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
