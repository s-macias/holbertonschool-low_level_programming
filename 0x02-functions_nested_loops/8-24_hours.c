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

	while (h <= 23)
	{
		for (; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
		if (!(h == 23 && m == 50))
		{
			h++;
			m = 00;
		}
	}
}
