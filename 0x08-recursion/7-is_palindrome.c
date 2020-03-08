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
 * @i : integer.
 * Return: integer.
 */

int palin(char *p, int x, int i)
{
	if (i > x / 2)
		return (1);
	else if (p[i] != p[x - i])
		return (0);
	else
		return (palin(p, x, ++i));
}

/**
 * is_palindrome - test if a string is a palindrome.
 * @s : string.
 * Return: integer.
 */

int is_palindrome(char *s)
{
	char *p = s;
	int x = 0, i = 0;
	x = _strlen_recursion(s);
	return (palin(p, x - 1, i));
}
