#include <stdlib.h>
#include "main.h"

/**
 * str_concat -  Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer (Success). NULL (Failure).
*/

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		; /* Do nothing... */

	for (len2 = 0; s2[len2] != '\0'; len2++)
		; /* Do nothing... */

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

	result[len1 + len2] = '\0';

	return (result);
}
