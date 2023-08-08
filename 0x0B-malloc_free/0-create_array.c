#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with specific char
 * @size: size of memory to
 * @c: the specific character
 *
 * Return: NULL if size equals 0 and a pointer to the array,
 * or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < size; j++)
	{
		arr[j] = c;
	}
	return (arr);
}
