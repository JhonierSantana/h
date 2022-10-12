/*
 * File: 1-alphabet.c
 * Auth: Jhonier Santana
 */

#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase.
 *
 * Returns: Always 0.
 */

void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
}
