#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 *
 * Return:  first index where value is located, or -1 if NULL or not found
*/

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = (int)size - 1;
	size_t pivot = 0;
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i == end)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		pivot = (start + end) / 2;
		printf("pivot is %d\n", (int)pivot);
		if (array[pivot] == value)
			return (pivot);
		else if (array[pivot] > value)
			end = pivot - 1;
		else
			start = pivot + 1;
	}
	return (-1);
}
