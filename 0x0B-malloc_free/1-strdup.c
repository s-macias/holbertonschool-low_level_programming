#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *_strdup - duplicates a string in a new memory location /
 * and returns a pointer to that string
 * @str: string to be duplicated
 * Return: pointer to the duplicated string or NULL if function fails
 */

char *_strdup(char *str)
{
	int length = 0, i = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	while (str[length])
		length++;
	p = malloc((length + 1) * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (p);
	}
	while (i < length)
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
