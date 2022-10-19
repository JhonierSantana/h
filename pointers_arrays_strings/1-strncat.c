/*
 * File: 1-strncat.c
 * Auth: Jhonier Santana
 */

#include "main.h"

/**
 * _strncat - Concatenates two string using at most an inputted number of byetes from src.
 * @dest: The string to be appended upon.
 * @src:  The strign to be appended to dest.
 * @n: The number of byte from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncant(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_lent++] = src[index];

	return (dest);
}
