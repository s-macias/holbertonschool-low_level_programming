#include "holberton"
#include <stdio.h>

/**
 * main - prints all the argument a program receives
 * @argc: counts the number of arguments
 * @argv: argument vector: program name and arguments
 * Return: 0
 */

int main (int argc, char *arg[])
{
	int i;

	printf ("%s\n", argv[0]);

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", count, argv[i]);
		}

	return (0);
}
