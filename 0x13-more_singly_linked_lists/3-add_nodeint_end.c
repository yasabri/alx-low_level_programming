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
	listint_t *old, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		old = *head;
		while (old->next != NULL)
		{
			old = old->next;
		}
		old->next = newnode;
	}
	return (newnode);
}
