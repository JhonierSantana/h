#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: header
 *
 * Return: number of nodo
 */
size_t listint_len(const listint_t *h)
{
	unsigned int list_size = 0;

	if (!h)
		return (list_size);

	while (h)
	{
		list_size += 1;
		h = h->next;
	}
	return (list_size);
}
