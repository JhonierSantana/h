#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: string
 *
 * Return: 0;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, e;
	char *d;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (a = 0; s1[a]; a++)
		;
	for (b = 0; s2[b]; b++)
		;
	if (b > n)
	 	b = n;

	d = malloc(sizeof(char) * a + b + 1);

	if (d == NULL)
	{
		return (NULL)
	}

	while (*s1 != '\0')
	{
		c[a] = *s1;
		s1++;
		a++;
	}

	while (a < j + i)
	{
		c[a] = *s2;
		s2++;
		a++;
	}
	c[i + j] = '\0';
	return (d);
}
