#include "holberton.h"
#include <stdlib.h>
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: old array
 *@old_size: size of old array
 *@new_size:size of new array
 *Return: returns pointer to new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
	{
		((char *)p)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (p);
}
