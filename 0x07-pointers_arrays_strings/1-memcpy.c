#include "holberton.h"

/**
 * *_memcpy - encodes a string into 1337.
 * @dest : destination string.
 * @src : source string.
 * @n : first bytes of src.
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
