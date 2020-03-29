#include "holberton.h"

/**
 * set_bit - sets the value of a bit into 1 at a given index.
 * @index: position of the bit to set
 * @n: number whose bit at index will be changed
 * Return: : 1 if success or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	else
	{
		*n = *n | (1 << index);
		return (1);
	}
}
