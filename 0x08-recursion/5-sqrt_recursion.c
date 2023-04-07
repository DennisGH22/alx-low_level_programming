#include <math.h>
#include "main.h"

/**
 * find_root - Compare index with the sqrt num.
 * _sqrt_recursion - Calculates the natural sqrt of n.
 * @n: The base num.
 * @i: The index num.
 *
 * Return: -1 if !natural sqr root otherwise the sqrt.
*/

void find_root(int n, int i)
{
	int err = (n > sqrt(n));

	if (i == sqrt(n))
	{
		if (err)
			return(-1);
		return (i);
	}

	if (i <= sqrt(n))
		return (find_root(n, i + 1));
}

int _sqrt_recursion(int n)
{
	int err = (n < 0),
	factOne = (n <= 1);

	if (factOne)
	{
		if (err)
			return (-1);
		return (n);
	}
	return (find_root(n, 2));
}
