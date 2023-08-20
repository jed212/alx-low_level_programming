#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all -  a function that prints anything
  * @format: list of types of arguments passed to the function
  */
void print_all(const char * const format, ...)
{
	va_list l;
	int i = 0;
	char *k;
	char *s = ", ";

	va_start(l, format);

	while ((format != NULL) && *(format + i) != '\0')
	{
		switch (*(format + i))
		{
			case 's':
				k = va_arg(l, char *);
				k = (k != NULL) ? k : "(nil)";
				printf("%s", k);
				break;
			case 'i':
				printf("%i", va_arg(l, int));
				break;
			case 'c':
				printf("%c", va_arg(l, int));
				break;
			case 'f':
				printf("%f", va_arg(l, double));
				break;
			default:
				i++;
				continue;
		}
		if (*(format + i + 1) != 0)
		{
			printf("%s", s);
		}
		i++;
	}
	putchar(10);
	va_end(l);
}
