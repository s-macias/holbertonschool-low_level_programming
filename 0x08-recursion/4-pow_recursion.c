#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * _putchar - prints a character
 * @n: string to be printed
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion((x), (y - 1)));
	return (0);
}
