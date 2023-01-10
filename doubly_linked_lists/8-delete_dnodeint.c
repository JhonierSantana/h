#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index of a dlistint_t linked list.
 * @head: Pointer to pointer to list's head
 * @index: Index to node to delete
 * Return: 1 on succeed, -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *a;
	unsigned int actual_idx = 0;

	a = *head;
	while (a)
	{
		if (index == actual_idx && index > 0)
		{
			if (a->next)
				(a->next)->prev = a->prev;
			(a->prev)->next = a->next;
			free(a);
			return (1);
		}
		if (index == 0)
		{
			if (a && a->next)
			{
				*head = a->next;
				(a->next)->prev = NULL;
				free(a);
			}
			else
			{
				*head = NULL;
				free(a);
			}
			return (1);
		}
		a = a->next;
		actual_idx++;
	}
	return (-1);
}
