#include "holberton.h"

/**
* puts_half - prints the second half a string
* _strlen - returns the length of a string
* @str : string to be printed
*/

void puts_half(char *str)
{
	int n;
	int length_of_the_string;

	length_of_the_string = _strlen(str);
	n = length_of_the_string / 2;

	for (; n <= length_of_the_string - 1; n++)
	{
		_putchar(str[n]);
	}
_putchar('\n');
}
