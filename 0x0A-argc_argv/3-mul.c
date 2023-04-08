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
    int sum = 0;
    int i, j;
    
    if (argc == 1)
	{
        printf("0\n");
        return 0;
    }
    
    for (i = 1; i < argc; i++)
	{
        char *arg = argv[i];
        
        for (j = 0; arg[j]; j++)
		{
            if (!isdigit(arg[j]))
			{
                printf("Error\n");
                return 1;
            }
        }
        
        sum += atoi(argv[i]);
    }
    
    printf("%d\n", sum);
    return 0;
}
