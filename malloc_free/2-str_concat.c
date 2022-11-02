/*
 * Auth: Jhonier Santana
 */
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *str;

	if (s1 == NULL)
		s1 = "";

	for (a = 0; s1[a] != '\0'; a++)
	{
	}

	if (s2 == NULL)
		s2 = "";

	for (b = 0; s2[b] != '\0'; b++)
	{
	}

	str = malloc(sizeof(char) * a + b + 1);

	if (str == NULL)
		return (NULL);

	for (c = 0; s1[c] != '\0'; c++)
		str[c] = s1[c];

	for (d = 0; s2[d] != '\0'; d++)
		str[d] = s2[d];

	return (str);
}
