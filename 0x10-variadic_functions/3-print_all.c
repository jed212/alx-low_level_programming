#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all -  a function that prints anything
  * @format: list of types of arguments passed to the function
  */
void print_all(const char * const format, ...)
{
	va_list a;

	char t;
	int j;
	char *c;

	va_start(a, format);
	j = 0;
	while (*(format + j) != '\0')
	{
		t = *(format + j);
		if (t == 'c')
		{
			printf("%c", va_arg(a, int));
		}
		else if (t == 'i')
		{
			printf("%d", va_arg(a, int));
		}
		else if (t == 'f')
		{
			printf("%f", va_arg(a, double));
		}
		else if (t == 's')
		{
			c = va_arg(a, char *);
			if (c != NULL)
				printf("%s", c);
			else
				printf("(nil)");

		}
		else
		{
			j++;
			continue;
		}
		j++;
		while (*(format + j) != '\0')
		{
			printf(", ");
			break;
		}
	}
	printf("\n");
	va_end(a);
}
