#include <stdio.h>

/**
* main - it shows the size of different kinds types
* printf - prints formatted text
* Return: Always 0 (Success)
*/

int main(void)
{
	char cha;
	int inte;
	long lon;
	long long ll;
	float floa;

	printf("Size of a char: '%lu' byte(s)\n", (unsigned long)sizeof(cha));
	printf("Size of an int: '%lu' byte(s)\n", (unsigned long)sizeof(inte));
	printf("Size of a long int: '%lu' byte(s)\n", (unsigned long)sizeof(lon));
	printf("Size of a long long int: '%lu' byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: '%lu' byte(s)\n", unsigned long)sizeof(floa));
	return (0);
}
