#include "holberton.h"

/**
 * *_memset - fills bytes of memory with a constant byte
 * @s: variable
 * @b: constant byte
 * @n: number of bytes in the memory area pointed to by s
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	for (; i <= n; i++)
		s[i] = b;
	return (s);
}
