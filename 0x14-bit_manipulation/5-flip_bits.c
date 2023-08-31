#include "main.h"

/**
 * flip_bits - function that counts the number of bits
 * different between binary representation of
 * two given numbers.
 * @n: the first number,
 * @m: the second number.
 * Return: returns the number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_diff;
	unsigned long int mask;
	unsigned int cnt;
	unsigned int range;
	unsigned int i;

	bit_diff = (n ^ m);
	mask = 1;
	range = sizeof(n) * 8;
	cnt = 0;
	i = 0;

	while (i < range)
	{
		if ((bit_diff & mask) && mask)
			cnt++;
		mask <<= 1;
		i++;
	}
	return (cnt);
}
