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
    if (argc != 2) {
        fprintf(stderr, "Usage: %s username\n", argv[0]);
        return (1);
    }

    char *username = argv[1], password[7];
    int username_length = strlen(username), modifier, i;

    modifier = (username_length ^ 59) & 63;
    password[0] = codex[modifier];

    modifier = 0;
    for (i = 0; i < username_length; i++)
        modifier += username[i];
    password[1] = codex[(modifier ^ 79) & 63];

    modifier = 1;
    for (i = 0; i < username_length; i++)
        modifier *= username[i];
    password[2] = codex[(modifier ^ 85) & 63];

    int first_char = username[0];
    modifier = 0;
    for (i = 0; i < username_length; i++)
    {
        if (username[i] > modifier)
            modifier = username[i];
    }
    srand(first_char ^ 14);
    password[3] = codex[rand() & 63];

    modifier = 0;
    for (i = 0; i < username_length; i++)
        modifier += (username[i] * username[i]);
    password[4] = codex[(modifier ^ 239) & 63];

    for (i = 0; i < first_char; i++)
        modifier = rand();
    password[5] = codex[(modifier ^ 229) & 63];

    password[6] = '\0';
    printf("%s\n", password);
    return (0);
}
