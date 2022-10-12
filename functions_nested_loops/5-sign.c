/*
 * File: 5-sign.c
 * Auth: Jhonier Santana
 */
#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @c: The character to be checked.
 *
 * Return: 1 if sign of a number function.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0';
return (0);
}
else (n < 0)
{
_putchar('-');
return (-1);
}
}
