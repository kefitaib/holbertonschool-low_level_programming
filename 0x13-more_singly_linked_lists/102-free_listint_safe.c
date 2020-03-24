#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Free a list.
 * @h : first element of the list.
 * Return: Voidnumber of element in the list.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *l = *h;
	size_t i = 0;

	while (l)
	{
		*h = l->next;
		if (l <= *h)
		{
			free(l);
			*h = NULL;
			break;
		}
		free(l);
		l = *h;
		i++;
	}
	return (i);
}
