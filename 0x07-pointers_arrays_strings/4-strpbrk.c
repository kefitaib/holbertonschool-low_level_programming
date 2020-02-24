#include "holberton.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s : string.
 * @accept : string.
 * Return: pointer to the byte in s that matches one of the bytes in accept.
 */


char *_strpbrk(char *s, char *accept)
{
int i;
while (s++)
{
i = 0;
while (accept[i] != '\0' && accept[i] != *s)
i++;
if (accept[i] != '\0')
return (s);
}
return (0);
}
