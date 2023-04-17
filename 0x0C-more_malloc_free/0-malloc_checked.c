#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Number of bytes in memory.
 *
 * Return: A pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b) {
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("Error: malloc failed to allocate memory\n");
		exit(98);
	}

	return ptr;
}
