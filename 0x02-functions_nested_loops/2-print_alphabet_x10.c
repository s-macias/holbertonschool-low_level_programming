#include "holberton.h"

/**
 * print_alphabet_x10 - it prints the alphabet, in lowercase 10 times
 * _putchar - prints characters
 */

void print_alphabet_x10(void)
{
	int i = 97;
	int j = 0;

	for (; j <= 9; j++)
	{
		for (; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		i = 97;
	}
}
