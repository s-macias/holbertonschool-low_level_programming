#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_iterator - executes a function given as a parameter on each element of
* an array.
* @array: array on which function will be executed
* @size: size of the array
* @action: pointer to the function  that will be used
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
