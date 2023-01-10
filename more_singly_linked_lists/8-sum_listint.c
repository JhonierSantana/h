#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: Head pointer to list
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head && head->next)
	{
		sum += head->n;
		head = head->next;
	}
	if (head)
		sum += head->n;
	return (sum);
}
