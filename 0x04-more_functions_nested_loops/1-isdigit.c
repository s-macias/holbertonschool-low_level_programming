#include "holberton.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 * Return: 1 - if c is uppercase
 */

int _isdigit(int c)
{
	int r = 0;

	if (c >= 48 && c <= 57)
	{
		r = 1;
	}
	return (r);
}
