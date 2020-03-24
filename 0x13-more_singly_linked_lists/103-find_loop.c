#include "lists.h"

/**
 * find_listint_loop - find a loop in a list.
 * @head : first element of the list.
 * Return: pointer to the node where the loop started.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *l = head;

	while (l)
	{
		if (l <= l->next)
			return (l->next);

		l = l->next;
	}

	return (NULL);
}
