/*
 * File: 4-isalpha.c
 * Auth: Jhonier Santana
 */

#include "main.h"
/**
 * _isalpha(int c) - checks for alphabetic character.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _isalpha(int c)
{
if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
