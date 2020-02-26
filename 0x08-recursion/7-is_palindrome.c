#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s : string.
 * Return: length.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (_strlen_recursion(s + 1) + 1);
}

/**
 * palin - test if a string is a palindrome.
 * @p : string.
 * @x : integer.
 * @x1 : integer.
 * Return: integer.
 */

int palin(char *p, int x, int x1)
{
if (x <= x1)
return (0);
else
{
if (*p == p[x])
return (1);
else
return (palin(p++, x--, x1));
}
}


/**
 * is_palindrome - test if a string is a palindrome.
 * @s : string.
 * Return: integer.
 */

int is_palindrome(char *s)
{
char *p = s;
int x = -1, x1 = 0;
x += _strlen_recursion(s);
x1 = x / 2;
return (palin(p, x, x1));
}
