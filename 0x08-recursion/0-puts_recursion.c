#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
        return;
	}
    else
	{
        puts(s);
        _puts_recursion(s + 1);
	}
}