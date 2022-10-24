/*
 * Auth: Jhonier Santana
 */

#include "main.h"

/**
 * _strlen_recursion - Returns the length of string
 * @s: The string to be measured
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
int len = 0;

if(*s)
{
len++;
en += _strlen_recursion(s + 1);
}
return (len);
}
