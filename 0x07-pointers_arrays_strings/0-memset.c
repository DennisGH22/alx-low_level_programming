#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: Points to the first n bytes of the memory area.
 * @b: Constant type.
 * @n: Number of bytes.
 *
 * Return: A pointer to the memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char*)s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p[i] = (unsigned char)b;
	}

	return (s);
}
