#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - checks if malloc is possible
 *@b: amount of bytes
 *Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
