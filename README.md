In this project, we'll learn 

What are structures, when, why and how to use them
How to use typedef

Task 0 -Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

File: dog.h

Task 1 - a function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
File: 1-init_dog.c

Task 2 - a function that prints a struct dog

Prototype: void print_dog(struct dog *d);
File: 2-print_dog.c

Task 3 - Define a new type dog_t as a new name for the type struct dog.
File: dog.h

Task 4 -  a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails
File: 4-new_dog.c

Task 5 - a function that frees dogs.

Prototype: void free_dog(dog_t *d);

File: 5-free_dog.c
