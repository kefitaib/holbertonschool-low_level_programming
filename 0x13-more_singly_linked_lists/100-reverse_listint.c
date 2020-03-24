#include "lists.h"

/**
 * *reverse_listint - Reverse a list.
 * @head : first elemment in the list.
 * Return: thr new list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *l = *head, *tmp;

	*head = l->next;
	l->next = NULL;
	tmp = l;
	l = *head;

	while (l->next)
	{
		*head = l->next;
		l->next = tmp;
		tmp = l;
		l = *head;
	}
	l->next = tmp;
	*head = l;

	return (*head);
}
