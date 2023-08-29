#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at a certain index in a linked list
 * @head: first node in the list
 * @index: the index to return
 *
 * Return: returns a pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *tmp = head;

	while (tmp && j < index)
	{
		tmp = tmp->next;
		j++;
	}

	return (tmp ? tmp : NULL);
}
