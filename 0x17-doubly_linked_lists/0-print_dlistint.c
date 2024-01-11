#include "lists.h"

/**
 * print_dlistint - prints elements of a
 * dlistint_t list
 * @h: listes head
 * Return: number of the nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int total;

	total = 0;

	if (h == NULL)
		return (total);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		total++;
		h = h->next;
	}

	return (total);
}
