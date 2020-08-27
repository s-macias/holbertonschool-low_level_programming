#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 *
 * Return:  first index where value is located, or -1 if NULL or not found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t found = -1;

	if (array == NULL)
		return (found);

	for (found = 0; found < size; found++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)found, array[found]);
		if (value == array[found])
			return (found);
	}
	return (found);
}
