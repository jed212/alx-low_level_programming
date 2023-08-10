#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated
 * @old_size: size for allocated ptr space in bytes
 * @new_size: new size for new memory block
 *
 * Return: a pointer to an array of elements.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ar;
	unsigned int copy;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	ar = malloc(new_size);
	if (ar == NULL)
	{
		return (NULL);
	}
	copy = (old_size < new_size) ? old_size : new_size;
	memcpy(ar, ptr, copy);

	free(ptr);
	return (ar);
}
