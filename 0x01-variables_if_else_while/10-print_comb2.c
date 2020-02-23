#include <stdio.h>

/**
 * main - it prints all the numbers from 00 to 99
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;
	int j = 48;

	for (; i <= 57; i++)
	{
		for (; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (!(i == 57 && j == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
