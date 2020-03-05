#include "holberton.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements of the array
 * @size: bytes of the elements
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	while (i < nmemb)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
