#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: The array.
 * @size: The array size.
 *
 * Return: Return pointer if !0 or success, otherwise NULL.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
