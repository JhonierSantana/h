/*
 * File: 7-print_last_digit.c
 * Auth: Jhonier Santana
 */
#include "main.h"

/**
 * _last digit - prints the last digit of a number
 * @n: Digit of number
 *
 * Return the value of the last digit
 */
int print_last_digit(int n)
{
if ((n % 10) > 5)
{
	printf("Las digit of %d is %d \n", n, n % 10);
}
	return (n % 10);
}
