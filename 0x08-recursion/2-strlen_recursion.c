#include "holberton.h"

/**
 * _strlen_recursion - prints the length of a string
 * _putchar - prints a character
 * @s: string to be printed
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
