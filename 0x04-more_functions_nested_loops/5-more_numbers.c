#include "holberton.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 */

void more_numbers(void)
{
	int row = 0;
	int column = 0;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 14; column++)
		{
			if (column > 9)
			{
				_putchar((column / 10) + '0');
			}
			_putchar((column % 10) + '0');
		}
		_putchar('\n');
	}
}
