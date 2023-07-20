#include "main.h"

/**
 * _isdigit - Checks for a digit (0 to 9)
 * @c: Digit to be checked
 *
 * Return: 1 if c isdigit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
