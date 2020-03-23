#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a list.
 * @head : first element of the list.
 * @index : index where to insert the new element.
 * Return: 1 if it succed, -1 if it fail.
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *l = *head, *tmp;
	unsigned int i = 0, j = 0;

	if (!l)
		return (-1);

	while (l->next)
	{
		l = l->next;
		i++;
	}

	if (index > i)
		return (-1);


	l = *head;
	if (index == 0)
	{
		*head = l->next;
		free(l);
		return (1);
	}

	for (j = 0; j < index - 1; j++)
		l = l->next;

	tmp = l->next;
	l->next = tmp->next;

	free(tmp);
	return (1);
}
