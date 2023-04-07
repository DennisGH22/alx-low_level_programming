#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base num.
 * @y: The power num.
 *
 * Return: -1 if y < 0 otherwise the calc val.
*/

int _pow_recursion(int x, int y)
{
	int err = (y < 0),
	base = (y == 1),
	factOne = (y <= 1);

	if (factOne)
	{
		if (err)
			return (-1);
		else if (base)
			return (x);
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
