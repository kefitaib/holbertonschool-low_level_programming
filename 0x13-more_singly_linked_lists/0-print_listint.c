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
	int n;

	while (l)
	{
		n = l->n;
		printf("%d\n", n);
		i++;
		l = l->next;
	}
	return (i);
}
