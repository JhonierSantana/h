/*
 * File: 2-print_alphabet_x10.c
 * Auth: Jhonier Santana
 */
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 time the alphabet, in lowercase, followed by a new line.
 */i
void print_alphabet_x10(void)
{
char letter;
for (letter = 1; letter <= 10; letter++)
{
for (letter = 'a'; letter <= 'z', letter++)
_putchar(letter);
_putchar('\n');
}
}
