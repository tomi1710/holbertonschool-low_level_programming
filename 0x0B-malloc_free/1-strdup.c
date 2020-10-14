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
int i;
for (i = 0; str[i] != '\0'; i++)
{
}
i++;
p = (char *)malloc(sizeof(char) * i);
if (p == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
p[i] = str[i];
}
return (p);
}
