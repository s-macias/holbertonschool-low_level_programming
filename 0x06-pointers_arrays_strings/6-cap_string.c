#include "holberton.h"

/**
 * cap_string -  capitalizes all words of a string.
 * @s: string to modify
*
* Return: pointer to string modified
*/

char *cap_string(char *s)
{
	int i = 0, j = 0;
	char sep[] = " ;.!?\"(){}\t\n";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
	while (s[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}
