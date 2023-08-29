#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - function that frees a linked list
 * @h: a pointer to the first node in the linked list
 *
 * Return: returns the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	int diff;
	size_t length = 0;
	listint_t *tmp;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
