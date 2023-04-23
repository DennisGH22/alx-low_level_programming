#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers.
 * @separator: The string printed between numbers.
 * @n: The number of integers passed to the function.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
