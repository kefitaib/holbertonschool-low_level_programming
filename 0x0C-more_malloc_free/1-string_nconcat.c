#include "holberton.h"
#include <stdlib.h>

/**
 * *_strlen - returns a size of a string
 * @s : pointer to a string.
 * Return: int.
 */

unsigned int _strlen(char *s)
{
if (*s == '\0')
return (0);
return (_strlen(++s) + 1);
}


/**
 * *string_nconcat - concatenates two strings.
 * @s1 : first string.
 * @s2 : second string.
 * @n : integer.
 * Return: pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, size1 = 0, size2 = 0, sizep = 0;
char *p;

if (s1 == NULL)
{
s1 = malloc(sizeof(char));
*s1 = '\0';
}

if (s2 == NULL)
{
s2 = malloc(sizeof(char));
*s2 = '\0';
}

size1 = _strlen(s1);
size2 = _strlen(s2);
if (size2 > n)
size2 = n;
sizep = size1 + size2 + 1;

p = malloc(sizeof(char) * sizep);
if (p == NULL)
return (NULL);

while (s1[i] != '\0')
{
p[i] = s1[i];
i++;
}

while (j < size2)
{
p[i] = s2[j];
j++;
i++;
}
p[i] = '\0';
return (p);
}
