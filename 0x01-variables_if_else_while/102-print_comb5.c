#include <stdio.h>

/**
 * main - it prints all  possible different combinations two two-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 00;
	int m = 01;

	for (; n <= 98 && n < m; n++)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		putchar(' ');
	}
	for (; m <= 99; m++)
	{
		putchar((m / 10) + '0');
		putchar((m % 10) + '0');
		if (!(n == 98 && m == 99))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
