#include "holberton"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into a program
 * @argc: counts the number of arguments
 * @argv: argument vector: program name and arguments
 * Return: 0
 */

int main (int argc, char *arg[])
{
	if (argc > 0)
		printf(" %s\n", argc);

	return 0;
}
