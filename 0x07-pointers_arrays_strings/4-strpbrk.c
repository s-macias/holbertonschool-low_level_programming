#include "holberton.h"

/**
 * *_strpbrk  - searches a string for any of a set of bytes
 * @s: string where the character will be searched
 * @accept: string to be searched
 * Return: n, pointer to the first occurence of s or NULL if there is none
 */

char *_strpbrk(char *s, char *accept)
{
	char *n;

	n = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		accept = n;
		s++;
	}
	return ('\0');
}
