#include "holberton.h"
#include <stdlib.h>

/**
 *  *str_concat - concatenates two strings
 * malloc - allocates memory
 * @s1: pointer to first string
 * @s2: pointer to the string to be appended to s1
 * Return: pointer to s1 or NULL if s1 or s2 = NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, n = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1 != '\0')
	{
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		s2++;
		j++;
	}
	str = malloc((sizeof(char)) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	for (n = 0; n < i; n++)
	{
		str[n] = s1[n];
	}
	for (; n < i + j; n++)
	{
		str[n] = s2[n - i - 1];
	}
	if (n == i + j + 1)
		str[n] = '\0';
	return (str);
}
