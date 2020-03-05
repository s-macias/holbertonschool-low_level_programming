#include "holberton.h"
#include <stdlib.h>

/**
* *string_nconcat - concatenates two strings
* @s1: string 1 to be appended to
* @s2: string 2 to be appended to s1
* @n: number of bytes from s2 to be appended
* Return: pointer to the new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1 = 0, lens2 = 0, totallen = 0, index = 0, j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[lens1])
	{
		lens1++;
	}
	while (s2[lens2])
	{
		lens2++;
	}
	if (n > lens2)
		n = lens2;
	totallen = lens1 + n + 1;
	p = malloc(sizeof(char) * totallen);

	if (p == NULL)
		return (NULL);
	while (s1[index])
	{
		p[index] = s1[index];
		index++;
	}
	while (index <= totallen)
	{
		p[index] = s2[j];
		index++;
		j++;
	}
	return (p);
}
