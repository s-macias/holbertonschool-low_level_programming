#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: Size of the triangle
 * _putchar - prints characters
 */

void print_triangle(int size)
{
	int column = 0;
	int row = 0;
	int i = 0;

	if (size > 0)
	{
		for (; column < size; column++)
		{
			row = column + 1;
			i = 0;
			for (; row < size; row++)
			{
				_putchar(' ');
			}
			for (; i < column + 1; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
