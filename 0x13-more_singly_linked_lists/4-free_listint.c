#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Free a list.
 * @head : first element of the list.
 * Return : Void.
 */

void free_listint(listint_t *head)
{
	listint_t *l = head;

	while (l)
	{
		head = head->next;
		free(l);
		l = head;
	}
}
