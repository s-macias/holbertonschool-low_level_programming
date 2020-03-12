#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: integer to be added
 * @b: integer to be added
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub: returns the difference of a and b
 * @a: integer to be substracted from
 * @b: integer to be substracted from a
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: integer to be multiplied
 * @b: integer to be multiplied
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of the division of a by b
 * @a: dividend
 * @b: divisor
 * Return: resul of the division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		exit(100);
	}
	return (a / b);
}

/**
 * op_ mod -  returns the remainder of the division of a by b
 * @a: dividend
 * @b: divisor
 * Return: remainder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
                exit(100);
	}
	return (a % b);
}
