#include <stdio.h>

/**
 * main - Prints the size of various types.
 *
 * Return: Always 0 (Success).
*/

int main(void)
{
char text = 'Size of a';
printf("%c", text" char: "sizeof(char));
printf("%c", text" int: "sizeof(int));
printf("%c", text" long int: "sizeof(long int));
printf("%c", text" long long int: "sizeof(long long int));
printf("%c", text" float: "sizeof(float));
}
