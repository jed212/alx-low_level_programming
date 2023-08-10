#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatnates two strings with n bytes
 * @s1: initial string
 * @s2: string to be concatenated to s1
 * @n: size of s2 to be concatenated to s1
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar = NULL;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n < j)
	{
		j = n;
	}

	ar = malloc((i + j + 1) * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		ar[k] = s1[k];
	}
	i = k;

	for (k = 0; k < j; k++, i++)
	{
		ar[i] = s2[k];
	}
	ar[i] = '\0';

	return (ar);
}
