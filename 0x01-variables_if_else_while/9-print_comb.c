#include <stdio.h>

/**
 * main - Print numbers from 0 to 9 separated by comma and space.
 *
 * Return: Always 0 (Success).
*/

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar('0' + i%10);

if (i == 9)
{
    break;
}

putchar(',');
putchar(' ');

}

putchar('\n');

return (0);
}
