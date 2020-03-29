#include "holberton.h"

/**
 * clear_bit - clears the value of a bit into 0 at a given index.
 * @index: position of the bit to clear
 * @n: number whose bit at index will be changed
 * Return: : 1 if success or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
