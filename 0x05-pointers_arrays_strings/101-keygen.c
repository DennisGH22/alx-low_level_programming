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
	srand(time(NULL));
    int random_number = rand() % 2;
    if (random_number == 0)
	{
        printf("Tada! Congrats\n");
	}
	
	return (0);
}
