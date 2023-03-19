#include <stdio.h>

/**
 * main - Prints A to Z in lowercase except for p and e.
 *
 * Return: Always 0 (Success).
*/

int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
if (i == 'p' || i == 'e')
{
continue;
}
putchar(i);
}
putchar('\n');

return (0);
}
