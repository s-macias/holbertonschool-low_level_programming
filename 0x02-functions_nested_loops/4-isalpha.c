#include "holberton.h"

/**
 * _islower - checks for lowercase character.
 * _putchar - prints characters
 * Return: 1 for lowercase
 * Return: 0 if not lowercase
 * @c: character to check
 */

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
