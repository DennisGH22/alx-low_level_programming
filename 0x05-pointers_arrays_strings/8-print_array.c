#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints elements of an array of integers.
 * @a: Parameter 1.
 * @n: Number of elements of the array to be printed.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
