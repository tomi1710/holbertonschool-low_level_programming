#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *current;
	hash_node_t *next;

	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			free(current->value);
			free(current->key);
			free(current);
			current = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
