#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to a new string, or NULL if it fails/ac/av = 0.
*/

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;

		len++;
	}
	len++;

	result = (char *)malloc(len * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			result[k++] = av[i][j];

		result[k++] = '\n';
	}

	result[k] = '\0';

	return (result);
}
