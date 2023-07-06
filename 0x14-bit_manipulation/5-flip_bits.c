#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip.
 * @n: Num 1.
 * @m: Num 2.
 *
 * Return: The number of bits you would need to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int count = 0;

	for (; difference != 0; difference >>= 1)
		count += difference & 1;

	return (count);
}
