#include "holberton.h"

/**
* rev_string - reverses a string
*
* @s: string to be printed
*/

void rev_string(char *s)
{
	int i = 0;
	int s_length = 0;
	char temp;

	while (s[s_length] != '\0')
		s_length++;
	while (i < s_length--)
	{
		temp = s[i];
		s[i++] = s[s_length];
		s[s_length] = temp;
	}
}
