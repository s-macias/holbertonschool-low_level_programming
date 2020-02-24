#include "holberton.h"

/**
 * _strspn - locates a character in a string
 * @s: string where the character will be searched
 * @accept: pointer to substring
 * Return: n, number of bytes matching the string
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int n = 0;

	for (i = 0; s[i] != ','; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
                                break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (n);
}
