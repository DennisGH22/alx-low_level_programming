#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
*/

int _atoi(char *s)
{
	int i, negative_count = 0, num = 0;

	for (i = 0; s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'); ++i) {
		if (s[i] == '-')
		{
			++negative_count;
		}
	}

	for (i = 0; s[i] != '\0' && s[i] >= '0' && s[i] <= '9'; ++i) {
		int current_digit = s[i] - '0';

		if (negative_count % 2)
		{
			current_digit = -current_digit;
		}
		num = num * 10 + current_digit;
	}

	return (0);
}
