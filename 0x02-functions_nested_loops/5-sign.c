#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 * _putchar - prints characters
 * Return: 1 for positive numbers, 0 if n is 0 and -1 for negative
 * @n: integer to check
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar(45);
			return (-1);
		}
		else
		{
			_putchar(48);
			return (0);
		}
	}
}
