#include <stdio.h>

/**
 * main - it prints the alphabet in lowercase using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
