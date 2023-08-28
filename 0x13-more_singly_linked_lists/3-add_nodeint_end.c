#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * add_nodeint_end - adds a new node at the end of the list.
  * @head: a pointer to address of the head of the list,
  * @n: an integer to be stored in the new node.
  * Return: returns an address of the new node.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *pointer;

	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		pointer = *head;
		while (pointer->next != NULL)
			pointer = pointer->next;
		pointer->next = new;
	}
	return (pointer);
}
