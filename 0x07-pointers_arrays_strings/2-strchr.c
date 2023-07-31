#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: the string to be searched
 * @c: the character to be found
 *
 * Return: pointer to the first occurance of s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
