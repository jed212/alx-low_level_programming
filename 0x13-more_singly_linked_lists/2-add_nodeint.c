#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * add_nodeint - adds a new node to a given list with given data.
  * @head: a pointer to the adress of the head of the list,
  * @n: an integer
  * Return: the adress of the new head.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(*new));
	if (new ==  NULL)
	{
		return (NULL);
	}
	new->next = *head;
	new->n = n;
	*head = new;
	return (*head);
}
