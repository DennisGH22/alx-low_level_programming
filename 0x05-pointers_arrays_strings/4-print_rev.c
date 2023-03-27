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
	
	for (i = 0; i < (strlen(s) / 2); i++)
	{
		char temp = s[i];
		s[i] = s[strlen(s)-i-1];
		s[strlen(s)-i-1] = temp;
	}
	_putchar(s);
	_putchar('\n');
}
