#include "main.h"

/**
 * leet - Encode a string into 1337.
 * @s: The encoded string.
 *
 * Return: str
*/

char *leet(char *s)
{
	while (*s != '\0')
	{
		switch (*s)
		{
			case 'a':
				*s = '4';
				break;
			case 'e':
				*s = '3';
				break;
			case 'l':
				*s = '1';
				break;
			case 'o':
				*s = '0';
				break;
			case 't':
				*s = '7';
				break;
			default:
				break;
		}
		s++;
	}

	return (s);
}
