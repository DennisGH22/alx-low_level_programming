#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
*/

int _atoi(char *s)
{
	int i = 0;
int d = 0;
int n = 0;
int digit = 0;

while (s[i] != '\0') {
    if (s[i] == '-') {
        d++;
    } else if (s[i] >= '0' && s[i] <= '9') {
        digit = s[i] - '0';
        if (d % 2 == 1) {
            digit = -digit;
        }
        n = n * 10 + digit;
    } else if (n != 0) { // Break if we've already parsed a number
        break;
    }
    i++;
}

return n;

}
