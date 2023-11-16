#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: Finds the number of elements in a linked list
 *
 * Return: elements number
 */
size_t list_len(const list_t *h)
{
	size_t x= 0;

	while (x)
	{
		x++;
		h = h->next;
	}
	return (x);
}
