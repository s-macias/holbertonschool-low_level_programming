#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of parameters
 * @argv: pointer to array with arguments
 * Return: 0 for success
 */

int main (int argc, char *argv[])
{
	int calc, num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = &argv[2][0];

	calc = get_op_func(operator)(num1, num2);
	printf("%d\n", calc);
	return (0);
}
