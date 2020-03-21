#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 *  list_len - prints all the elements of a list_t list.
 * @h : list.
 * Return: length of the list.
 */

size_t list_len(const list_t *h)
{
	const list_t *l = h;
	size_t i = 0;

	while (l != NULL)
	{
		l = l->next;
		i++;
	}
	return (i);
}
