#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - function that prints strings, followed by a new line
  * @separator: the string to be printed between the strings
  * @n: the number of strings passed to the function
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *c;

	va_start(a, n);
	i = 0;

	while (i < n)
	{
		c = va_arg(a, char*);
		if (c != NULL)
		{
			printf("%s", c);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}
	va_end(a);
	printf("\n");
}
