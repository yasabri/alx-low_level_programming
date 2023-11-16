#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node
 * @head: double pointer to the list
 * @str: new string
 * Return: address of the new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int x = 0;

	while (str[x])
		x++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->x = x;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
