#include "holberton.h"

/**
 * *_strchr - encodes a string into 1337.
 * @s : destination string.
 * @c : source string.
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
while (s++)
{
if (*s == c)
return (s);
}
return (0);
}
