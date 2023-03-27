#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords.
 * 
 * Return: Always 0 (Success).
*/

int main()
{
	int r, c;
	time_t t;

	srand((unsigned int) time(&t));

	for (c = 0; c < 2772; c = c + r)
	{
		r = rand() % 128;

		if ((c + r) > 2772)
		{
			break;
		}

		printf("%c", r);
	}
	printf("%c\n", (2772 - c));

	return (0);
}
