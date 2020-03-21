#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * free_list - frees a list_t list.
 * @head : first element in the list.
 * Return: void.
 */


void free_list(list_t *head)
{
	list_t *list = head;
	unsigned int i = 0, j;

	while (list)
	{
		list = list->next;
		i++;
	}

	printf("%u\n", i);

	list = head;
	while (i > 0)
	{
		for (j = 1; j < i; j++)
			list = list->next;

		free(list->str);
		free(list);
		list = head;
		i--;
	}
}
