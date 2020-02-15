#include "holberton.h"

/**
 * print_square - Prints a square
 * @size: Size of the square
 * _putchar - prints characters
 */

void print_square(int size)
{
	int i = 0;
	int  j = 0;

	if (size >= 1)
	{
		for (; i < size ; i++)
		{
			for (; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
