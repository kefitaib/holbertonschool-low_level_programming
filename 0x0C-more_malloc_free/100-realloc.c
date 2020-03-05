#include "holberton.h"
#include <stdlib.h>

/**
 * *_realloc - prints buffer in hexato the memory previously allocated.
 * @ptr : pointer.
 * @old_size : the ols size of the pointer.
 * @new_size : thr new size of the pointer.
 * Return: Nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

if (new_size > old_size)
{
free(ptr);
ptr = malloc(new_size);
if (ptr == NULL)
return (NULL);
}

if (ptr == NULL)
{
ptr = malloc(new_size);
if (ptr == NULL)
return (NULL);
}


if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

return (ptr);
}
