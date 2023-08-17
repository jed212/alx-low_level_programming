#include <stddef.h>
#include "function_pointers.h"

/**
  * array_iterator - a function that executes
  * a function given as a parameter on each element of an array
  * @array: an array of integers
  * @size: size of the array of integers
  * @action: a pointer to the function you need to use
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	j = 0;
	while (j < size)
	{
		action(array[j]);
		j++;
	}
}
