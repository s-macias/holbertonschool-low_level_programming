#include "holberton"
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: counts the number of arguments
 * @argv: argument vector: program name and arguments
 * Return: 0
 */

int main (int argc, char *arg[])
{
	int i = 0;
	int sum = 0;


	if ((isdigit(argv[argc][i]) != 1)
	    printf ("Error\n");

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
	}
		printf("%d\n", sum);

	return (0);
}
