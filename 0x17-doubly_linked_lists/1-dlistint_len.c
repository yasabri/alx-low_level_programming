#include "lists.h"

/**
 * dlistint_len - returns number of the elements in
 * a double linked list
 * @h: lists head
 * Return: nodes number
 */
size_t dlistint_len(const dlistint_t *h)
{
	int total;

	total = 0;

	if (h == NULL)
		return (total);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		total++;
		h = h->next;
	}

	return (total);
}
