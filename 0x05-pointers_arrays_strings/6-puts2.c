#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to print characters of.
*/

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		/**
		 * Do nothing...
		*/
	}

	for (j = 0; j < i; j += 2)
	{
		putchar(str[j]);
	}
	putchar('\n');
}
