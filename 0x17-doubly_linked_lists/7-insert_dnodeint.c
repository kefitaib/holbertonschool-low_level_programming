#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h : first element of a double linked list.
 * @n : the varible of the new node.
 * @idx : index of the new node
 * Return: pointer to the new node.
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *l = *h;
	unsigned int i = 0;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;
	if (idx == 0)
	{
		if (!l)
			*h = tmp;
		else
		{
			(*h)->prev = tmp;
			tmp->next = *h;
			*h = tmp;
		}
	}
	else
	{
		for (; l; i++)
			l = l->next;
		if (idx > i)
		{
			free(tmp);
			return (NULL);
		}
		l = *h;
		for (i = 0; i < idx - 1; i++)
			l = l->next;
		if (l->next)
		{
			tmp->next = l->next;
			l->next->prev = tmp;
		}
		tmp->prev = l;
		l->next = tmp;
	} return (tmp);
}
