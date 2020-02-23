#include "holberton.h"

/**
 * jack_bauer  - it prints every minute of the day
 * _putchar - prints characters
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int h = 00;
	int m = 00;

	for (; h <= 23; h++)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		for (; m <= 59; m++)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
