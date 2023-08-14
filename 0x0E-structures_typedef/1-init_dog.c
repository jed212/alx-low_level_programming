#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initializes a variable of type struct
 * @d: Pointer to a struct dog variable
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
