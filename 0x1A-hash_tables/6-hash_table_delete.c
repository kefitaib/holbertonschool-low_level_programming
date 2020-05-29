#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table.
 * @ht: hash table.
 * Return: Void.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **arr = ht->array, *tmp, *t;
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
