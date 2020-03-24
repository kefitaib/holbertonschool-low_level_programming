#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free a list.
 * @head : first element of the list.
 * Return : Void.
 */

void free_listint2(listint_t **head)
{
	listint_t *l = *head;

	while (l)
	{
		*head = l->next;
		free(l);
		l = *head;
	}
	*head = NULL;
}
