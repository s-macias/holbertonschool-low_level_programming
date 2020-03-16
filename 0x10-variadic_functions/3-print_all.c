#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @char *: pointer to characters to be printed
 * @format: format of the argument to be printed
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list arguments;
	int index = 0;
	char *string;
	char c, i;
	double f;

	va_start(arguments, format);

	while (format != '\0' && format[index] != '\0')
	{
		while (format[index] != '\0')
		{
			switch (format[index])
			{
			case 'c':
				c = va_arg(arguments, int);
			printf("%c, ", c);
			break;
			case 'i':
				i = va_arg(arguments, int);
				printf("%d, ", i);
				break;
			case 'f':
				f = va_arg(arguments, double);
				printf("%f, ", f);
				break;
			case 's':
				string = va_arg(arguments, char*);
				if (string == NULL)
				{
					printf("(nil)");
					return;
				}
				printf("%s", string);
				break;
			}
			index++;
		}
		printf("\n");
		va_end(arguments);
	}
}
