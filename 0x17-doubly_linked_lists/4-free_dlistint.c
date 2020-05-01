#include "lists.h"

/**
 * free_dlistint - function that free a list
 * @head : first element of a double linked list.
 * Return: Void.
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *l = head;

	while (l)
	{
		head = head->next;
		free(l);
		l = head;
	}
}
