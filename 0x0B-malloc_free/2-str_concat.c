#include "holberton.h"
#include <stdlib.h>

/**
 * *_strlen - returns a size of a string
 * @s : pointer to a string.
 * Return: int.
 */

int _strlen(char *s)
{
if (*s == '\0')
return (0);
return (_strlen(++s) + 1);
}


/**
 * *str_concat - concatenates two strings.
 * @s1 : first string.
 * @s2 : second string.
 * Return: pointer.
 */

char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, size1 = 0, size2 = 0, sizep = 0;
char *p;
if (s1 == NULL && s2 == NULL)
return (NULL);
else
{
if (s1 != NULL)
size1 = _strlen(s1);
if (s2 != NULL)
size2 = _strlen(s2);
sizep = size1 + size2 + 1;
p = malloc(sizeof(char) * sizep);
if (p == NULL)
return (NULL);
while (s1[i] != '\0')
{
p[i] = s1[i];
i++;
}

while (s2[j] != '\0')
{
p[i] = s2[j];
j++;
i++;
}
p[i] = '\0';
return (p);
}
}
