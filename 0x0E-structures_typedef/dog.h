#ifndef DOG_H
#define DOG_H
#include "dog.h"
#include <stdlib.h>

/**
 * struc  dog - intilializes a variable type struct dog
 * @d: struct to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	dog_->name = name;
	dog_->age = age;
	dog_ ->owner = owner;
}
#endif
