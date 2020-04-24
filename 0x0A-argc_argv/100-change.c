#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the min. # of coins to make change for a given amount
 * @argc: number of arguments
 * @argv: pointer to the argument array passed to the program
 * Return: cents, which is the number of coins to return
*/

int main(int argc, char **argv)
{
	int i = 0;
	int cents = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int amount = 0;
	int remainder = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
		amount = 0;
	while (amount != 0)
	{
		cents += (amount / coins[i]);
		remainder = amount % coins[i++];
		amount = remainder;
	}
	printf("%d\n", cents);
	return (0);
}
