#include "holberton.h"
#include <stdio.h>

/**
 * main - prints all the argument a program receives
 * @argc: counts the number of arguments
 * @argv: argument vector: program name and arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
