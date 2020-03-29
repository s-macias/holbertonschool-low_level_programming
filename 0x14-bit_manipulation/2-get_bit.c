#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: position of the bit to return
 * @n: number whose bit at index will be printed
 * Return: : the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	else
	{
		n >>= index;
		return (n & 1);
	}
}
