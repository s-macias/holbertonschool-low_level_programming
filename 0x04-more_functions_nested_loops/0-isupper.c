#include "holberton.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character to check
 * Return: 1 - if c is uppercase
 */

int _isupper(int c)
{
	int r = 0;

	if (c >= 65 && c <= 90)
	{
		r = 1;
	}
	return (r);
}
