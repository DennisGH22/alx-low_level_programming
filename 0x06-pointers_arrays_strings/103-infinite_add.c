#include <stdio.h>

/**
 * infinite_add - add two string numbers.
 * @n: numbers added.
 * @r: buffer to store the sum.
 * @size_r: size of buffer.
 * 
 * return: r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0;

	while (*(n1 + i++))
		;
	while (*(n2 + j++))
		;

	printf("%d, %d\n", i, j);

	return (r);
}
