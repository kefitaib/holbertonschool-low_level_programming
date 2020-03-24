#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints all the elements of a list_t list.
 * @head : list.
 * Return: length of the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *l = head, *tmp;
	size_t i = 0;

	while (l)
	{
		printf("[%p] %d\n", (void *)l, l->n);
		tmp = l;
		l = l->next;
		i++;

		if (tmp <= l)
		{
			printf("-> [%p] %d\n", (void *)l, l->n);
			exit(98);
		}
	}
	return (i);
}
