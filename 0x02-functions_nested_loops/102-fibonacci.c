#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 for success
*/

int main(void)
{
	long int counter = 3, n1 = 0, n2 = 1, sum = 0;

	printf("%lu, ", n1);
	printf("%lu, ", n2);

	while (counter <= 50)
	{
		sum = n1 + n2;
		printf("%lu", sum);
		n1 = n2;
		n2 = sum;
		if (counter < 49)
			printf(", ");
		counter++;
	}
	printf("\n");
	return (0);
}
