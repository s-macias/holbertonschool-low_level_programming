#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0 for success
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i = 0;
	int numbers;

	if (n == 0)
		return;


	va_start(arguments, n);
	for (; i < n; i++)
	{
		numbers = va_arg(arguments, int);
		printf("%d", numbers);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
