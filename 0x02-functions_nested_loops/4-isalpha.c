#include "holberton.h"

/**
* _isalpha - checks for alphabetic character.
* Return: 1 for alphabetic character, 0 if otherwise
* @c: character to check
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
