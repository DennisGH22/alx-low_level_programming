#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to print characters of.
*/

void puts2(char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
	}
}
