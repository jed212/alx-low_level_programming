#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalize every word of a string
 * @str: the string
 *
 * Return: returns pointer to initial string
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	char *ptr = str;

	while (*ptr)
	{
		if (isspace(*ptr) || *ptr == ',' || *ptr == ';' || *ptr == '.' ||
				*ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '(' ||
				*ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			*ptr = toupper(*ptr);
			capitalize_next = 0;
		}
		ptr++;
	}
	return (str);
}
