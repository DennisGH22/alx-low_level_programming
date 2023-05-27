#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number.
 * @index: The index.
 *
 * Returns: The value of the bit at index, or -1 if an error occured.
*/

int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int mask = 1UL << index;
    
    if (index >= sizeof(unsigned long int) * 8)
        return (-1);
    
    if ((n & mask) != 0)
        return (1);
    
    return (0);
}
