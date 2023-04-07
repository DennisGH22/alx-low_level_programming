#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The reversed string.
*/

void _print_rev_recursion(char *s)
{
	int length = strlen(*s);
	if (length <= 1)
	{
		return;
	}
	char temp = s[0];
	s[0] = s[length - 1];
	s[length - 1] = temp;
	_print_rev_recursion(&s[1]);
}
