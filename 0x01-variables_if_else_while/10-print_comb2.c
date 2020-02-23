#include <stdio.h>

/**
 * main - it prints all the numbers from 00 to 99
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	for (; n <= 99; n++)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		if (n != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
