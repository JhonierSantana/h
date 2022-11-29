#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer
 * @str: String
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *b, *a;
	char *dup;

	dup = strdup(str);
	if (dup == NULL)
		return (NULL);
	b = *head;
	while (b && b->next)
		b = b->next;
	a = (list_t *)malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);
	if (b == NULL)
	{
		b = a;
		*head = a;
	}
	b->next = a;
	a->len = strlen(str);
	a->str = dup;
	a->next = NULL;
	return (a);
}
