#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head : first element of a double linked list.
 * @n : the varible of the new node.
 * Return: pointer to the new node.
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *l = *head;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;

	if (!l)
		*head = tmp;

	else
	{
		while (l->next)
			l = l->next;

		l->next = tmp;
		tmp->prev = l;
	}

	return (tmp);
}
