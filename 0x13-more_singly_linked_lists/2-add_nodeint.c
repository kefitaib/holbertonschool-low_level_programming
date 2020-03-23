#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head : first element of the list.
 * @n : the new element of the list.
 * Return: length of the list.
 */



listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (head)
		tmp->next = *head;
	*head = tmp;

	return (*head);

}
