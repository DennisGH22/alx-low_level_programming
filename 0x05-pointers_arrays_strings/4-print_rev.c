#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string, in reverse.
 * @s: The reversed string.
*/

void print_rev(char *s)
{
	int i;
	size_t length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
