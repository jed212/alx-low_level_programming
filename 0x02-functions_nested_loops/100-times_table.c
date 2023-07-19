#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The value of the times table to be printed
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			for (mult = 0; mult <= n; mult++)
			{
				if (mult != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				prod = num * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)

				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				else if (prod >= 10 && prod <= 99)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
