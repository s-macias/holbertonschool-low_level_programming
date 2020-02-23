#include "holberton.h"

/**
 * times_table - it prints the 9 times table, starting with 0
 * _putchar - prints characters
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int m1 = 0;
	int m2 = 0;
	int m;

	while (m1 <= 9)
	{
		for (; m2 <= 9; m2++)
		{
			m = m1 * m2;
			if (m > 9)
			{
				_putchar((m1 / 10) + '0');
				_putchar((m2 % 10) + '0');
				_putchar(',');
				_putchar(' ');
				if (m2 == 9)
				{
					_putchar('\n');
					m1++;
				}
				else
				{
					m2 = 0;
				}
			}
			else
				_putchar (' ');
		}
	}
}
