#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to print characters of.
*/

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
