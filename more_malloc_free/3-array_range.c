/*
 * Auth: Jhonier Santana
 */
#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: argument
 * @max: argument
 *
 * Return: 0
 */

int *array_range(int min, int max)
{
	int a, b;
	int *d;

	if (min > max)
		return (NULL);
	b = min - max + 1;
	d = malloc(sizeof(int) * b);
	if (d == NULL)
		return (NULL);
	for (a = 0; a < b; a++, min++)
	{
		d[a] = min;
	}
	return (d);
}
