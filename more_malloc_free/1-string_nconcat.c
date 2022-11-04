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
	unsigned int a, b, c = 0;
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
		return (NULL);
	}

	while (*s1 != '\0')
	{
		d[c] = *s1;
		s1++;
		c++;
	}

	while (c < b + a)
	{
		d[c] = *s2;
		s2++;
		c++;
	}
	d[a + b] = '\0';
	return (d);
}
