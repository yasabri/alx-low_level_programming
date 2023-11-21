#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to pointer to head
 * @idx: The index of the list into which the new node should be inserted
 * @n: integer for the new node
 * Return: NULL if failed  or address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *old, *new;

	old = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (x = 0; x < idx - 1; x++)
	{
		old = old->next;
		if (old == NULL)
		{
			return (NULL);
		}
	}
	new->next = old->next;
	old->next = new;
	return (new);
}
