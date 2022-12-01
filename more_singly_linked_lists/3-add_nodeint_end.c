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
    listint_t *a;
    listint_t b;

    a = (listint_t *)malloc(sizeof(listint_t));
    if (a == NULL)
        return (NULL);
    while (a && b->next)
        a = a->next;
    a->next = b;
    a - next = n;
    b->next = NULL;
    *head = b;
    return (b);
}