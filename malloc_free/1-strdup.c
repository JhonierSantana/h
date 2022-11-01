/*
 * Auth: Jhonier Santana
 */
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memomry
 * @str: pointer
 *
 * Return: pointer to the duplicated string, in returns NULL if insufficient meomry was available
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++);
	s = malloc(i * sizeof(char));
	
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}		
	return (s);
}
