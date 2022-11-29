#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list.
 * @h: pointer to list to print.
 *
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a += 1;
		h = h->next;
	}
	return (a);
}
