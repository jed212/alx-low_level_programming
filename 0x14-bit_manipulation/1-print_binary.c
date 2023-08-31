#include "main.h"
#include <stdio.h>

/**
 * print_binary - a function that converts a number
 * to binary and print to stdout.
 * @n: the number to be converted.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	unsigned long int bits;
	char b;
	int f;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	bits = sizeof(bits) * 8;

	mask = 1;
	mask = mask << (bits - 1);
	f = 0;
	while (bits > 0)
	{
		if (f == 0)
		{
			b = ((n & mask) && mask) + '0';
			if (b == '1')
			{
				_putchar(b);
				f = 1;
			}
		}
		else
		{
			b = ((n & mask) && mask) + '0';
			_putchar(b);
		}
		mask >>= 1;
		bits--;
	}
}
