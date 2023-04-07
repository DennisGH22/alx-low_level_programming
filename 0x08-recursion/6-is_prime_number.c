#include "main.h"

/**
 * is_prime_number - Checks if num is prime.
 * @n: The num checked.
 *
 * Return: 1 if num is prime, otherwise 0.
*/

int i;

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	for (i = 0; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
