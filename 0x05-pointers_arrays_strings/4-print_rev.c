#include "holberton.h"

/**
* print_rev - prints a string in reverse
* _putchar - prints characters
* return: 0 for success
* @s: string to be printed
*/

void print_rev(char *s)
{
	int length = 0;

	for (; s[length] != '\0';)
	{
		length++;
	}
	length = length - 1;
	for (; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
