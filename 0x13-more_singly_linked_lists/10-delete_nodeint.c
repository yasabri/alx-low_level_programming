#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 *
 * @head: pointer to pointer to head
 * @index: location of the node to be removed
 * Return: 1 mean that success if -1 mean that faile
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *old, *next;

	if (*head == NULL)
		return (-1);

	old = *head;
	if (index == 0)
	{
		*head = old->next;
		free(old);
		return (1);
	}
	for (x = 0; old != NULL && x < index - 1; x++)
	{
		old = old->next;
	}
	if (old == NULL || old->next == NULL)
		return (-1);
	next = old->next->next;
	free(old->next);
	old->next = next;
	return (1);
}
