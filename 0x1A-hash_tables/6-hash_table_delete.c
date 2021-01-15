#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *node;
	hash_node_t *next;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
