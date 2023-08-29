#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at an index in a linked list
 * @head: pointer to the first node in the list
 * @idx: index where the new node is to be added
 * @n: data to insert in the new node
 *
 * Return: a pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *n_node;
	listint_t *tmp = *head;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL || head == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			n_node->next = tmp->next;
			tmp->next = n_node;
			return (n_node);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
