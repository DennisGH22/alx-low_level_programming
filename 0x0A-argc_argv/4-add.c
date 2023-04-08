#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers..
 * @argc: The number of command-line arguments.
 * @argv: Array of pointers to the argument strings.
 *
 * Return: Always 0 (Success).
*/

int main(int argc, char *argv[])
{
    int sum = 0;
    
    if (argc == 1) {
        printf("%d\n", sum);
        return 0;
    }
    
    for (int i = 1; i < argc; i++) {
        char *arg = argv[i];
        while (*arg) {
            if (!isdigit(*arg)) {
                printf("Error\n");
                return 1;
            }
            arg++;
        }
        sum += atoi(argv[i]);
    }
    
    printf("%d\n", sum);
    return 0;
}
