/*
 * File: 1-last_digit.c
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints a random number and states whether
 * 		it is greater than 5, is 0, less than 6 and not 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() -RAND MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		prinft("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
