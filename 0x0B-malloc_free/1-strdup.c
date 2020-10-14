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
if (str == NULL)
str = "";
for (i = 0; str[i] != '\0'; i++)
{
}
if (i == 0)
return (NULL);
p = (char *)malloc(i);
if (p == NULL)
{
return (NULL);
}
else
{
for (i = 0; str[i] != '\0'; i++)
{
p[i] = str[i];
}
p[i] = '\0';
}
return (p);
}
