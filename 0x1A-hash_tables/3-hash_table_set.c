#include "hash_tables.h"

/**
 * check_key - update a key.
 * @k: key for the nex node.
 * @val: value for the node.
 * @l: singly linked list the key/value to.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int check_key(hash_node_t *l, const char *k, char *val)
{
	hash_node_t *tmp = l;

	while (tmp)
	{
		if (strcmp(k, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = val;
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}


/**
 * hash_table_set - adds an element to the hash table.
 * @key: key for the nex node.
 * @value: value for the node.
 * @ht: table you want to add or update the key/value to.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new = NULL, **arr = NULL;
	char *val = NULL, *k = NULL;

	if (!key || !ht)
		return (0);

	if (value)
	{
		val = strdup(value);
		if (!val)
			return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	if (check_key(ht->array[index], key, val) == 1)
		return (1);

	k = strdup(key);
	if (!k)
	{
		free(val);
		return (0);
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(k);
		free(val);
		return (0);
	}
	new->key = k;
	new->value = val;
	new->next = NULL;

	arr = ht->array;
	if (arr[index])
		new->next = arr[index];
	arr[index] = new;

	return (1);
}
