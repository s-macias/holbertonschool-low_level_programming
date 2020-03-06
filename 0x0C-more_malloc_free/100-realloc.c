#include "holberton.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to a previously allocated memory
 * @old_size: size in bytes of the memory allocated to ptr
 * @new_size: size in bytes of the new memory block
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0, length = 0;
	char *p;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		length = old_size;
	if (old_size > new_size)
		length = new_size;
	while (i < length)
	{
		p[i] = ptr[i];
		i++;
	}
	if (i == length)
		p[i] = '\0';
	free(ptr);
	return (p);
}
