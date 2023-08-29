#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a list
 * @head: the first node in the linked list
 *
 * Return: returns the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
