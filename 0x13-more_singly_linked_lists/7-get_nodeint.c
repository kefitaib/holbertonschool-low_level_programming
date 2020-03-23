#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Free a list.
 * @head : first element of the list.
 * @index : index of the element.
 * Return: list.
 */



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *l = head;
	unsigned int i = 0, j;

	if (!l)
		return (NULL);

	while (l->next)
	{
		l = l->next;
		i++;
	}

	if (index > i)
		return (NULL);

	l = head;
	for (j = 0; j < index; j++)
		l = l->next;

	return (l);
}
