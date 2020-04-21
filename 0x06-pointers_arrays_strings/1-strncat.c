#include "holberton.h"

/**
* *_strncat - concatenates two strings
* @src: string to be appended
* @dest: string appended to
* @n: number of bytes from src to append
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int src_length = 0, dest_length = 0, count = 0;

		while (src[src_length] != '\0')
			src_length++;
		while (dest[dest_length] != '\0')
			dest_length++;
		if (n > src_length)
			n = src_length;
		count = dest_length;
		for (; count < dest_length + n; count++)
			dest[count] = src[count - dest_length];
		dest[count] = '\0';
	return (dest);
}