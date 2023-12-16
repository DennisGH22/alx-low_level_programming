#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using linear search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Comparing %d with %d\n", array[i], value);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
