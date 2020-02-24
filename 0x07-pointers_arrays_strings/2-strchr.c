#include "holberton.h"

/**
 * *_strchr - locates a character in a string.
 * @s : string.
 * @c : caracter.
 * Return: position of the caracter.
 */

char *_strchr(char *s, char c)
{
while (*s != '\0' && *s != c)
{
s++;
if (*s == c)
return (s);
}
return (0);
}
