#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number turned into a binary.
*/

void print_binary(unsigned long int n)
{
	int flag = 0;

	if (n != flag)
		putchar('0' + (flag = 1));
	else if (flag)
		putchar('0' + flag);

	print_binary(n >> 1);
	putchar('0' + (n & 1));
}
