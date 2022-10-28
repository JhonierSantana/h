/*
* Auth: Jhonier Santana
*/
#include <stdio.h>
/**
* main - prints the number of arguments passsed into it
* @argc: Argument
* @argv: Argument
* Return: 0
*/
int main(int argc, char **argv)
{
	*argv = *argv;
	printf("%d\n", argc - 1);
	return (0);
}

