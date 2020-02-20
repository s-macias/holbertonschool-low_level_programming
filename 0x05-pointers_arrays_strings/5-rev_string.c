#include "holberton.h"

/**
* rev_string - reverses a string
* return: 0 for success
* @s: string to be printed
*/

void rev_string(char *s)
{
	int i = 0;
	int j = 9;
	char s2[10];

	for (; i <= 9; i++)
	{
		s2[i] = s[i];
		j--;
	}

	for (; j <= 9; j++)
	{
		s[j] = s2[i];
		i++;
	}
}
