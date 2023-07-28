#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: The input string.
 *
 * Return: returns a pointer to the resulting string.
 */
char *leet(char *str)
{
	char *leetspeak = "aAeEoOtTlL";
	char *replacement = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetspeak[j] != '\0'; j++)
		{
			if (str[i] == leetspeak[j])
			{
				str[i] = replacement[j];
				break;
			}
		}
	}
	return (str);
}
