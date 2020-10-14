#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup - duplicates a string into a new array
 *@str: string
 *Return: returns new array with a copy of str
 */
char *_strdup(char *str)
{
char *p;
int i, i2;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
}
if (i == 0)
return (NULL);
p = (char *)malloc(i + 1);
if (p == NULL)
return (NULL);
for (i2 = 0; i2 <= i; i2++)
{
p[i2] = str[i2];
}
return (p);
}
