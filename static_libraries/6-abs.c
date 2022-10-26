/*
 * File: 6-abs.c
 * Auth: Jhonier Santana
 */
#include "main.h"
#include<stdlib.h>
/**
 * _abs - prints absolute value of an integer
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */

int _abs(int n)
{
if (n >= 0)
return (n);
else
return (-n);
}
