/*
 * Auth: Jhonier Santana
 */
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints struct dog
 * @d: pointer
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if ( d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nill)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nill)\n");
	}
}
