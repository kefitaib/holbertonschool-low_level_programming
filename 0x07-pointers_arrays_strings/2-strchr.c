#include "holberton.h"

/**
 * *_strchr - locates a character in a string.
 * @s : string.
 * @c : caracter.
 * Return: position of the caracter.
 */

char *_strchr(char *s, char c)
{
char *st;
int i = 0;
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
