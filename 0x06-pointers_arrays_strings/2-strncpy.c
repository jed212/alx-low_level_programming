#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: the string
 *
 * Return: returns the length of the string s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
 * _strncpy - takes a string and copies n characters of it to a buffer
 * @dest: the initial string
 * @src: the string to be copied to dest
 * @n: the number of characters to be copied
 *
 * Return: returns the pointer to the initial tring dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
