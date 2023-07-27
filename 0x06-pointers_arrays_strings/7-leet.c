#include "main.h"

/**
 * leet - Converts a/A, e/E, o/O, t/T and l/L by 4, 3, 0, 7 and 1 respectively.
 * @str: pointer to string
 *
 * Return: returns pointer to the string
 */
char *leet(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) == 65 || *(str + i) == 97)
			*(str + i) = 52;
		else if (*(str + i) ==  69 || *(str + i) == 101)
			*(str + i) = 51;
		else if (*(str + i) == 79 || *(str + i) == 111)
			*(str + i) = 48;
		else if (*(str + i) == 84 || *(str + i) == 116)
			*(str + i) = 55;
		else if (*(str + i) == 76 || *(str + i) == 108)
			*(str + i) = 49;
		i++;
	}
	return (str);
}
