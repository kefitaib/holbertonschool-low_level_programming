#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b : size of the allocated memory.
 * Return: void.
 */

void *malloc_checked(unsigned int b)
{
void *s;
s = malloc(b);
if (s == NULL)
exit (98);
return (s);
}
