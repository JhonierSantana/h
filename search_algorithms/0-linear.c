#include "search_algos.h"

/**
 * linear_search - line search algoritm on an array
 * @array:  is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: Value to search
 *
 * Return: 0 or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked on array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
	}
	if (i == size)
		i = -1;
	return (i);
}
