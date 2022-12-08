#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: Pointer to pointer to head of the list
 * @n: Intiger to add
 * Return: Address of new element or NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a, *new;

	a = NULL;
	if (*head)
		a = (*head);
	while (a && a->next)
		a = a->next;
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (a)
	{
		new->prev = a;
		a->next = new;
	}
	else
		(*head) = new;
	return (new);
}
