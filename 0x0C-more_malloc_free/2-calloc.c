#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: number of elements
 *@size: size of elements
 *Return: array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
