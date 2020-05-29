#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table.
 * Return: Void.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **arr = ht->array, *tmp;
	unsigned long int i = 0, x = 0;

	if (!ht || !arr)
		printf("{}\n");

	else
	{
		putchar('{');
		for (; i < ht->size; i++)
		{
			tmp = arr[i];

			if (!tmp)
				continue;

			if (x == 1)
				printf(", ");

			while (tmp)
			{
				x = 1;
				printf("'%s': '%s'", tmp->key, tmp->value);
				if (tmp->next)
					printf(", ");
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
