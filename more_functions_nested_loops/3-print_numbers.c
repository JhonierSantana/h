/*
 * File: 3-print_numbers.c
 * Auth: Jhonier Santana
 */
#include "main.h"
/**
 * print_numbers - prints the numbers.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int a;
	for (a = 48; a < 58; a++)
	{
		_putchar(a);
	}
	_putchar ('\n');
}
