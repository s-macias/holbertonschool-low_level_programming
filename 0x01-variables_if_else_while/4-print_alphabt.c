#include <stdio.h>

/**
 * main - it prints the alphabet in lowercase except q and e
 * Return: 0
 */

int main(void)
{
	int i = 97;

	while(i <= 122)
	{
		if(i == 101 || i == 113)
			i++;
		else
		{
		putchar(i);
		i++;
		}
	}
putchar('\n');
return(0);
}
