#include <stdio.h>

/**
 * print_prime_n - prints the largest prime factor of the number n
 *
 * Return: 0 for success
 */

int main(void)
{
	long int divisor = 2, n = 61285247514;

	while (n != 1)
	{
		if (n % divisor == 0)
			n = n / divisor;
		else
			divisor++;
	}
	printf("%li\n", divisor);
	return (0);
}
