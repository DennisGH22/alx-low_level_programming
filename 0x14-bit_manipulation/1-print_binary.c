#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number turned into a binary.
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int flag = 0;

	for (; mask != 0; mask >>= 1)
	{
		if ((n & mask) != 0)
			flag = 1;

		if (flag)
			putchar("0");
	}

	if (!flag)
		putchar("0");
}
