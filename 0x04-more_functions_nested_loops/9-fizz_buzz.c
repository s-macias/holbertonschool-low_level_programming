#include "holberton.h"
#include <stdlib.h>

/**
 * main - prints numbers 1-100 substituting multiples of 3, 5 and both.
 */

int main(void)

	int i = 1;

for (; i <= 100; i++)

{

	if (i % 3 == 0 && i % 5 == 0)

		printf("FizzBuzz");

	else if (i % 3 == 0)

		printf("Fizz");

	else if (i % 5 == 0)

		printf("Buzz");

	else

		printf(«%d», i);

	if (i < 100)

		putchar(32);
}

putchar(‘\n');
