#include "holberton.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 for little endianness, 1 for big endianness
 */

int get_endianness(void)
{
	int n = 1;
	char *p = (char *)&n;

	return (*p);
}
