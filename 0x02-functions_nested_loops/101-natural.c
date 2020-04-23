#include <stdio.h>

/**
 * main - print multiples of 3 and 5 below 1024
 *
 * Return: 0 for success
*/

int main(void)
{
	int i = 0, sum = 0;

	for (; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
