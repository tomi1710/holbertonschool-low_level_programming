#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **arr = NULL;
	hash_table_t *hasht = NULL;

	hasht = malloc(sizeof(hash_table_t));
	arr = malloc(sizeof(hash_table_t *) * size);
	if (!arr | !hasht)
	{
		free(arr);
		free(hasht);
		return (NULL);
	}
	hasht->size = size;
	hasht->array = arr;
	return (hasht);
}
