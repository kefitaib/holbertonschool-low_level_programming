#include "lists.h"

/**
 * find_listint_loop - find a loop in a list.
 * @head : first element of the list.
 * Return: pointer to the node where the loop started.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *l = head, *tmp = head;

	while (tmp)
	{
		tmp = tmp->next->next;
		l = l->next;

		if (l == tmp)
		{
			tmp = head;
			while (tmp != l)
			{
				tmp = tmp->next;
				l = l->next;
			}
			return (l);
		}


	}
	return (NULL);
}
