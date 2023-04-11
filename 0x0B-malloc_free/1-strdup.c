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
	char *dup;
	size_t len = strlen(str) + 1;

	if (str == NULL)
		return (NULL);

	dup = (char *)malloc(len * sizeof(char));
	if (dup == NULL)
		return (NULL);

	memcpy(dup, str, len);

	return (dup);
}
