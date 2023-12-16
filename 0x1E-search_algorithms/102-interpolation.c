#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using Interpolation search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (pos < size)
		{
			printf("Value checked array [%ld] = [%d]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array [%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (int)pos;

		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}

	return (-1);
}
