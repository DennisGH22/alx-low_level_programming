#include <string.h>
#include "main.h"

/**
 * leet - Encode a string into 1337.
 * @s: The encoded string.
 *
 * Return: s
*/

char *leet(char *s)
{
	int i, j;
    char leet_chars[] = {'O', 'I', 'Z', 'E', 'A', 'S', 'G', 'T', 'B', 'q', 'j', 'l', 'p'};
    char leet_nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'q', 'j', 'l', 'p'};

    for (i = 0; i < strlen(s); i++)
	{
        for (j = 0; j < 14; j++)
		{
            if (s[i] == leet_chars[j])
			{
                s[i] = leet_nums[j];
                break;
            }
        }
    }

	return (s);
}
