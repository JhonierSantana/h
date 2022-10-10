/*
 * File: 1-last_digit.c
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints a random number and states whether
 * 		it is greater than 5, is 0, less than 6 and not 0.
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() -RAND MAX / 6;
	if (n mod 6 > 5)
		printf("%d is greater than 5\n", n);
	else if (n mod 6 < 0)
		printf("%d is less than 6 and not 0\n", n);
	else
		prinft("%d is 0\n", n);
	return (0);
}
