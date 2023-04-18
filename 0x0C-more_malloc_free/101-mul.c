#include <stdlib.h>
#include <stdio.h>

/**
  * main - Multiplies two positive numbers.
  * @argc: Argument count.
  * @argv: Array of arguments.
  *
  * Return: 0 on success, 98 on failure.
*/

int main(int argc, char *argv[])
{
	int i, j, len1, len2;
	unsigned long int res = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < 3; i++)
	{
		len1 = 0;
		while (argv[i][len1])
		{
			if (argv[i][len1] < '0' || argv[i][len1] > '9')
			{
				printf("Error\n");
				return (98);
			}
			len1++;
		}

		len2 = 1;

		for (j = 0; j < len1 - 1; j++)
			len2 *= 10;

		j = 0;

		while (argv[i][j])
		{
			res += (argv[i][j] - '0') * len2;
			len2 /= 10;
			j++;
		}
	}

	printf("%lu\n", res);

	return (0);
}
