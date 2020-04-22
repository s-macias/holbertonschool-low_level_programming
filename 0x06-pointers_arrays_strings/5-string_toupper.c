#include "holberton.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase.
* @s: string to modify
*
* Return: pointer to modified string
*/

char *string_toupper(char *s)
{
	char *aux = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32;
		s++;
	}
	return (aux);
}
