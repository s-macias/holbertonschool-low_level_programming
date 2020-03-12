#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the right operation
 * @s: operator
 * Return: pointer to functin given as a parameter
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

	int i;

	while (i < 5)
	{
		if (*s == *ops[i][1])
			return (*ops[i][1]);
		i++;
	}
	return (NULL);
}
