#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - returns the number of elements in a linked listint_t list.
 * @head : list.
 * Return: length of the list.
 */


int sum_listint(listint_t *head)
{
	listint_t *l = head;
	int i = 0;

	while (l)
	{
		i += l->n;
		l = l->next;
	}

	return (i);
}
