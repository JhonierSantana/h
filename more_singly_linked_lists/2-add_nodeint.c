#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @h: header of nodo
 *
 * Return: adds a new node at the beginning of a listint_t list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *a;

	a = (listint_t *)malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	a->next = *head;
	*head = a;
	return (a);
}
