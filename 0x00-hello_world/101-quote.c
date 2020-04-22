#include <unistd.h>

/**
 * main - print a quote without using printf
 * 
 * Return: 1 for success
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}