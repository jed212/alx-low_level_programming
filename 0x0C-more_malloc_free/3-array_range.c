#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: starting element
 * @max: ending element
 *
 * Return: a pointer to an array of elements.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i = 0;
	int j = 0;

	if (min > max)
	{
		return (NULL);
	}
	ar = malloc((max - min + 1) * sizeof(int));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++, j++)
	{
		ar[j] = i;
	}
	return (ar);
}
