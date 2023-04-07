#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The printed string.
 *
 * Return: Always 0 (Success).
*/

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
