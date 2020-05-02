#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head : first element of a double linked list.
 * @n : the varible of the new node.
 * Return: pointer to the new node.
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;

	if (*head)
	{
		tmp->next = *head;
		(*head)->prev = tmp;
	}
	*head = tmp;

	return (tmp);
}
