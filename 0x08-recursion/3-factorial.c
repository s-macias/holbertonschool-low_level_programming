#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * _putchar - prints a character
 * @n: string to be printed
 * Return: factorial, or 0 for n=1 or n=1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
