#include "lists.h"

/**
 * get_dnodeint_at_index - eturns the nth node of a dlistint_t linked list
 * @head : first element of a double linked list.
 * @index : index of a node.
 * Return: pointer to nth node.
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *l = head;
	unsigned int i = 0;

	if (!l)
		return (NULL);

	for (; l; i++)
		l = l->next;

	if (index >= i)
		return (NULL);

	l = head;
	for (i = 0; i < index; i++)
		l = l->next;

	return (l);
}
