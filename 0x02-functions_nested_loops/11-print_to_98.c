#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_to_98 - it prints n-98 using standard library
* printf - prints formatted text
* @n: first number in the sequence
* Return: nothing
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			if (n != 98)
				printf(", ");
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
