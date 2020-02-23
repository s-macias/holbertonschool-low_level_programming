#include "holberton.h"

/**
 * _abs - prints the absolute value of a number
 * _putchar - prints characters
 * Return: absolute value of n
 * @n: number to be checked
 */

int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
