#include "main.h"

/**
 * is_prime_number - Checks if num is prime.
 * @n: The num checked.
 * @i: The iterator.
 *
 * Return: 1 if num is prime, otherwise 0.
*/

int checker(int n, int i)
{
	if (i == n)
		return (1);

	if (n % i == 0)
		return (0);
	
	return checker(n, i + 1);
}

/**
 * is_prime_number - Checks if num is prime.
 * @n: The num checked.
 *
 * Return: 1 if num is prime, otherwise 0.
*/

int is_prime_number(int n)
{
	return (checker(n, 2));
}
