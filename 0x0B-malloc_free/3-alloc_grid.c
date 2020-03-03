#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width : integer.
 * @height : integer.
 * Return: pointer.
 */

int **alloc_grid(int width, int height)
{
int **p = NULL, i, j;
if (width < 1 || height < 1)
return (NULL);
else
{
p = malloc(sizeof(int *) * height);
if (p == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
p[i] = malloc(sizeof(int) * width);
if (p[i] == NULL)
{
for (; i >= 0; i--)
free(p[i]);
free(p);
return (NULL);
}
for (j = 0; j < width; j++)
p[i][j] = 0;
}
return (p);
}
}
