#include "hash_tables.h"
/**
 * hash_table_set - adds a new element to a hash table
 * @ht: hash table
 * @key: new key value
 * @value: new value to assosiate with key
 * Return: returns 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *aux;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	index = key_index((unsigned const char*)key, ht->size);
	aux = (ht->array)[index];
	while (aux != NULL)
	{
		if (strcmp(key, aux->key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}
	new_node = malloc(ht->size * sizeof(hash_node_t *));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
