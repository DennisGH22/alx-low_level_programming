#include <string.h>
#include "main.h"

/**
 * leet - Encode a string into 1337.
 * @s: The encoded string.
 *
 * Return: s
*/

char *leet(char *str)
{
	int i;

for (i = 0; i < strlen(str); i++)
	{
		switch (str[i])
		{
			case 'A':
			case 'a':
				str[i] = '4';
				break;
			case 'E':
			case 'e':
				str[i] = '3';
				break;
			case 'G':
			case 'g':
				str[i] = '6';
				break;
			case 'I':
			case 'i':
				str[i] = '1';
				break;
			case 'O':
			case 'o':
				str[i] = '0';
				break;
			case 'S':
			case 's':
				str[i] = '5';
				break;
			case 'T':
			case 't':
				str[i] = '7';
				break;
			default:
				break;
		}
	}
}
