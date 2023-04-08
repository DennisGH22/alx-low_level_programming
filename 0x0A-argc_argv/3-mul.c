#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: Array of pointers to the argument strings.
 *
 * Return: Always 0 (Success).
*/

int main(int argc, char *argv[])
{
    int i, num1, num2, result;

    if (argc != 3) {
        printf("Error\n");
        return 1;
    }
    
    for (i = 1; i < argc; i++) {
        char *arg = argv[i];
        
        while (*arg) {
            if (!isdigit(*arg))
			{
                printf("Error\n");
                return 1;
            }
            arg++;
        }
    }
    
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    result = num1 * num2;
    
    printf("%d\n", result);
    return 0;
}
