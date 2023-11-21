#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a node in  beginning of a linked list
 * @head: head list
 * @n: integer for node
 *
 * Return: address of the new element or null if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (*head == NULL)
		node = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
