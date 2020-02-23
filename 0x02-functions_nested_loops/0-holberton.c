#include "holberton.h"

/**
 * main - it prints "Holberton"
 * _putchar - prints characters
 * Return: Always 0 (Success)
 */

int main(void)
{
	char string[9] = "Holberton";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
