#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @h: pointer header
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed;
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *a, *b;

    a = (listint_t *)malloc(sizeof(listint_t));
    if (a == NULL)
        return (NULL);
    a->n = n;
    a->next = NULL;
    b = *head;
    while (b && b->next)
        b = b->next;

    if (b == NULL)
    {
        *head = a;
        return = (a);
    }
    b->next = a;
    return (a);
}
