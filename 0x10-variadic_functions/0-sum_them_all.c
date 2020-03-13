#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 * Return: sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(arguments, n);
	for (; i < n; i++)
		sum = sum + va_arg(arguments, int);
	va_end(arguments);
	return (sum);
}
