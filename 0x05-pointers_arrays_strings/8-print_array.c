#include <string.h>
#include "main.h"

/**
 * print_array - Prints elements of an array of integers.
 * @a: Parameter 1.
 * @n: Number of elements of the array to be printed.
*/

void print_array(int *a, int n)
{
	size_t i, len = sizeof(n) / sizeof(a);

	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
