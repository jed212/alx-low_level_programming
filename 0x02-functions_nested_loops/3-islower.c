#include "main.h"

/**
 * _islower - Checks if c is lowercase
 * @c: The character to be checked
 *
 * Return: Returns 1 if c is lower, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
