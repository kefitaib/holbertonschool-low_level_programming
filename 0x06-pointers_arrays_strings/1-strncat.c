#include "holberton.h"
#include <string.h>
/**
 * *_strncat - concatenates two strings.
 * @dest : first string.
 * @src : second string.
 * @n : integer.
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0, k = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[k] != '\0')
{
k++;
}
while (j < n && j < k)
{
dest[i] = src[j];
j++;
i++;
}
dest[i + 1] = '\0';
return (dest);
}
