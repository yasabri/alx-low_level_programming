#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints elements of a listint_t list
 * @h: pointer to the head
 *
 * Return: The nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
