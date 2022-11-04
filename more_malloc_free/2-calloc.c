/*
 * Auth: Jhonier Santana
 */
#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elementes in the array
 * @size: size in bytes of the elements
 *
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nmemb, size);
	if (b == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); i++)
		b[a] = 0;
	return (p);
}
