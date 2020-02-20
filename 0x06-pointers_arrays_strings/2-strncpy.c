#include "holberton.h"

/**
 * *_strncpy - concatenates two strings.
 * @dest : first string.
 * @src : second string.
 * @n : integer.
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i, j = 0;
while (src[j] != '\0')
j++;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
