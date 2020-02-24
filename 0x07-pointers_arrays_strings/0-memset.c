#include "holberton.h"

/**
 * *_memset - encodes a string into 1337.
 * @s : string.
 * @b : character.
 * @n : first bytes of s.
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
