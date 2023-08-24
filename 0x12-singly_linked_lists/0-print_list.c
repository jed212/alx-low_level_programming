#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_list - function that prints the elements of a linked list
 * @h: a pointer to the list_t list to print
 *
 * Return: returns the number of printed nodes
 */

size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		t++;
	}

	return (t);
}
