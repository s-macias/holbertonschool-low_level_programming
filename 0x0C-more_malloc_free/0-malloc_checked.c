#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: argument passed to malloc
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = (void *)malloc(sizeof(unsigned int) * b);
	if (p == NULL)
		exit(98);
	return (p);
}
