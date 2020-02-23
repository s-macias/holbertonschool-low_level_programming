#include "holberton.h"

/**
 * print_alphabet - it prints the alphabet, in lowercase
 * _putchar - prints characters
 */

void print_alphabet(void)
{
	int i = 97;

	for (; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
