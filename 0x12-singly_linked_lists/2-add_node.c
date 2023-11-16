#include "lists.h"
#include <string.h>


/**
 * add_node - Adds a new node at the beginning
 * @head: the pointer to head of the list_t list
 * @str: string to be added to the list_t list
 *
 * Return: If the function fails - NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *x;
	int y;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	x = strdup(str);
	if (x == NULL)
	{
		free(new);
		return (NULL);
	}

	for (y = 0; str[y];)
		y++;

	new->str = x;
	new->y = y;
	new->next = *head;

	*head = new;

	return (new);
}
