#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers.
 * @min : first integer of the array.
 * @max : last intage rof the array.
 *
 * Return : pointer.
 */

int *array_range(int min, int max)
{
int *tab;
int i;
if (min > max)
return (NULL);

tab = malloc(sizeof(int) * (max - min + 1));
if (tab == NULL)
return (NULL);

for (i = min; i <= max; i++)
tab[i] = i;

return (tab);
}
