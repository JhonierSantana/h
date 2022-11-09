#include "function_pointers.h"
/**
 * print_name - function print the name
 * @name: variable char 
 * @f: variable void
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
