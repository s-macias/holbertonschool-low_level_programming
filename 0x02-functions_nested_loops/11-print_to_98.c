#include <stdio.h>
#include "holberton.h"

/**
* print_to_98 - it prints n-98 using standard library
* _putchar - prints characters
* printf - prints formatted text
* @n: first number in the sequence
*/

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
			printf("%d, ", n);
	}
	else
	{
		for (i = n; i >= 98; i--)
			printf("%d, ", n);
	}
}
