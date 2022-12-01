#include "lists.h"

/**
 * free_listint - that frees a listint_t list.
 * @head: pointer header
 *
 * Return: 0;
 */
void free_listint(listint_t *head)
{
	if (head && head->next)
		free_listint(head->next);
	free(head);
}
