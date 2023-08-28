#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * print_listint - prints all the elements of listint_t list.
  * @h: a pointer to head of the list.
  * Return: returns the number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	unsigned int count;
	listint_t *pointer;


	pointer = (listint_t *)h;
	count = 0;
	while (pointer != NULL)
	{
		printf("%d\n", pointer->n);
		pointer = pointer->next;
		count++;
	}
	return (count);
}
