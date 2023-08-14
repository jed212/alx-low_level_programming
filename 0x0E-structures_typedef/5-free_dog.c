#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees the memory allocated to the new dog
  * @d:a pointer to dog struct.
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->owner);
	free(d->name);
	free(d);
}
