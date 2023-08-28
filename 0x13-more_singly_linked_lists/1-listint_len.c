#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the length of the list
 * @h: pointer to the head of the list
 * Return: returns the length of the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count;
	listint_t *pointer;

	count = 0;
	pointer = (listint_t *)h;

	while (pointer != NULL)
	{
		pointer = pointer->next;
		count++;
	}
	return (count);
}
