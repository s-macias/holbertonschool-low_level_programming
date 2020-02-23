#include "holberton.h"

/**
* _islower - checks for lowercase character.
* Return: 1 for lowercase, 0 otherwise
* @c: character to check
*/

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
