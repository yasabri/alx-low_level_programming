#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - computes the total of all data (n) of a listint_t list.
 * @head: head pointer of the listint_t list.
 *
 * Return: If the list is empty - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int x = 0;

	while (head)
	{
		x += head->n;
		head = head->next;
	}

	return (x);
}
