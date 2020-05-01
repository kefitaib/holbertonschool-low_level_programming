#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a double linked list
 * @head : first element of a double linked list.
 * Return: sum of all the data.
 *
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *l = head;
	int n = 0;

	if (!l)
		return (n);

	while (l)
	{
		n += l->n;
		l = l->next;
	}

	return (n);
}
