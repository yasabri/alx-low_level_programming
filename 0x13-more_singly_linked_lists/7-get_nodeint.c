#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of a listint_t linked list.
 * @head: arrow pointing to the head of the listint_t list.
 * @index: index of the node to locate start in 0
 *
 * Return: If the node does not exist or  null the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int NODE;

	for (NODE = 0; NODE < index; NODE++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
