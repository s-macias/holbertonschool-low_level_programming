#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - prints a name
 * @f: pointer to function f
 * @name: name to be printed
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL)
		return;
	if (f != NULL)
	f(name);
}
