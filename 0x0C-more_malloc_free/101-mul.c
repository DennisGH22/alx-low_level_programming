#include <stdlib.h>
#include <stdio.h>

/**
  * _isdigit - tells if the string consists of digits
  * @argv: pointer to current item in argument
  * Return: return 0 if all digits, 1 if not all digits.
  */
int _isdigit(const char *argv)
{
	int i = 0;

	while (argv[i])
	{
		if (argv[i] < '0' || argv[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
  * _atoi - converts a string of ascii digits to the values they represent
  * @s: pointer to the source string
  * Return: value of digits
  */
int _atoi(const char *s)
{
	int i = 0, result = 0;

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
		}
		i++;
	}
	return (result);
}

/**
  * main - main function call
  * @argc: argument count
  * @argv: 2D array of arguments
  * Return: return 0 on success, 98 on failure
  */
int main(int argc, char * const argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	return (0);
}
