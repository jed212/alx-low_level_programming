#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - funtion that deletes a node
 * in a linked list at a certain index
 * @head: a pointer to the first element in the list
 * @index: the index of the node to be deleted
 *
 * Return: returns 1 on (Success), or -1 on (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *curr = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (j < index - 1)
	{
		if (tmp == NULL || (tmp->next) == NULL)
			return (-1);
		tmp = tmp->next;
		j++;
	}


	curr = tmp->next;
	tmp->next = curr->next;
	free(curr);

	return (1);
}
