#include "holberton.h"

/**
 * is_prime_number - checks if a number is a prime
 * @n: number to be checked
 * Return: 1 for primes, or 0 if otherwise
 */

int is_prime_number(int n)
{
	int pmod;
	int i = n / 2;

	if (n < 2)
		return (0);
	if (n >= 2)
		pmod = pmo % (i - 1;)
		return (is_prime_number(n - 1));
}
