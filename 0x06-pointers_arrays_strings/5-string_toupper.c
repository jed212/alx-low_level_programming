#include "main.h"

/**
 * string_toupper - converts lowercase letters to uppercase
 * @str: pointer to the string
 * Return: returns pointer to the string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
