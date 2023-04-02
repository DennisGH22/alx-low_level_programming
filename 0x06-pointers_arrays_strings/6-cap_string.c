#include <ctype.h>
#include "main.h"

/**
 * cap_string - Capitalize all words of a string.
 *
 * Return: str
*/

char *cap_string(char *)
{
	int i;
	int len = strlen();
	int capitalize_next = 1;

	for (i = 0; i < len; i++)
	{
		if (isspace(i))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			i = toupper(i);
			capitalize_next = 0;
		}
		else
		{
			i = tolower(i);
		}
		
	}
}
