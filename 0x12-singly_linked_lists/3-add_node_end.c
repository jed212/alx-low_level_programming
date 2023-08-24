#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * _strlen - function that counts the number of characters in a string.
  * @s:  pointer to an array of characters.
  *
  * Return: returns the length of the string.
  */
int _strlen(const char *s)
{
	int k;

	k = 0;
	while (*(s + k) != '\0')
		k++;
	return (k);

}

/**
  * add_node_end - function that adds a node at the end
  * of the given list that stores given data.
  * @head: a pointer to address of the head of the list
  * @str: data to be stored in the new node.
  * Return: returns the address of the new node.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *cursor;

	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = NULL;
	new->str = strdup(str);
	new->len = _strlen(str);
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		cursor = *head;
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = new;
	}
	return (cursor);
}
