/*
 * File: 1-alphabet.c
 *
 * Auth: Jhonier Santana
 */
#include<stdio.h>
/**
 * main - prints the alphabet, in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
	char letter;
	for(letter = 'a', letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
	return (0);
}
