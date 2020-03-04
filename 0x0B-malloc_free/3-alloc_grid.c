#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * malloc - allocates memory
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (; i < height; i++)
		p[i] = malloc(sizeof(int) * width);
	if (p[i] == NULL)
	{
		for (; i >= 0; i--)
			free(p[i]);
	}
	for (; j < height; j++)
		for (; i < width; i++)
			p[j][i] = 0;
	return (p);
	for (; i >= 0; i--)
		free(p[i]);
	free(p);
}
