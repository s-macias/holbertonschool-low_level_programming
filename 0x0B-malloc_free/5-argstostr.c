#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: pointer to a string containing the arguments of the program
 * Return: a pointer to the new string or NULL if it fails
 */

int length_string(int ac, char **av)
{
	int strn, cha, sumofstrings, total = 0;

	for (; strn <= ac; strn++)
	{
		while (av[cha])
		{
			cha++;
			sumofstrings++;
		}

		total = sumofstrings + ac + 1;
		return (total);
	}
}

char *argstostr(int ac, char **av)
{
	int i, strn, cha, len_new_string, total = 0; char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	len_new_string = length_string(ac, av) + ac + 1;
	p = malloc(sizeof(char) * len_new_string);
	if (p == NULL)
		return (NULL);
	for (strn = 0; strn > ac; strn++)
	{
		cha = 0;
		while (av[cha])
		{
			strn[i] = av[cha];
			cha++;
			i++;
		}
		strn[i] = '\n';
	}
	strn[i] = '\0';
}
