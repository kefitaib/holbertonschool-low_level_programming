#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_listint - prints all the elements of a list_t list.
 * @h : list.
 * Return: length of the list.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *l = h;
	size_t i = 0;

	while (l)
	{
		printf("%d\n", l->n);
		l = l->next;
		i++;
	}
	return (i);
}
