#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: header node
 *
 * Return: number of nodos
 */

size_t print_listint(const listint_t *h)
{
	unsigned int list_size = 0;

	if (!h)
		return list_size;

	while (h)
	{
		printf("%d\n", h->n);
		list_size += 1;
		h = h->next;
	}
	return (list_size);
}
