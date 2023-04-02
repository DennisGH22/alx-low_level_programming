#include <stdio.h>

/**
 * infinite_add - Add two string numbers.
 * @n: Numbers added.
 * @r: Buffer to store the sum.
 * @size_r: Size of buffer.
 * 
 * return: r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;
	
	for (i = 0; *(n1 + i) != '\0'; i++)
		;
	for (j = 0; *(n2 + j) != '\0'; j++)
		;
	printf("%d, %d\n", i, j);

	return (r);
}
