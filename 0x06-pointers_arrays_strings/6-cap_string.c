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
	int capitalize_next = 1;

	for (i = 0; i < len; i++)
	{
		if (isspace(str[i]))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}
		else
		{
			str[i] = tolower(str[i]);
		}
		
	}

	return (str);
}
