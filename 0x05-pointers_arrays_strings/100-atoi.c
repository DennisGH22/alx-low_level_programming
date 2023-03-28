#include <stdlib.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
*/

int _atoi(char *s)
{
	int i, num = 0;

    for (i = 0; s[i] != '\0'; i++) {
        num = num * 10 + (s[i] - '0');
    }
}
