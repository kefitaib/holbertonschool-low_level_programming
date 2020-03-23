#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h : list.
 * Return: length of the list.
 */


size_t listint_len(const listint_t *h)
{
	const listint_t *l = h;
	size_t i = 0;

	while (l)
	{
		i++;
		l = l->next;
	}

	return (i);
}
