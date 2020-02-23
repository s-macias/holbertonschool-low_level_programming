#include <stdio.h>

/**
 * main - it prints all  possible different combinations of from 00 to 99
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	for (; n <= 89; n++)
		if (n / 10 < n % 10)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			if (n < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
