#include "hash_tables.h"

/**
 * key_index - check the code for Holberton School students.
 * @key: key for hte new node.
 * @size: size of the hash table.
 * Return: void.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x;

	x = hash_djb2(key);
	return (x % size);
}
