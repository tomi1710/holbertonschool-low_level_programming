#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - crates an array of a specific char
 *@size: size of array
 *@c: cahracter in array
 *Return: array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;
p = (char*)malloc(size);
if (p == NULL)
return (NULL);
for (i = 0; i <= size; i++)
{
p[i] = c;
}
return (p);
}
