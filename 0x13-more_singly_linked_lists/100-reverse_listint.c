#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - a function that reverses a linked list
 * @head: a pointer to the first node in the list
 *
 * Return: returns a pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
