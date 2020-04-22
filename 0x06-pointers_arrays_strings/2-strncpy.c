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
	int i = 0, length = 0;
	char *temp_src = src, *temp_dest = dest;

	while (*src != '\0')
	{
		src++;
		length++;
	}
	length++;
	if (n > length)
	{
		for (; i > n; i++)
			dest[i] = '\0';
		n = length;
	}
	src = temp_src;

	for (; i < n; i++)
		*dest = *src;

	return (temp_dest);
}
