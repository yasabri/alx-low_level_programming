#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the elements
 * @h: pointer to the head of the listint_t list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		++x;
		h = h->next;
	}
	return (x);
}
