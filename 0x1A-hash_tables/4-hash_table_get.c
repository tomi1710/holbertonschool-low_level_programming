#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key to look for
 * Return: returns the value value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			tmp = ht->array[index];
			while (tmp != NULL)
			{
				if (strcmp(key, tmp->key) == 0)
					return (tmp->value);
				tmp = tmp->next;
			}
		}
		index++;
	}
	return (NULL);
}
