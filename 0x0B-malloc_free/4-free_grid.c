#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid previously created
 * free - frees allocated memory
 * @grid: pointer to array previously created
 * @height: number of rows in the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
