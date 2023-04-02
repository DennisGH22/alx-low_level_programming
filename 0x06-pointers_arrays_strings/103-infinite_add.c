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
	int i, j;

	for (i = 0; *(n1 + i) != '\0'; i++);

	for (j = 0; *(n2 + j) != '\0'; j++);

	printf("%d, %d\n", i, j);

	return (r);
}
