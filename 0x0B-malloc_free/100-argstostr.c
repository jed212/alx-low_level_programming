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
	int total_len = 0;
	int arg_len = 0;
	int curr_pos = 0;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][arg_len] != '\0')
			arg_len++;
		total_len += arg_len + 1;
	}

	concat = (char *)malloc((total_len + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][arg_len] != '\0')
		{
			concat[curr_pos] = av[i][arg_len];
			arg_len++;
			curr_pos++;
		}
		concat[curr_pos] = '\n';
		curr_pos++;
	}
	concat[curr_pos] = '\0';
	return (concat);
}
