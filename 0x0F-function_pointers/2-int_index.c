#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
* int_index - searches for an integer.
* @array: array on which function will be executed
* @size: number of elements in the array
* @cmp: pointer to the function to compare values
* Return: index of the first element that matches
* If no element matches, return -1
* If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		if (i == size)
		return (-1);
	}
	return (-1);
}
