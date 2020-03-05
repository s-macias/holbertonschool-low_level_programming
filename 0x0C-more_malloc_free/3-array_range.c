#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: value of the smallest integer
 * @max: value of the greatest integer
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *p;
	int i = 0, size = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	i = min;
	while (i <= max)
	{
		p[i - min] = i;
		i++;
	}
	return (p);
}
