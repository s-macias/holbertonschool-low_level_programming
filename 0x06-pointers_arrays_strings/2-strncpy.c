#include "holberton.h"

/**
 * *_strncpy - copies a string 
 * @dest: string
 * @src: string to be copied
 * @n: number of characters to be copied from source
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i <= n && s[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i <= n; i++)
		dest[i] = '\0'
}
