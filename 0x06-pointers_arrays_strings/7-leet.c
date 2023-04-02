#include "main.h"

/**
 * leet - Encode a string into 1337.
 * @s: The encoded string.
 *
 * Return: s
*/

char *leet(char *s)
{
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		switch (s[i])
		{
			case 'A':
			case 'a':
				s[i] = '4';
				break;
			case 'E':
			case 'e':
				s[i] = '3';
				break;
			case 'G':
			case 'g':
				s[i] = '6';
				break;
			case 'I':
			case 'i':
				s[i] = '1';
				break;
			case 'O':
			case 'o':
				s[i] = '0';
				break;
			case 'S':
			case 's':
				s[i] = '5';
				break;
			case 'T':
			case 't':
				s[i] = '7';
				break;
			default:
				break;
		}
	}

	return (s);
}
