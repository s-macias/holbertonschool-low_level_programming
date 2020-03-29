#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of ones and zeros (the binary number to convert)
 *
 * Return: the converted number or 0 if there are chars different from 1 or 0
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int length = 0, m = 1;
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	while (b[length] != '\0')
	{
		length++;
	}
	while (length)
	{
		if (!(b[length - 1] == '1' || b[length - 1] == '0'))
			return (0);
		if (b[length - 1] == '1')
			n += m;
		m *= 2;
		length--;
	}
	return (n);
}
