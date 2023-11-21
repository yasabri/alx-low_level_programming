#include <stdlib.h>
#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of a linked list.
 *
 * @head: pointer to a pointer to head.
 * @n: integr node
 * Return: address of new elementor null if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *old, *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		old = *head;
		while (old->next != NULL)
		{
			old = old->next;
		}
		old->next = node;
	}
	return (node);
}
