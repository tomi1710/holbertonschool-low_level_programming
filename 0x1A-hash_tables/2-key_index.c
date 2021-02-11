#include "hash_tables.h"
/**
 * key_index - returns the index of a specific key
 * @key: key to look for
 * @size: the size of the array
 * Return: returns the spcific index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
