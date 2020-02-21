#include "holberton.h"

/**
* *_strcat - concatenates two strings
* @src: string to be appended
* @dest: string appended to
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int src_length = 0;
	int dest_length = 0;
	int length = 0;
	int count = 0;

		for (; *src != '\0'; src_length++)
		{
			src++;
		}
		for (; *dest != '\0'; src_length++)
		{
			dest++;
		}
		length = src_length + dest_length + 1;
		count = src_length;
		for (; count <= length; count++)
		{
			dest[count] = src[count - src_length];
		}
dest[length] = '\0';
return (dest);
}
