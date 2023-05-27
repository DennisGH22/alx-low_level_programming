#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number turned into a binary.
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	else if (n == 1)
	{
		putchar('1');
		return;
	}

	for (; mask != 0; mask >>= 1)
	{
		if ((n & mask) != 0)
			flag = 1;

		if (flag)
			putchar('0' + ((n & mask) != 0));
	}
}
