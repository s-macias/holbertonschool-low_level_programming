#include "holberton.h"

/**
* *_strncat - concatenates two strings
* @src: string to be appended
* @dest: string appended to
* @n: number of strings from src to append
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int src_length = 0;
	int dest_length = 0;
	int count = 0;

		for (; *src != '\0'; src_length++)
		{
			src++;
		}
		for (; *dest != '\0'; src_length++)
		{
			dest++;
		}
		count = src_length;
		for (; count <= dest_length + n; count++)
		{
			dest[count] = src[count - src_length];
		}
return (dest);
}
