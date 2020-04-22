#include "holberton.h"

/**
* leet - encodes a string into 1337
*@s: string to encode
*
* Return: pointer to encoded string
*/

char *leet(char *s)
{
	int i = 0, j = 0;
	char original[] = "aAeEoOtTlL";
	char coded[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (j != '\0')
		{
			if( s[i] == original[j])
				s[i] = coded[j];
		j++;
		}
	i++;
	}
	return (s);
}