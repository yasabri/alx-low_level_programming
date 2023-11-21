#include "lists.h"

/**
 * File: add_nodeint.c
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head list
 * @n: integer for node
 * Return: address of the new elementor null if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
