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

	if (h)
	{
		l = *h;
		while (l)
		{
			*h = l->next;
			if (*h && l <= *h)
			{
				free(l);
				*h = NULL;
				break;
			}
			free(l);
			l = *h;
			i++;
		}
	}
	return (i);
}
