#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 * _putchar - prints a character
 * @n: the number of diagnoals you want to print
*/

void print_diagonal(int n)
{
	int row = 1, col = 1;

	if (n <= 0)
		_putchar('\n');
	for (; row <= n; ++row)
	{
		for (; col < row - 1; col++)
		{
			_putchar(32);
		}
		_putchar(92);
	}
	_putchar('\n');
}
