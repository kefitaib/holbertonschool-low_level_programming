#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head : first element of the list.
 * Return: data of the deleted element.
 */


int pop_listint(listint_t **head)
{
	listint_t *l = *head;
	int n;

	if (!l)
		return (0);

	*head = l->next;
	n = l->n;
	free(l);

	return (n);
}
