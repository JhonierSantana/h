#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: pointer to list to print
 * return: 0
 */

size_t print_list(const list_t *h)
{
    size_t a = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nill)\n");
            a += 1;
        }
        printf("%i %s\n", h->len, h->str);
        a += 1;
    }
    return (a);
}