#include "holberton.h"

/**
 *  *_strstr - finds the first occurrence of the substring in another string
 * @haystack: string where the character will be searched
 * @needle: string to be searched
 * Return: n, pointer to substring or NULL if there is none
 */

char *_strstr(char *haystack, char *needle)
{
	char *n;

	n = needle;

	while (*needle != '\0')
	{
		while (*haystack != '\0')
		{
			if (*needle == *haystack)
			{
				return (needle);
			}
			needle++;
		}
		needle = n;
		haystack++;
	}
	return ('\0');
}
