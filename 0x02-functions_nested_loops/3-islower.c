#include "holberton.h"

/**
 * _islower - checks for lowercase character.
 * _putchar - prints characters
 * Return: 1 for lowercase
 * Return: 0 if not lowercase
 * @c: character to check
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
