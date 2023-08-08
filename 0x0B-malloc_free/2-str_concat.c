#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to conc, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	unsigned int i;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lens1] != '\0')
		lens1++;

	while (s2[lens2] != '\0')
		lens2++;

	conc = malloc((lens1 + lens2 + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		conc[i] = s1[i];
	for (i = 0; i < lens2; i++)
		conc[lens1 + i] = s2[i];

	conc[lens1 + lens2] = '\0';
	return (conc);
}
