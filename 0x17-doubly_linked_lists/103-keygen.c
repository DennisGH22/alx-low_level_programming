#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *codex = "vYUKpxOB2QvKjNP1Dm2q24L_wluGfHB_sV9xPKV25sU!N$l&otaCPFWr9bkcj&ou";

/**
 * main - Generates a password based on the username.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 *
 * Return: 0 upon successful execution.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int len = strlen(argv[1]);
	int i, tmp;
	char password[7];

	tmp = (len ^ 59) & 63;
	password[0] = codex[tmp];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += argv[1][i];
	password[1] = codex[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= argv[1][i];
	password[2] = codex[(tmp ^ 85) & 63];

	tmp = 0;
	int max_char = argv[1][0];
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	password[3] = codex[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (argv[1][i] * argv[1][i]);
	password[4] = codex[(tmp ^ 239) & 63];

	for (i = 0; i < max_char; i++)
		tmp = rand();
	password[5] = codex[(tmp ^ 229) & 63];

	password[6] = '\0';
	printf("%s\n", password);
	return 0;
}
