#include "holberton.h"

/**
 * *_strchr - locates a character in a string.
 * @s : string.
 * @c : caracter.
 * Return: position of the caracter.
 */

char *_strchr(char *s, char c)
{
int i;
while (s[i] != '\0')
{
if (s[i] == c)
return (&(s[i]));
i++;
}
return (0);
}
