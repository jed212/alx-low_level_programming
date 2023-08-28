#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - function that frees all nodes
  * of a list and set head to NULL
  * @head: a pointer to the list's head.
  */
void free_listint2(listint_t **head)
{
	listint_t *last = NULL;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return;
	}
	last = *head;
	while (last->next->next != NULL)
		last = last->next;
	free(last->next);
	last->next = NULL;
	free_listint2(head);
}
