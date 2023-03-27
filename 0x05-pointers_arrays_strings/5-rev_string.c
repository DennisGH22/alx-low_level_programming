#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_sing - Reverses a sing.
 * @s: The reversed sing.
*/

void rev_sing(char *s)
{
	int i, length = strlen(s);
    
    for (i = 0; i < length / 2; i++) {
        char temp = s[i];
        s[i] = s[length-i-1];
        s[length-i-1] = temp;
    }
}
