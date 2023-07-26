#include "main.h"

/**
 * _strlen - Counts length of a string
 * @s: The string
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
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: Pointer to initial string
 * @src: Pointer to the string to be concatenated to dest
 *
 * Return: Pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, length0, length1;

	i = 0;
	length0 = _strlen(dest);
	length1 = _strlen(src);
	while (i < length1)
	{
		*(dest + length0 + i) = *(src + i);
		i++;
	}
	return (dest);
}
