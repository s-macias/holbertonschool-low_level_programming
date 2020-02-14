#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: integer
*/

void print_line(int n)
{
	int i = 1;

	if (n != 0)
	{
		for (; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
