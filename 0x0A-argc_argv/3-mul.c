#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main -  multiplies two numbers.
 * atoi - turns a string into an integer
 * @argc: counts the number of arguments
 * @argv: argument vector: program name and arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int a, b, sum;

	if (argc >= 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		sum = (a * b);
		printf("%d\n", sum);
	}
	else
		printf("Error\n");
	return (0);
}
