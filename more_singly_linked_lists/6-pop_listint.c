#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: Pointer to head
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	int a;
	listint_t *b;

	if (head == NULL || *head == NULL)
		return (0);
	a = (*head)->n;
	b = *head;
	*head = (*head)->next;
	free(b);
	return (a);
}
