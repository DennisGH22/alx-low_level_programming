#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 * @str: The string.
 *
 * Return: A pointer to the duplicated string, or NULL if str = NULL.
*/

char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *dup;

	if (str == NULL)
		return (NULL);

	dup = (char *)malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);

	return (dup);
}
