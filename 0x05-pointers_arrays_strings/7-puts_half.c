#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The to print half of.
*/

void puts_half(char *str)
{
	size_t i, length = strlen(str) / 2;

	for (i = length; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
