#include "holberton.h"

/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes in the memory area pointed to by s
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i <  n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i <= n; i++)
		dest[i] = '-';
	return (dest);
}
