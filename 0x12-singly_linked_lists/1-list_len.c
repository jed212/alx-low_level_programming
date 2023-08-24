#include "lists.h"
#include <stdlib.h>

/**
  * list_len - function that counts the number of nodes of given list.
  * @h: head
  * Return: list length.
  */
size_t list_len(const list_t *h)
{
	unsigned int k;
	list_t *tmp;

	tmp = (list_t *)h;
	k = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		k++;
	}
	return (k);
}
