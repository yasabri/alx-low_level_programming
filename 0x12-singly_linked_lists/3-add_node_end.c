#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - at the end of a linked list adds a new node
 * @head: double pointer the list_t list
 * @str: The string to be added to the list_t list.
 *
 * Return: NULL if it failed or address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
