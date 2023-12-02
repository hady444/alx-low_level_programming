#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht:hash table
 * @key: key
 * @value: value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_val;
	hash_node_t *node, *new_node;

	if (!ht || ht->array == NULL || ht->size == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			new_val = strdup(value);
			if (!new_val)
				return (0);
			free(node->value);
			node->value = new_val;
			return (1);
		}
		node = node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
                return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
        {
                free(new_node);
		free(new_node->key);
                return (0);
        }
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
