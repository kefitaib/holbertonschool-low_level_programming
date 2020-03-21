#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head : first element of the list.
 * @str : string for thr new element of the list.
 * Return: length of the list.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	char *p;
	unsigned int i;

	p = strdup(str);
	if (!p)
		return (NULL);

	for (i = 0; p[i]; i++)
		;

	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);

	tmp->len = i;
	tmp->str = p;
	tmp->next = NULL;

	if (head)
		tmp->next = *head;
	*head = tmp;

	return (*head);
}
