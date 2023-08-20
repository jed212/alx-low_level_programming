#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sums up all integer inputs.
  * @n: the number of arguments passed.
  * Return: returns the sum of the arguments, or 0 if none are passed.
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(a, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum = sum + va_arg(a, int);
		i++;
	}

	va_end(a);
	return (sum);
}
