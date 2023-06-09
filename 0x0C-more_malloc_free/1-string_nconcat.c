#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The input string.
 * @s2: The input string.
 * @n: The number of bytes.
 *
 * Return: Pointer (Success), NULL (Fail).
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length = 0, s2_length = 0, i, j;
	char *result;

	s1 = (s1 == NULL) ? "" : s1;

	s2 = (s2 == NULL) ? "" : s2;

	while (s1[s1_length] != '\0')
		s1_length++;

	while (s2[s2_length] != '\0')
		s2_length++;

	n = (n >= s2_length) ? s2_length : n;

	result = (char *)malloc((s1_length + n + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		result[i] = s2[j];
	result[i] = '\0';

	return (result);
}
