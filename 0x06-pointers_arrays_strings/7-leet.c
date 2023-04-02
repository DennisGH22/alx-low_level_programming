#include "main.h"

/**
 * leet - Encode a string into 1337.
 * @str: The encoded string.
 *
 * Return: str
*/

char *leet(char *str)
{
	while (*str != '\0')
	{
        switch (*str)
		{
            case 'a':
                *str = '4';
                break;
            case 'e':
                *str = '3';
                break;
            case 'l':
                *str = '1';
                break;
            case 'o':
                *str = '0';
                break;
            case 't':
                *str = '7';
                break;
            default:
                break;
        }
        str++;
    }

	return (str);
}
