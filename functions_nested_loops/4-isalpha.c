/*
 * File: 4-isalpha.c
 * Auth: Jhonier Santana
 */

#include "main.h"
/**
 * insalpha(int c) - checks for alphabetic character.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _isalpha(int c);
{
if(c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
