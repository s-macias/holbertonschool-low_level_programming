#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a dog struct
 * @d: pointer to structure
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
