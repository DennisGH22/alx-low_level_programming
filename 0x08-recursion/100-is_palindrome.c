#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string.
 * @s: The string.
 *
 * Return: Length if not empty, otherwise 0.
*/

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * _checker - Checks if a string is a palindrome.
 * @s: The string.
 * @i: start index.
 * @j: end index.
 *
 * Return: 1 if palindrome, otherwise 0.
*/

int _checker(char *s, int i, int j)
{
	if (i >= j)
		return (1);

	if (s[i] != s[j])
		return (0);

	return (_checker(s, i + 1, j - 1));
}

/**
 * is_palindrome - Checks if is a string is a palindrome.
 * @s: The string checked.
 *
 * Return: 1 if palindrome, otherwise 0.
*/

int is_palindrome(char *s)
{
	return (_checker(s, 0, _strlen_recursion(s) - 1));
}
