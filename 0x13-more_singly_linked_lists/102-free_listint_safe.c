#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Free a list.
 * @h : first element of the list.
 * Return: Voidnumber of element in the list.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *l;
	size_t i = 0;

	l = *h;
	while (l)
	{
		if (l <= l->next)
		{
			free(l);
			*h = NULL;
			i++;
			break;
		}
		*h = l->next;
		free(l);
		l = *h;
		i++;
	}
	return (i);
}
