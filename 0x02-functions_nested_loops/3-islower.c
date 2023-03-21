#include <ctype.h>
#include "main.h"

/**
 * _islower - Checks for lowercase character.
 *
 * Return: 1 if c is lowercase and 0 otherwise. 
*/

int _islower(int c)
{
if (islower(c))
{
    return (1);
}

return (0);
}
