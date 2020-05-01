#include "lists.h"

/**
 * print_dlistint - doubly linked list
 * @h: first element of a double linked list.
 * Return: size of a list
 *
 */


size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *l = h;
	size_t len = 0;

	if (!l)
		return (len);

	for (; l; len++)
	{
		printf("%d\n", l->n);
		l = l->next;
	}

	return (len);
}
