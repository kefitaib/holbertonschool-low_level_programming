#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table.
 * @size: size of the hash table
 *
 * Return: pointer to a hash table.
 */


shash_table_t *shash_table_create(unsigned long int size)
{
	shash_node_t **arr = NULL;
	shash_table_t *ht = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(shash_node_t) * size);
	if (!arr)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = arr;
	ht->shead = NULL;
	ht->stail = NULL;

	for (; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}


/**
 * sorted_list - add a node in a sorted list.
 * @new: new node.
 * @ht: table you want to add or update the key/value to.
 *
 * Return: void.
 */

void sorted_list(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *h = ht->shead, *tmp;

	if (!h)
	{
		ht->shead = new;
		ht->stail = new;
	}
	else
	{
		while (h && strcmp(new->key, h->key) > 0)
		{
			tmp = h;
			h = h->snext;
		}
		if (h == ht->shead)
		{
			new->snext = ht->shead;
			h->sprev = new;
			ht->shead = new;
		}
		else if (h)
		{
			new->snext = h;
			new->sprev = h->sprev;
			h->sprev->snext = new;
			h->sprev = new;
		}
		else
		{
			tmp->snext = new;
			new->sprev = tmp;
			ht->stail = new;
		}
	}
}


/**
 * scheck_key - update a key.
 * @k: key for the nex node.
 * @val: value for the node.
 * @l: singly linked list the key/value to.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int scheck_key(shash_node_t *l, char *k, char *val)
{
	shash_node_t *tmp = l;

	while (tmp)
	{
		if (strcmp(k, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = val;
			free(k);
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}


/**
 * shash_table_set - adds an element to the hash table.
 * @key: key for the nex node.
 * @value: value for the node.
 * @ht: table you want to add or update the key/value to.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new = NULL, **arr = NULL;
	char *val = "", *k = NULL;

	if (!key)
		return (0);

	k = strdup(key);
	if (!k)
		return (0);
	if (value)
	{
		val = strdup(value);
		if (!val)
		{
			free(k);
			return (0);
		}
	}
	index = key_index((unsigned char *)key, ht->size);
	if (scheck_key(ht->array[index], k, val) == 1)
		return (1);
	new = malloc(sizeof(shash_node_t));
	if (!new)
	{
		free(k);
		free(val);
		return (0);
	}
	new->key = k;
	new->value = val;
	new->next = NULL;
	new->snext = NULL;
	new->sprev = NULL;
	arr = ht->array;
	if (arr[index])
		new->next = arr[index];
	arr[index] = new;
	sorted_list(ht, new);
	return (1);
}


/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: table you want to add or update the key/value to.
 * @key: key of a node.
 * Return: pointer to value.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp = NULL;

	if (!key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}


/**
 * shash_table_print - prints a hash table.
 * @ht: hash table.
 * Return: Void.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = ht->shead;

	if (!tmp)
		printf("{}\n");

	else
	{
		putchar('{');
		while (tmp)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->snext)
				printf(", ");
			tmp = tmp->snext;
		}
		printf("}\n");
	}
}


/**
 * shash_table_print_rev - prints a hash table.
 * @ht: hash table.
 * Return: Void.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = ht->stail;

	if (!tmp)
		printf("{}\n");

	else
	{
		putchar('{');
		while (tmp)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->sprev)
				printf(", ");
			tmp = tmp->sprev;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - delete a hash table.
 * @ht: hash table.
 * Return: Void.
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t **arr = ht->array, *tmp, *t;
	unsigned long int i = 0;

	for (; i < ht->size; i++)
	{
		tmp = arr[i];
		if (!tmp)
			continue;

		while (tmp)
		{
			t = tmp;
			tmp = tmp->next;
			free(t->key);
			free(t->value);
			free(t);
		}
	}
	free(arr);
	free(ht);
}
