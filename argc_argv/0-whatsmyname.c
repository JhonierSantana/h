#include <stdio.h>

/**
 * whatsmyname - prints its name, followed by a new line
 *
 * Return: 0.
 */

int main (int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
