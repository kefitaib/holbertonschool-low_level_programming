#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min : first integer of the array.
 * @max : last intage rof the array.
 *
 * Return: Nothing.
 */


int *array_range(int min, int max)
{
int *tab;
int i, j;
if (min > max)
return (NULL);

tab = malloc(sizeof(int) * (max - min + 1));
if (tab == NULL)
return (NULL);

for (i = min, j = 0; i <= max; i++, j++)
tab[j] = i;

return (tab);
}
