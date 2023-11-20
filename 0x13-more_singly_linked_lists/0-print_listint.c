#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements
 * @h: pointer to the head
 *
 * Return: nodes number
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
