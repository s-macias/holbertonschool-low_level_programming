#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, initilized with a specific char.
 * malloc - allocates memory
 * @size: integer
 * @c: initial value of the array
 * Return: pointer to the array or NULL if function fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	s = malloc(sizeof(char) * size);
	s[0] = c;
	return (s);


}
