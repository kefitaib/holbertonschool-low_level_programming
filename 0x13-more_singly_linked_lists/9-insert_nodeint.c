#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head : list.
 * @idx : index where to insert the new element.
 * @n : the value of the new element.
 * Return: length of the list.
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *l = *head, *tmp;
	unsigned int i = 0, j;

	while (l)
	{
		l = l->next;
		i++;
	}

	if (idx > i)
		return (NULL);

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (idx == i)
		l->next = tmp;
	else
	{
		l = *head;
		for (j = 0; j < idx - 1; j++)
			l = l->next;

		tmp->next = l->next;
		l->next = tmp;
	}
	return (tmp);
}
