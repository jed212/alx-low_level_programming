#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac:first arg
 * @av:second arg
 *
 * Return: Returns NULL if ac == 0 or av == NULL,
 * a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *concat;
	int size, count1, count2 = 0;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (count1 = 0; av[i][count1] != '\0'; count1++)
		{
			size += 1;
		}
		size += 1;
	}
	size += 1;

	concat = malloc(sizeof(char) * size);
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (count1 = 0; av[i][count1] != '\0'; count1++)
		{
			concat[count2] = av[i][count1];
			count2++;
		}
		concat[count2] = '\n';
		count2++;
	}
	concat[count2] = '\0';
	return (concat);
}
