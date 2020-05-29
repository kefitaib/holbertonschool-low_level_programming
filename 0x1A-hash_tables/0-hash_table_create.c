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

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(hash_node_t) * size);
	if (!arr)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = arr;

	for (; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
