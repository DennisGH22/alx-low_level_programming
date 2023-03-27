#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string, in reverse.
 * @s: The reversed string.
*/

void print_rev(char *s)
{
	_putchar(strrev(s));
	_putchar('\n');
}
