#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct
 * @d: Pointer to a struct dog variable
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
