#include "main.h"

/**
 * cap_string - Capitalize all words of a string.
 * @str: The capitalized string.
 *
 * Return: str
*/

char *cap_string(char *str)
{
	int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 'a' + 'A';
            }
        }
        else {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] - 'A' + 'a';
            }
        }
    }

	return (str);
}
