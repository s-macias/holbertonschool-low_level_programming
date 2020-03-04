#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *_strdup - duplicates a string in a new memory location /
 * and returns a pointer to that string (use malloc and free)
 * @str: string to be duplicated
 * Return: pointer to the duplicated string or NULL if function fails
 */

char *_strdup(char *str)
{
	int length, i = 0;
	char *p;

	while (*str)
		length++;

	p = malloc(length * sizeof(char));

	if (str == NULL)
		return (NULL);
	while (i < length)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
