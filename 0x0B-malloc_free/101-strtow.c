#include "main.h"
#include <stdlib.h>

/**
 * word_cnt - Counts the number of words separated by spaces in a string
 * @str: the string
 *
 * Return: returns the number of words;
 */
int word_cnt(char *str)
{
	int c;
	int i;

	i = c = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			c++;
			i++;
		}
		i++;
	}
	return (c);
}

/**
 * word_len - Finds the length of words in a string
 * @str: the string to check
 * @words: returns the number of words
 * Return: Combined length of words
 */
int *word_len(char *str, int words)
{
	int i;
	int word;
	int len;
	int *sizes;

	sizes = malloc(words * sizeof(int));
	if (sizes == NULL)
		return (NULL);
	i = word = 0;
	while (word < words)
	{
		if (str[i] != ' ')
		{
			len = 0;
			while (str[i] != ' ')
			{
				len++;
				i++;
			}
			len++;
			sizes[word] = len;
			word++;
		}
		i++;
	}
	return (sizes);
}

/**
 * strtow - Splits a given string into words
 * @str: the string to split
 * Return: Return pointer to an array of strings, NULL if it fails
 */
char **strtow(char *str)
{
	char **new;
	int words;
	int i;
	int j;
	int k;
	int cur;
	int *sizes;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = word_cnt(str);
	sizes = malloc(words * sizeof(int));
	if (sizes == NULL)
		return (NULL);
	sizes = word_len(str, words);
	new = malloc((words + 1) * sizeof(char *));
	if (new == NULL)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (i < words && str[j] != '\0')
	{
		cur = i;
		new[i] = malloc(sizes[i] + sizeof(char));
		if (new[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(new[i--]);
			free(new);
			return (NULL);
		}
		while (str[j] != '\0' && i == cur)
		{
			if (str[j] != ' ')
			{
				while (str[j] != '\0' && str[j] != ' ')
				{
					new[i][k] = str[j]; j++; k++;
				}
				new[i][k] = '\0'; i++; k = 0;
			}
			j++;
		}
	}
	new[i] = NULL;	free(sizes);
	return (new);
}
