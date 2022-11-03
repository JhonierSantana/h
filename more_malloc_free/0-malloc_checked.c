/*
 * Auth: Jhonier Santana
 */
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - that allocates memory
 * @b: memory to allocate 
 *
 * Return: 0.
 */
void *malloc_checked(unsigned int b)
{
	int *a = 0;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
