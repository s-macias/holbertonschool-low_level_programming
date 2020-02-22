#include <stdio.h>

/**
 * main - it prints the alphabet in lowercase in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 122;

	for (; i >= 97; i--)
	{
		putchar(i);
	}
putchar('\n');
return (0);
}
