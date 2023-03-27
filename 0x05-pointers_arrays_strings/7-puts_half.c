#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The to print half of.
*/

void puts_half(char *str)
{
	size_t i, length = strlen(str), half_length = length / 2, j = (length - 1) / 2;

	if (length % 2 != 0)
	{
		for (i = half_length + 1; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = half_length; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
