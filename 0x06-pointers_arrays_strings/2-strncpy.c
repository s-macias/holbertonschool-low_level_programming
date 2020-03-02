#include "holberton.h"

/**
 * *_strncpy - copies a string
 * @dest: string
 * @src: string to be copied
 * @n: number of characters to be copied from source
 * Return: pointer to string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int length = 0;
	char *countersrc = src;
	char *counterdest = dest;

	while (*countersrc != '\0')
	{
		countersrc++;
		length++;
	}

	length++;

	if (n > length)
		n = length;

	src = countersrc;

	for (; i < n; i++)
		*counterdest = *countersrc;
	return (counterdest);
}
