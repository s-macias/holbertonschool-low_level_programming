#include "holberton.h"

/**
 * flip_bits - returns the number of bits you need to flip to change n into m
 * @m: number to be changed into
 * @n: number to changed
 * Return: : number of bits that are different between the two numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter = 0, length = sizeof(unsigned long int) * 8;
	unsigned long int index = 0;

	while (index < length)
	{
		if (((n ^ m) & 1) == 1)
		{
			counter++;
		}
		n >>= 1;
		m >>= 1;
		index++;
	}
	return (counter);
}
