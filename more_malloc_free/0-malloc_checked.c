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
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
