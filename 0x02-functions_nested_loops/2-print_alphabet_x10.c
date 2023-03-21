#include "main.h"

/**
 * print_alphabet - Prints alphabets.
 *
 * Return: Always 0 (Success).
*/

void print_alphabet(void)
{
int i;
char j;
for (i = 0; i <= 9; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(i);
}
_putchar('\n');
}
}
