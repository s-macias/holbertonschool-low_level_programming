#include <stdio.h>

/**
 * main - it prints all  possible different combinations fromm 0 to 999
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	for (; n <= 189; n++)
	{
		if (n / 100 < n / 10 && n / 10 < n % 10)
		{
			putchar((n / 100) + '0');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			if (n < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
