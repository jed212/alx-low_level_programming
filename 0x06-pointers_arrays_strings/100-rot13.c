#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 *
 * Return: return a pointer to the modified string
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
		{
			char base = (*ptr >= 'a') ? 'a' : 'A';
			*ptr = (((*ptr - base) + 13) % 26) + base;
		}
		ptr++;
	}
	return (str);
}
