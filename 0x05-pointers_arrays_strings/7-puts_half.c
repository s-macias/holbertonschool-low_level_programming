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
	int n = 0;

	while (str[length_of_the_string] != '\0')
		length_of_the_string++;
	n = (length_of_the_string / 2);

	while (n <= length_of_the_string)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
