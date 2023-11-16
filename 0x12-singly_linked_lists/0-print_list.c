#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints the elements that in list
 * @h: The list
 * Return: number nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		x++;
		h = h->next;
	}

	return (x);
}
