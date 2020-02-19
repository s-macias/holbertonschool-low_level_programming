#include "holberton.h"

/**
* _strlen - returns the length of a string
* @s: string whose length will be calculated
*/

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; ++i)
	{
		s++;
	}
return(i);
}
