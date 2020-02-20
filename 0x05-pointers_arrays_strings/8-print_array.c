#include "holberton.h"
#include <stdio.h>

/**
* print_array - prints an array
* return: 0
* printf - prints formatted text
* @a: array to be printed
* @n: size of the array
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (; *a <= n; ++i)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
