#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * @s: string where the character will be searched
 * @c: character to be searched
 * Return: pointer to first occurrence of c or NULL if there is none
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	s = '\0';
return (s);
}
