#include <stdio.h>
#include "holberton.h"

/**
* print_to_98 - it prints n-98 using standard library
* @n: first number in the sequence
* Return: nothing
*/

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			if (n != 98)
				prinf(", ");
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	printf("\n");
}