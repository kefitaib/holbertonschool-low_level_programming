#include "holberton.h"
#include <stdlib.h>

/**
 * _heigth - return heigth or an array.
 * @str : string.
 * Return: integer.
 */

int _heigth(char *str)
{
int i, heigth = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
heigth++;
while (str[i] != ' ' && str[i] != '\0')
i++;
}
}
return (heigth);
}

/**
 * **strtow - function that splits a string into words.
 * @str : string.
 * Return: pointer.
 */

char **strtow(char *str)
{
int i, j = 0, k = 0, l, heigth = 0, width;
char **p = NULL;
heigth = _heigth(str);
p = malloc(sizeof(char *) * heigth + 1);
if (p == NULL)
return (NULL);
for (i = 0; i < heigth; i++)
{
while (str[j] == ' ')
j++;
width = 0;
k = j;
while (str[k] != ' ')
{
width++;
k++;
}
p[i] = malloc(sizeof(char) * width + 1);
if (p[i] == NULL)
{
for (; i >= 0; i--)
free(p[i]);
free(p);
return (NULL);
}
for (l = 0; l < width; l++, j++)
p[i][l] = str[j];
p[i][width] = '\0';
}
p[i] = malloc(sizeof(char));
if (p[i] == NULL)
{
for (; i >= 0; i--)
free(p[i]);
free(p);
return (NULL);
}
p[i] = NULL;
return (p);
}
