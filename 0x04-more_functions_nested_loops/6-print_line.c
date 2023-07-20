#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: The number of characters to be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}

