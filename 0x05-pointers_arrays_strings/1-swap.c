#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: variable 1 to swap (integer)
 * @b: variable 2 to swap (integer)
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
