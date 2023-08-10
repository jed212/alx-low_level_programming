#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: size of the elements
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ar = malloc(nmemb * size);

	if (ar == NULL)
	{
		return (NULL);
	}
	memset(ar, 0, nmemb * size);

	for (i = 0; i < nmemb; i++)
	{
		*(ar + (i * size)) = 0;
	}
	return (ar);
}
