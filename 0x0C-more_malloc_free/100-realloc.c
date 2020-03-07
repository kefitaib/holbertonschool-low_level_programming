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
	char *ptr1, *ptr2;
	unsigned int i = 0;

	if (new_size > old_size)
	{
		ptr1 = ptr;
		free(ptr);
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
		while (i < old_size)
		{
			ptr2[i] = ptr1[i];
			i++;
		}
		return (ptr2);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
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
