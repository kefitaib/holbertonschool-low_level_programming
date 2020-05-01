#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a given position
 * @head : first element of a double linked list.
 * @index : index of the new node
 * Return: pointer to the new node.
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *l = *head;
	unsigned int i = 0;

	if (!l)
		return (-1);

	if (index == 0)
	{
		if (!l->next)
			*head = NULL;
		else
		{
			*head = l->next;
			l->next->prev = NULL;
		}
		free(l);
	}
	else
	{
		for (; l; i++)
			l = l->next;

		if (index >= i)
			return (-1);

		l = *head;
		for (i = 0; i < index; i++)
			l = l->next;

		if (l->next)
		{
			l->next->prev = l->prev;
			l->prev->next = l->next;
		}
		else
			l->prev->next = NULL;

		free(l);
	}
	return (1);
}
