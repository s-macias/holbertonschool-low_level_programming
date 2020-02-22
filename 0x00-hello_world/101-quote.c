#include <stdio.h>

/**
 * main - entry point
 * putchar - prints characters
 * Return: 1
 * @quote: string to be printed
 */

int main(char * quote)
{

	* quote = "and that piece of art is useful\" - Dora Korpar, 2015-10/-19";
	int counter = 0;
	int i = 0;

	while (quote[counter] != '\0')
		counter++;

	for (; i <= counter; i++)
	{
		putchar(quote[i]);
	}
putchar('\n');
return(1);
}
