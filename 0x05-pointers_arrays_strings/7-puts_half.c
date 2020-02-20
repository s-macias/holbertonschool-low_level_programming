#include "holberton.h"

/**
* puts_half - prints the second half of a string
* return: 0
* _putchar - prints a character
* @str: string to print
*/

void puts_half(char *str)
{
	int length_of_the_string = 0;
	int n;

	for (; *str != '\0'; ++length_of_the_string)
	{
		str++;
	}
	n = length_of_the_string / 2;

	for (; n <= length_of_the_string - 1; n++)
	{
		_putchar(str[n]);
	}
_putchar('\n');
}
