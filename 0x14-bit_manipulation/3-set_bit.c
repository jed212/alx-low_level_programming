#include "main.h"

/**
 * set_bit - function that sets value of a bit to 1 at a given index
 * @n: a decimal number passed by the pointer
 * @index: the position to change, starting from 0
 * Return: 1 if it worked, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
	{
		return (-1);
	}

	for (i = 1; index > 0; index--, i *= 2)
		;
	*n += i;
	return (1);
}
