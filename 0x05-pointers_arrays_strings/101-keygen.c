#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords.
 * 
 * Return: Always 0 (Success).
*/

int main()
{
	size_t i;

	char password[9];

	const char *charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=";

	size_t charset_len = strlen(charset);

	srand(time(NULL));

	for (i = 0; i < 8; i++) {
		password[i] = charset[rand() % charset_len];
	}

	password[8] = '\0';
	printf("%s\n", password);
	
	return (0);
}
