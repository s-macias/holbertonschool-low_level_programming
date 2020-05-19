#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @owner: owner's name
 * @age: dog's age
 *
 * Return: pointer to new dog, NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;
	int name_length = 0;
	int owner_length = 0;
	int counter = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[name_length])
		name_length++;
	while (owner[owner_length])
		owner_length++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(name_length + 1);
	if (name_copy == NULL)
		return (NULL);
	owner_copy = malloc(owner_length + 1);
	if (owner_copy == NULL)
		return (NULL);
	while (owner[counter++])
		owner_copy[counter] = owner[counter];
	owner_copy[counter] = '\0';
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;
	return (new_dog);
}
