#include "holberton.h"

/**
 * *_strchr - encodes a string into 1337.
 * @s : destination string.
 * @c : source string.
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
char *st;
int i = 0;
if (s == 0)
return (0);
while (s[i] != '\0')
{
if (s[i] == c)
{
st = s + i;
return (st);
}
i++;
}
return (0);
}
