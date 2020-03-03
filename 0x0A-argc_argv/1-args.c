#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into a program
 * @argc: counts the number of arguments
 * @argv: argument vector: program name and arguments
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *arg[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
