#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The encoded string.
 *
 * Return: rot13.
*/

char *rot13(char *s)
{
	char offset, *rot = s;

	for (; *s; s++)
	{
		offset = (*s & 32) + 65;
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			*s = (*s - offset + 13) % 26 + offset;
		}
	}

	return (rot);
}
