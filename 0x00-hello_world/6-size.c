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

	printf("Size of a char: '%d' byte(s)\n", sizeof(cha));
	printf("Size of an int: '%d' byte(s)\n", sizeof(inte));
	printf("Size of a long int: '%d' byte(s)\n", sizeof(lon));
	printf("Size of a long long int: '%d' byte(s)\n", sizeof(ll));
	printf("Size of a float: '%d' byte(s)\n", sizeof(floa));
	return (0);
}
