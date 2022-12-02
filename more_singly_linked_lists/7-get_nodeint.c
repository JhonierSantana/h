#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: Head pointer
 * @index: index of the node
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position;

	position = 0;
	while (head && head->next)
	{
		if (position == index)
			return (head);
		position += 1;
		head = head->next;
	}
	if (position == index)
		return (head);
	else
		return (NULL);
}
