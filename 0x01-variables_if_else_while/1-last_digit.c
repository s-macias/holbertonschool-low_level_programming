#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - it prints if a number is greater than 5, less than 6 and not 0 or 0
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
		printf("%d is positive\n", n);
		printf(" Last digit of n is %d  and is greater than 5\n");
	else if (n > 0 || n < 6)
		printf(" Last digit of n is %d and is less than 6 and not 0\n");
	else if
		printf(" Last digit of n is %d and is 0\n");
	return (0);
}
