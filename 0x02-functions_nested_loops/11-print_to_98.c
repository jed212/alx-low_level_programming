#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98,
 * followed by a new line
 * @i: Where to start from
 */
void print_to_98(int i)
{
	if (i >= 98)
	{
		while (i > 98)
			printf("%d, ", i--);
		printf("%d\n", i);
	}
	else
	{
		while (i < 98)
			printf("%d, ", i++);
		printf("%d\n", i);
	}
}
