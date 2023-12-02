#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int flag = 0;

	if (!ht || ht->array == NULL || ht->size == 0)
		return;
	printf("{");
	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
