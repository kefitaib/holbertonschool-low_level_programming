#include "holberton.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: the number of elements in the array.
 * @size: the size of each element.
 *
 * Return: pointer void.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *tab;
if (nmemb == 0 || size == 0)
return (NULL);
tab = malloc(nmemb * size);
if (tab == NULL)
return (NULL);

for (i = 0; i < nmemb ; i++)
tab[i] = '0';

return (tab);
}
