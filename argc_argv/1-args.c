/*
* Auth: Jhonier Santana
*/
#include <stdio.h>
/**
* main - prints the number of arguments passsed into it
* @argc: Argument
*
* Return: 0
*/
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	printf("%d\n", argc);
	return (0);
}

