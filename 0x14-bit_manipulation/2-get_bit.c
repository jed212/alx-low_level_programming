#include "main.h"
#include <stdio.h>
/**
 * get_bit - function that gets the value of a bit at an index
 * @n: the number
 * @index: the index of the bit starting from 0
 * Return: returns the value of bit at an index,
 * or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
	{
		return (-1);

	}
	i = n >> index;

	return (i & 1);
}
