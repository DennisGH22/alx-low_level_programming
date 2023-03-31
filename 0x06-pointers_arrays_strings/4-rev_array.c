#include "main.h"

/**
 * reverse_array - Reverse the contents of an array of integers.
 * @a: Array of integers.
 * @n: Number of elements in the array.
*/

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
