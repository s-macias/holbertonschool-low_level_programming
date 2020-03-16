#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string printed between strings
 * @n: number of parameters
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i = 0;
	char *string;

	va_start(arguments, n);
	for (; i < n; i++)
	{
		string = va_arg(arguments, char*);
		if (string == NULL)
			printf("nil");
		else
			printf("%s", string);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
