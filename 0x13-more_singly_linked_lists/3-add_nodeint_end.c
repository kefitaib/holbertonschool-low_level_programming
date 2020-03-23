#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head : first element of the list.
 * @n : the new element of the list.
 * Return: length of the list.
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *l = *head;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (!l)
		*head = tmp;
	else
	{
		while (l->next)
			l = l->next;

		l->next = tmp;
	}
	return (tmp);
}
