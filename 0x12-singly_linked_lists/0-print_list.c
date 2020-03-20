#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h : list.
 * Return: length of the list.
 */

size_t print_list(const list_t *h)
{
	const list_t *l = h;
	char *p;
	size_t i = 0;
	unsigned int len;

	while (l != NULL)
	{
		p = l->str;
		len = l->len;
		if (!p)
		{
			p = "(nil)";
			len = 0;
		}

		printf("[%u] %s\n", len, p);
		l = l->next;
		i++;
	}
	return (i);
}
