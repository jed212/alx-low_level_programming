#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - frees all nodes of a linked list.
  * @head:a pointer to the list's head.
  */
void free_listint(listint_t *head)
{
	listint_t *last = NULL;

	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	last = head;

	while (last->next->next != NULL)
		last = last->next;
	free(last->next);
	last->next = NULL;
	free_listint(head);
}
