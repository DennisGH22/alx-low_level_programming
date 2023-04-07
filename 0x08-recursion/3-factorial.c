#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The factorial num.
 *
 * Return: -1 if < 0, factorial num if > 1, and 1 if 0.
*/

int factorial(int n)
{
	int err = (n < 0),
	factOne = (n <= 1);

	if (factOne)
	{
		if (err)
			return (-1);
		return (1);
	}
	return (n * factorial(n - 1));
}
