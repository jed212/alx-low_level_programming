#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  * print_numbers -  a function that prints numbers, followed by a new line.
  * @separator: the string to be printed between numbers
  * @n: the number of integers passed to the function
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	va_start(a, n);
	i = 0;

	while (i < n)
	{
		printf("%d", va_arg(a, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}
	va_end(a);
	printf("\n");
}
