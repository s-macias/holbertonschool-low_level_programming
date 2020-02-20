#include "holberton.h"

/**
* print_rev - prints a string in reverse
* _putchar - prints characters
* return: 0 for success
* @s: string to be printed
* @length: length of the string
* @i: counter
*/

void print_rev(char *s)
{
	int length = 0;
	int i;

	for (; s[length] != '\0'; length++)
	i = length - 1;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
_putchar('\n');
}
