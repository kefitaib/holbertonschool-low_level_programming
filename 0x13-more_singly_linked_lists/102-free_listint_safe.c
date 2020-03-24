#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Free a list.
 * @h : first element of the list.
 * Return: Voidnumber of element in the list.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *l, *tmp;
	size_t i = 0;

	if (*h)
	{
		l = *h;
		while (l)
		{
			tmp = l->next;
			if (l <= tmp)
			{
				free(l);
				tmp = NULL;
				break;
			}
			free(l);
			l = tmp;
			i++;
		}
	}
	*h = tmp;
	return (i);
}
