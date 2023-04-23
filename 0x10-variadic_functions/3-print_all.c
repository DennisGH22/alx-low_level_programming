#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, c;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				switch (str != NULL)
				{
					case 1:
						printf("%s", str);
						break;
					default:
						printf("(nil)");
						break;
				}
				break;
			default:
				break;
		}
		if (format[i + 1] && strchr("cifs", format[i]))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
