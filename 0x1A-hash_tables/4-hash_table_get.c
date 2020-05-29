#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: table you want to add or update the key/value to.
 * @key: key of a node.
 * Return: pointer to value.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;

	if (!key || !ht)
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
