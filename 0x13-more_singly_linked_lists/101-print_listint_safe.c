#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - prints a linked list with a loop safely.
 * @head: a pointer to the head of the linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *l = NULL;
	size_t count = 0;
	size_t n_node;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;
		tmp = tmp->next;
		l = head;
		n_node = 0;
		while (n_node < count)
		{
			if (tmp == l)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (count);
			}
			l = l->next;
			n_node++;
		}
		if (head == NULL)
			exit(98);
	}
	return (count);
}
