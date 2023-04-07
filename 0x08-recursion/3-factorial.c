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
	one = (n >= 0 ==1),
	fac = (n * factorial(n - 1));

	if (one)
		return (1);

	if (fac)
		return (n * factorial(n - 1));

	if (err)
		return (-1);
}
