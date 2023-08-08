#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: the string
 *
 * Return: pointer to string, NULL if str is null
 * and NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	return (dup);
}
