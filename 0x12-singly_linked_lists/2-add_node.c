#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * _strlen - function that counts the number of characters in a string.
  * @s: a pointer to an array of characters.
  *
  * Return: returns length of the string.
  */
int _strlen(char *s)
{
	int j;

	j = 0;
	while (*(s + j) != '\0')
		j++;
	return (j);

}

/**
  * add_node - function that adds a node to a given list with given data.
  * @head: a pointer to the adress of the head of the list,
  * @str: data to be saved in the node.
  * Return: the new heads's adress.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(*new));
	if (new ==  NULL)
	{
		return (NULL);
	}
	new->next = *head;
	new->str = strdup(str);
	new->len = _strlen((char *)str);
	*head = new;
	return (*head);
}
