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
 * Return: integer.
 */

int palin(char *p, int x)
{
if (x <= 0)
return (0);
else
{
if (*p == p[x])
return (palin(++p, --x));
return (1);
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
int x = -1;
x += _strlen_recursion(s);
return (palin(p, x));
}
