#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  *str_concat - concatenates two strings
 * malloc - allocates memory
 * @s1: pointer to first string
 * @s2: pointer to the string to be appended to s1
 * Return: pointer to s1 or NULL if s1 or s2 = NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int n = 0;
	char *str;

	while (*s1 != '\0')
	{
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		s2++;
		j++;
	}

	str = malloc((sizeof(char)) * (i + j + 1));

		   if (s1 == NULL)
		   {
			   while (n < j)
			   {
				   str[n] = s2[j];
				   n++;
				   printf("%c\n", str[n]);
			   }
		   }
		   else if (s2 == NULL)
		   {
			   while ( n < i)
			   {
				   str[n] = s1[i];
				   n++;
				   printf("%c\n", str[n]);
			   }
		   }
		   for (n = 0; n <= i; n++)
		   {
			   str[n] = s1[n];
			   printf("%c\n", str[n]);
		   }
		  for (; n <= i + j; n++)
		  {
			   str[n] = s2[n];
			   printf("%c\n", str[n]);
		  }
		   if (n == i + j + 1)
			   str[n] = '\0';
		   ;
		   return (str);
		   if (str == NULL)
			   return (NULL);
}
