#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars , and initializes it with
 * a specific char.
 * @size : size of an array.
 * @c: character.
 * Return: pointer to an array of char.
 */

char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
if (size == 0)
return (NULL);
p = malloc(sizeof(char) * size);
if (p == NULL)
return (NULL);
else
{
for (i = 0; i < size; i++)
p[i] = c;
return (p);
}
}
