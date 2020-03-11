#include "dog.h"

/**
 * init_dog - intilializes a variable type struct dog
 * @d: pointer to struct to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner dog's owner
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
