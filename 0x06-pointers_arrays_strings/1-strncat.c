#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: the string
 *
 * Return: Returns the length of the string
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
 * _strncat - concatenates n characters of string src to the end of dest
 * @dest: the initial string
 * @src: the strig to be concatenated to dest
 * @n: the number of characters to be concatenated
 *
 * Return: Returns the pointer to the initial string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, length0, length1;

	i = 0;
	length0 = _strlen(dest);
	length1 = _strlen(src);
	while (i < n)
	{
		if (i == length1)
			break;
		*(dest + length0 + i) = *(src + i);
		i++;
	}
	return (dest);
}
