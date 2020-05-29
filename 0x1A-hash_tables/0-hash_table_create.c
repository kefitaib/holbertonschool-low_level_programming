#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the hash table
 *
 * Return: pointer to a hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **arr = NULL;
	hash_table_t *ht = NULL;
	unsigned long int i = 0;

	if (!size)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (!arr)
	{
		free(ht);
		return (NULL);
	}

	for (; i < size; i++)
		arr[i] = NULL;

	ht->size = size;
	ht->array = arr;

	return (ht);
}
