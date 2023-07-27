#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Returns integer sum of the difference,
 * betwen each characters'ASCII numbers.
 */
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;
	diff = 0;

	while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
	{
		diff = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (diff);
}
