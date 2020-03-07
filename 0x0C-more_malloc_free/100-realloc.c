#include "holberton.h"
#include <stdlib.h>

/**
 * *_memcpy - encodes a string into 1337.
 * @dest : destination string.
 * @src : source string.
 * @n : first bytes of src.
 * Return: Always 0.
 */

void *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}


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

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size > old_size)
	{
		ptr1 = ptr;
		free(ptr);
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		ptr2 = ptr;
		_memcpy(ptr2, ptr1, old_size);
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
