#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * _putchar - prints characters
 * Return: last digit of n
 * @n: number to be processed
 */

int print_last_digit(int n)
{

	int ld;

	if (n >= 0)
	{
		ld = n % 10;
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		n = n * -1;
		ld = n % 10;
		_putchar(ld + '0');
		return (ld);
	}
}
