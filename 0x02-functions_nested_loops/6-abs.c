#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @v: The value computed.
 *
 * Return: The value computed.
*/

int _abs(int value)
{
if (value < 0)
{
value *= -1;
}

return (value);
}
