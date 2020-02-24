#include "holberton.h"

/**
 * *_strchr - encodes a string into 1337.
 * @s : destination string.
 * @c : source string.
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
char *st = s;
if (s == 0)
return (0);
while (st++)
{
if (*st == c)
return (st);
}
return (0);
}
