#include "3-calc.h"

/**
 * get_op_func - Selects the correct func to perform a requested operation.
 * @s: The operator passed as argument to the program.
 *
 * Return: A pointer to the func that corresponds to the given param operator.
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
