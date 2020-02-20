#include "holberton.h"

/**
* _strcpy - prints a string onto another string
* _putchar - prints characters
* return: dest
* @src: string to be copied from
* @dest: string to be copied to
*/

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	for (; src[length] != '\0';)
		length++;

	for (; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
