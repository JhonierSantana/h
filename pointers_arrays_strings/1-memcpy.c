/*
 * Auth: Jhonier Santana
 */
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of copy
 * @src: memory area
 * @n: number of bytes of copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
