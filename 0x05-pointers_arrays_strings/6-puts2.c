#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to print characters of.
*/

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
