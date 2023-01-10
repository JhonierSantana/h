#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to list's head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *a;

	while (head)
	{
		a = head->next;
		free(head);
		head = a;
	}
}
