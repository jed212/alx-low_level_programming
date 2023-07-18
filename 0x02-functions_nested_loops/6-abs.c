#include "main.h"

/**
 * _abs - Return absolute value of a number
 * @n: Number being returned
 *
 * Return: Return the number if number is greater or equal to 0,
 * the negative value of the number otherwise
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
