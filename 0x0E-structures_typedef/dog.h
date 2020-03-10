#ifndef DOG_H
#define DOG_H
#include "dog.h"

/**
 * init_dog - intilializes a variable type struct dog
 * @d: struct to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

	void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
