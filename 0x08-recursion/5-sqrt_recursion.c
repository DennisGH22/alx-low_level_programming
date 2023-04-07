#include "main.h"

/**
 * find_root - Compare index with the sqrt of num.
 * @n: The base num.
 * @i: The index num.
 *
 * Return: The root of index and num.
*/

int find_root(int n, int i)
{
	int square = i * i,
	err = (square > n);

	if (square == n && n / i == i)
	{
		if (err)
			return (-1);
		return (i);
	}
	return (find_root(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of n.
 * @n: base number.
 *
 * Return: -1 if !natural sqrt otherwise the sqrt.
*/

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
