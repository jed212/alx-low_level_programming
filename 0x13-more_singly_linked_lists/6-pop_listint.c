#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head of a linked list
 * @head: a pointer to the first element in the list
 *
 * Return: returns the data inside the elements that was deleted,
 * 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
