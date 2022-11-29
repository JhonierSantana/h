#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer 
 * @str: String 
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *a;

	len = strlen(str);
	dup = strdup(str);
	if (dup == NULL)
	{
		return (NULL);
	}
	a->str = dup;
	a->len = len;
	a->next = *head;
	return (a);
}