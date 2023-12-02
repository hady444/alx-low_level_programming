#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: specified size of hash table
 * Return: address of created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;

	h_table = malloc(sizeof(hash_table_t) * size);
	if (!h_table)
		return (NULL);
	return (h_table);
}
