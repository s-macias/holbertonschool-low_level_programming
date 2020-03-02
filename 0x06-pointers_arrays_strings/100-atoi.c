#include <studio.h>

/**
 * _atoi - converts a string into an integer
 * @s: string to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign = -1;
		if (*s >= '0' *s <= '9')
		{
			num = num + *s;
		}
		s++;
		if (sign < 0)
			num = num * sign;
		return (num);
}
