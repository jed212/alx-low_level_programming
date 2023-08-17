#include "function_pointers.h"

/**
  * int_index - a function that searches for an integer.
  * @array: an array of integers
  * @size: size of the array
  * @cmp: a pointer to the function to be used to compare values
  *
  * Return: index of the specific integer
  * in the array if found, -1 if not found.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0)
	{
		return (-1);
	}
	j = 0;

	while (j < size)
	{
		if (cmp(array[j]) != 0)
		{
			return (j);
		}
		j++;
	}
	return (-1);
}
