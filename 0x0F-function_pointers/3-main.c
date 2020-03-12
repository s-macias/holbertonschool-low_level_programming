#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of parameters
 * @argv: pointer to array with arguments
 * Return: result of the operation
 */

int main (int argc, char *argv[])
{
	int num1, num2, total;
	int (* opera)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	opera = get_op_func(argv[2]);
	if (opera == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	total = opera(num1, num2);
	printf("%d\n", total);
	return (0);
}
