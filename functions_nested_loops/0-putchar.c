#include<unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int _putchar(char c)
{
	return(write(1,&c,1));

}
