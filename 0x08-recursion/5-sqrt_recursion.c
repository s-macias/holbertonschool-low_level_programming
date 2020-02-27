#include "holberton.h"

/**
 * oper - returns the square root of a number
 * @m: number whose square root will be calculated
 * @i: integer
 * Return: squre root of m
 */

int oper(int m, int i)
{
	if (i * i  > m)
		return (-1);
	else if (i * i == m)
		return (i);
	else
		return (oper(m, (i + 1)));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: base number
 * Return: n raised to the power  of 2
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	return (oper(n, i));
}
