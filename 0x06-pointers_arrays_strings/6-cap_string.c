#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - Capitalize all words of a string.
 * @str: The capitalized string.
 *
 * Return: str
*/

char *cap_string(char *str)
{
	int i;
	int len = strlen(str);

	if (isalpha(str[0]))
		str[0] = toupper(str[0]);

	for (i = 1; i < len; i++)
	{
		if (isspace(str[i - 1]) && isalpha(str[i]))
			str[i] = toupper(str[i]);
	}

	return (str);
}
