#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a list
 * @h: first element of a double linked list.
 * Return: size of a list
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
        const dlistint_t *l = h;
	size_t len = 0;

	if (!l)
		return (len);

	for (; l; len++)
		l = l->next;

	return (len);
}
