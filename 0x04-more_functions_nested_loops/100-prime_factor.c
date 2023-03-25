#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the number.
 *
 * Return: Always 0 (Success).
*/

int main(void)
{
	long i;
	long num = 612852475143;
	long largestPrime;

	for (i = 2; i <= num; i++) {
		while (num % i == 0) {
			largestPrime = i;
			num /= i;
		}
	}
	printf("%ld\n", largestPrime);

	return (0);
}
