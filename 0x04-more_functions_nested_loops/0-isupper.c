#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character being checked
 *
 * Return: Returns 1 if c is upper 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);
}
