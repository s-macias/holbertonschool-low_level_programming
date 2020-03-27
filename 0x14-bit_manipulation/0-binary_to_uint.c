#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * pow - calculates the power raised to a base value
 * @b: pointer to a string of ones and zeros (the binary number to convert)
 *
 * Return: the converted number or 0 if there are chars different from 1 or 0
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int length = 0, exp = 0;
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	while (*b && *b != 0 && *b != 1)
	{
		if (*b != 1 && *b != 0)
			return (0);
		length++;
	}
	for (; length >= 0; length--)
	{
		n += b[length] << exp;
		exp++;
	}
	return (n);
}
