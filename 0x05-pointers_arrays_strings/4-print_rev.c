#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string, in reverse.
 * @s: The reversed string.
*/

void print_rev(char *s)
{
	int i, len = strlen(s);
	
	for (i = 0; i < (len / 2); i++)
	{
		char temp = s[i];
		s[i] = s[len-i-1];
		s[len-i-1] = temp;
	}
	_putchar(s);
	_putchar('\n');
}
