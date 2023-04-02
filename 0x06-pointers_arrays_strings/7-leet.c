#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * leet - Encode a string into 1337.
 * @str: The encoded string.
 *
 * Return: str
*/

char *leet(char *str)
{
	int i, j;
	char leet_chars[] = {'O', 'I', 'Z', 'E', 'A', 'S', 'G', 'T', 'B', 'q', 'j', 'l', 'p'};
	char leet_nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'q', 'j', 'l', 'p'};

	for (i = 0; i < strlen(str); i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_nums[j];
				break;
			}
		}
	}

	return (str);
}
