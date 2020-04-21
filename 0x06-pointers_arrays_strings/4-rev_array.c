#include "holberton.h"

/**
 * reverse_array - reverses an array 
 * @a: array to be reversed
 * @n: number of elements of the array
 * 
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n - 1)
	{
		aux = a[i];
		a[i] = a[n - 1];
		a[n] = aux;
		i++;
		n--;
	}
}