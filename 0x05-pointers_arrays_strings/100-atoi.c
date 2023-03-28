#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
*/

int _atoi(char *s)
{
	int sign = 1, num = 0, i = 0;
    
    if (s[0] == '-') {
        sign = -1;
        i = 1;
    }
    
    for (; s[i] != '\0'; ++i) {
        num = num * 10 + (s[i] - '0');
    }
    
    return sign * num;
}
