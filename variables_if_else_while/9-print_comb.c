include <stdio.h>

/**
 * main - prints digits from 0 to 9
 *
 * Return: 0 on success
 */

int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + 48);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
